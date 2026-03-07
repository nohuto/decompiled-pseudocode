__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v5; // r14
  unsigned __int8 v6; // al
  __int64 v7; // r13
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 LeafVa; // rax
  char *AnyMultiplexedVm; // rsi
  int v12; // eax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r15
  int v16; // ecx
  __int64 v17; // r14
  __int64 v18; // r12
  unsigned __int64 v19; // rsi
  __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  bool v23; // zf
  __int64 v24; // r14
  __int64 v25; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int8 v29; // [rsp+20h] [rbp-148h]
  __int64 v30; // [rsp+28h] [rbp-140h] BYREF
  __int64 v31; // [rsp+30h] [rbp-138h]
  unsigned __int64 v32; // [rsp+38h] [rbp-130h]
  unsigned __int64 *v33; // [rsp+40h] [rbp-128h]
  __int128 v34; // [rsp+48h] [rbp-120h] BYREF
  __int64 v35; // [rsp+58h] [rbp-110h]
  __int64 v36; // [rsp+60h] [rbp-108h]
  _QWORD v37[22]; // [rsp+70h] [rbp-F8h] BYREF

  v31 = a1;
  v30 = 0LL;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v33 = v5;
  v6 = MiLockWorkingSetShared(v5);
  v29 = v6;
  if ( a2 > a3 )
    goto LABEL_23;
  v7 = 0LL;
  v36 = 0LL;
  v8 = (__int64)(a3 << 25) >> 16;
  v35 = v8;
LABEL_3:
  v34 = 0LL;
  memset((char *)v37 + 4, 0, 0xACuLL);
  LODWORD(v37[0]) = 2145;
  v9 = (__int64)((a2 << 25) - v7) >> 16;
  LeafVa = MiGetLeafVa(v9);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C6A1D8 && LeafVa <= qword_140C66CF0 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v12 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v9, 0);
  if ( v12 )
  {
    LODWORD(v34) = v12 - 1;
    v13 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v34 + 1) = v13;
  }
  else
  {
    LODWORD(v37[0]) |= 4u;
    v37[21] = &v34;
    v37[2] = 0LL;
    v37[3] = AnyMultiplexedVm;
    BYTE4(v37[0]) = BYTE4(v37[0]) & 0xE3 | 4;
    v37[20] = MiGetNextPageTableTail;
    HIBYTE(v37[0]) = v29;
    v37[4] = (__int64)((a2 << 25) - v7) >> 16;
    v37[5] = v8;
    MiWalkPageTables((__m128i *)v37);
    v13 = *((_QWORD *)&v34 + 1);
  }
  v14 = a3 + 8;
  if ( v13 )
  {
    v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v15 = 0LL;
    v13 = a3 + 8;
  }
  v32 = v15;
  v16 = *(_DWORD *)(v31 + 48) >> 7;
  if ( (*(_DWORD *)(v31 + 48) & 0x70) != 0x20 || (v16 & 0x1F) == 1 )
  {
    if ( (v16 & 5) != 5 )
      v30 += (__int64)(v13 - a2) >> 3;
    a2 = v13;
  }
  else if ( a2 < v13 )
  {
    v24 = v30;
    v25 = v31;
    do
    {
      if ( (unsigned int)MiPteNeedsCommitCharge(v25, a2) )
        ++v24;
      a2 += 8LL;
    }
    while ( a2 < v13 );
    v30 = v24;
    v14 = a3 + 8;
    v5 = v33;
  }
  if ( a2 != v14 )
  {
    v17 = v30;
    v18 = v31;
    v19 = (__int64)((a2 << 25) - v7) >> 16;
    while ( 1 )
    {
      v20 = *(_QWORD *)a2;
      if ( MiPteInShadowRange(a2)
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v20 & 1) != 0
        && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v27 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
          v28 = v20 | 0x20;
          if ( (v27 & 0x20) == 0 )
            v28 = v20;
          v20 = v28;
          if ( (v27 & 0x42) != 0 )
            v20 = v28 | 0x42;
        }
      }
      v30 = v20;
      if ( !v20 )
        break;
      if ( (v20 & 1) != 0 )
      {
        if ( (v20 & 0x200) != 0 )
          goto LABEL_19;
        v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        if ( *(__int64 *)(v21 + 40) >= 0
          || (*(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) != MiGetProtoPteAddress(v18, v19 >> 12, 0, &v30) )
        {
          goto LABEL_19;
        }
        goto LABEL_26;
      }
      if ( (v20 & 0x400) != 0 )
      {
        if ( (unsigned int)MiIsPrototypePteVadLookup(v20) )
        {
          v23 = (v20 & 0xA0) == 0xA0;
          goto LABEL_25;
        }
        if ( qword_140C657C0 && (v20 & 0x10) == 0 )
          v20 &= ~qword_140C657C0;
        if ( v20 >> 16 != MiGetProtoPteAddress(v18, v19 >> 12, 0, &v30)
          || (*(_DWORD *)(v18 + 48) & 0x70) == 0x20 && !(unsigned int)MiPteNeedsCommitCharge(v18, a2) )
        {
          goto LABEL_19;
        }
LABEL_26:
        ++v17;
      }
LABEL_19:
      a2 += 8LL;
      v19 += 4096LL;
      if ( (a2 & 0xFFF) == 0 || a2 > a3 )
      {
        v30 = v17;
        v5 = v33;
        MiUnlockPageTableInternal((__int64)v33, v32);
        v8 = v35;
        v7 = v36;
        if ( a2 > a3 )
          goto LABEL_22;
        goto LABEL_3;
      }
    }
    v23 = (unsigned int)MiPteNeedsCommitCharge(v18, a2) == 0;
LABEL_25:
    if ( v23 )
      goto LABEL_19;
    goto LABEL_26;
  }
  if ( v15 )
    MiUnlockPageTableInternal((__int64)v5, v15);
LABEL_22:
  v6 = v29;
LABEL_23:
  MiUnlockWorkingSetShared((__int64)v5, v6);
  return v30;
}
