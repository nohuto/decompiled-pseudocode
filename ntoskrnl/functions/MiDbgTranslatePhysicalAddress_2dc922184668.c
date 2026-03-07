unsigned __int64 __fastcall MiDbgTranslatePhysicalAddress(unsigned __int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // ebp
  __int16 v7; // bx
  unsigned __int64 v8; // rcx
  int v9; // r11d
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r9
  int v12; // esi
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  int v15; // edx
  __int64 v16; // r15
  int ProtectionPfnCompatible; // eax
  __int64 v18; // r9
  __int64 *v19; // r15
  __int64 v20; // r8
  __int64 v21; // r8
  int v22; // edx
  unsigned __int64 v23; // rax
  char v24; // di
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned int v29; // r8d
  volatile signed __int64 *v30; // rsi
  unsigned __int64 ValidPte; // rax
  __int64 v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+78h] [rbp+20h] BYREF

  v3 = qword_140C67CC8;
  v4 = 0;
  v7 = a1;
  if ( !qword_140C67CC8 || !(unsigned int)MiCheckPhysicalAddressRange(a1, 1LL) )
    return 0LL;
  *(_DWORD *)a3 = 0;
  v10 = v3 << 25 >> 16;
  v11 = v8 >> 12;
  v33 = v8 >> 12;
  v12 = v9 + (((unsigned __int8)v9 & a2) != 0 ? 3 : 0);
  if ( (a2 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v9) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        v15 = 4;
      else
        v15 = (-1LL << ((unsigned __int8)v9 + CurrentIrql)) & 4;
      SchedulerAssist[5] |= v15;
      v11 = v8 >> 12;
    }
  }
  *(_BYTE *)(a3 + 4) = CurrentIrql;
  if ( v11 <= qword_140C65820 && _bittest64((const signed __int64 *)(48 * v11 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    v16 = 48 * v11 - 0x220000000000LL;
    if ( (a2 & 4) != 0 )
    {
      *(_DWORD *)a3 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        if ( (a2 & 0x41) != 0 || (KiBugCheckActive & 3) == 0 )
          return 0LL;
        dword_140C67CD0 += v9;
        *(_DWORD *)a3 = 4;
      }
    }
    else
    {
      *(_DWORD *)a3 = 2;
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
    }
    *(_QWORD *)(a3 + 8) = v16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v12, v16);
    v18 = v33;
    v12 = ProtectionPfnCompatible | 8;
    if ( (*(_BYTE *)(v16 + 34) & 0xC0) != 0xC0 )
      v12 = ProtectionPfnCompatible;
    goto LABEL_53;
  }
  v19 = (__int64 *)(a3 + 16);
  v20 = a3 + 16;
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)a3 = 8;
    if ( !(unsigned int)MiFreezeIoPfnNode(v11, v9, v20) )
      return 0LL;
  }
  else
  {
    *(_DWORD *)a3 = 16;
    MiFreezeIoPfnNode(v11, 0, v20);
  }
  v21 = *v19;
  v18 = v33;
  v22 = 3;
  if ( !*v19
    || (v23 = 2 * (((unsigned int)v33 & ((1 << (dword_140C65760 - 12)) - 1)) - *(_DWORD *)(v21 + 24)),
        v22 = (*(_DWORD *)(v21 + 4 * (v23 >> 5) + 44) >> (v23 & 0x1F)) & 3,
        v22 == 3) )
  {
    if ( (a2 & 4) == 0 )
      v4 = v22;
    v22 = v4;
    if ( (a2 & 0x28) == 0 )
      goto LABEL_40;
    v24 = a2 & 0xD7;
  }
  else
  {
    v24 = a2 & 0xC7;
    if ( v22 )
    {
      if ( v22 == 2 )
        a2 = v24 | 0x20;
      else
        a2 = v24 | 8;
      goto LABEL_40;
    }
  }
  a2 = v24 | 0x10;
LABEL_40:
  if ( (a2 & 8) == 0 )
  {
    if ( (a2 & 0x10) != 0 )
    {
      v25 = __readcr4();
      if ( (v25 & 0x20080) != 0 )
      {
        __writecr4(v25 ^ 0x80);
        __writecr4(v25);
      }
      else
      {
        v26 = __readcr3();
        __writecr3(v26);
      }
      v12 |= 0x10u;
    }
    else
    {
      if ( (a2 & 0x20) == 0 )
      {
LABEL_60:
        MiDbgUnTranslatePhysicalAddress(a3);
        return 0LL;
      }
      v27 = __readcr4();
      if ( (v27 & 0x20080) != 0 )
      {
        __writecr4(v27 ^ 0x80);
        __writecr4(v27);
      }
      else
      {
        v28 = __readcr3();
        __writecr3(v28);
      }
      v12 |= 0x18u;
    }
  }
  if ( v22 == 3 )
    ++dword_140C67CD0;
LABEL_53:
  v29 = v12 | 0xA0000000;
  v30 = (volatile signed __int64 *)qword_140C67CC8;
  ValidPte = MiMakeValidPte(qword_140C67CC8, v18, v29);
  if ( (a2 & 0x41) != 0 )
    byte_140C67CC0 = 1;
  if ( _InterlockedCompareExchange64(v30, ValidPte, 0LL) )
    goto LABEL_60;
  *(_DWORD *)a3 |= 0x20u;
  if ( (*(_DWORD *)a3 & 0x12) != 0 )
    KeFlushSingleTb(v10, 0, 1u);
  else
    KeFlushSingleCurrentTb(v10, 0);
  return v10 + (v7 & 0xFFF);
}
