__int64 __fastcall MiConvertSmallPageRangeToLarge(__int64 a1, int a2)
{
  char v2; // r9
  unsigned __int64 v3; // r13
  char v4; // si
  _BOOL8 v5; // r15
  unsigned __int64 v6; // r14
  unsigned __int8 CurrentIrql; // r12
  volatile signed __int64 *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rdx
  signed __int64 v11; // rdx
  char v12; // dl
  char v13; // cl
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rdx
  unsigned __int8 v17; // r8
  _DWORD *v18; // r10
  __int64 v19; // rdx
  signed __int64 v20; // rcx
  signed __int64 v21; // rcx
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v24; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // cl
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  volatile signed __int64 v31; // [rsp+B0h] [rbp-58h]
  int v32; // [rsp+158h] [rbp+50h] BYREF
  int v33; // [rsp+160h] [rbp+58h]
  unsigned __int64 v34; // [rsp+168h] [rbp+60h]

  v33 = a2;
  v2 = a2;
  v3 = 48 * a1 - 0x220000000000LL;
  v4 = 0;
  v5 = (*(_BYTE *)(v3 + 34) & 7) != 6;
  v6 = v3 + 48 * MiLargePageSizes[a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v16) = 4;
    else
      v16 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v16;
    v2 = v33;
  }
  if ( v3 < v6 )
  {
    v34 = 0xFFFFFF0000000000uLL;
    v8 = (volatile signed __int64 *)(v3 + 40);
    do
    {
      v32 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8 - 4, 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v32);
          while ( *((__int64 *)v8 - 2) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v8 - 4, 0x3FuLL) );
        v2 = v33;
      }
      if ( v5 )
      {
        MiSetPfnTbFlushStamp((__int64)(v8 - 5), 0, 1);
        MiSetPfnNodeBlinkLow((__int64)(v8 - 5), 0);
        v2 = v33;
        *((_QWORD *)v8 - 2) = *(v8 - 2) & 0xC000000000000000uLL | 1;
        *((_WORD *)v8 - 4) = 2;
        if ( v8 - 5 != (volatile signed __int64 *)v3 )
          *((_BYTE *)v8 - 6) = *((_BYTE *)v8 - 6) & 0xF8 | 6;
      }
      if ( *(__int64 *)v8 < 0 )
        *v8 &= ~0x8000000000000000uLL;
      v9 = *v8;
      *((_BYTE *)v8 - 5) &= 0xF8u;
      v10 = _InterlockedCompareExchange64(v8, v9 & 0x8FFFFFFFFFFFFFFFuLL, v9);
      if ( v9 != v10 )
      {
        do
        {
          v20 = v10;
          v10 = _InterlockedCompareExchange64(v8, v10 & 0x8FFFFFFFFFFFFFFFuLL, v10);
        }
        while ( v20 != v10 );
      }
      *((_QWORD *)v8 - 5) = 0LL;
      *((_QWORD *)v8 - 4) = 0LL;
      *((_QWORD *)v8 - 3) = 0LL;
      v31 = *v8;
      v11 = _InterlockedCompareExchange64(v8, *v8 & 0xFFFFFF0000000000uLL, *v8);
      if ( v31 != v11 )
      {
        do
        {
          v21 = v11;
          v11 = _InterlockedCompareExchange64(v8, v34 & v11, v11);
        }
        while ( v21 != v11 );
      }
      v12 = *((_BYTE *)v8 - 4);
      *((_QWORD *)v8 - 4) = 0LL;
      *((_QWORD *)v8 - 2) &= ~0x4000000000000000uLL;
      *v8 |= 0x10000000000uLL;
      if ( v8 - 5 == (volatile signed __int64 *)v3 )
        v13 = v12 ^ (v12 ^ ~v2) & 3;
      else
        v13 = v12 & 0xFC;
      *((_BYTE *)v8 - 4) = v13;
      *((_BYTE *)v8 - 6) &= ~0x10u;
      _InterlockedAnd64(v8 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v4 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
        {
          v22 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v22 - 2) <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v24 = CurrentPrcb->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v26 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        v17 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 <= 0xFu )
        {
          v18 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v17 == 2 )
            LODWORD(v19) = 4;
          else
            v19 = (-1LL << (v17 + 1)) & 4;
          v18[5] |= v19;
        }
        CurrentIrql = v17;
      }
      v2 = v33;
      v8 += 6;
      ++v4;
    }
    while ( (unsigned __int64)(v8 - 5) < v6 );
  }
  if ( KiIrqlFlags )
  {
    v27 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
    {
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v26 = (v30 & v29[5]) == 0;
      v29[5] &= v30;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick(v28);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
