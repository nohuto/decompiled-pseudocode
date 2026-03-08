/*
 * XREFs of MiPurgeSlabEntries @ 0x140300024
 * Callers:
 *     MiFreeSlabEntries @ 0x140361050 (MiFreeSlabEntries.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 *     MiIsFreeSlabPage @ 0x140654AC8 (MiIsFreeSlabPage.c)
 */

void __fastcall MiPurgeSlabEntries(__int64 a1)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r13
  __int64 v5; // r15
  volatile LONG *v6; // rcx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v17; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  int v24; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 112) )
    return;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = (volatile LONG *)(a1 + 16);
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
      {
        LODWORD(v9) = 4;
      }
      else
      {
        v6 = (volatile LONG *)(a1 + 16);
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
      }
      SchedulerAssist[5] |= v9;
    }
    ExAcquireSpinLockSharedAtDpcLevel(v6);
    v10 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v10 )
      v10 ^= a1;
    v11 = 0LL;
    while ( v10 )
    {
      if ( v2 <= *(_QWORD *)(v10 + 32) )
      {
        if ( v2 >= *(_QWORD *)(v10 + 24) )
          goto LABEL_35;
        v12 = *(_QWORD *)v10;
        v11 = v10;
      }
      else
      {
        v12 = *(_QWORD *)(v10 + 8);
      }
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v12 )
        v10 ^= v12;
      else
        v10 = v12;
    }
    v10 = v11;
LABEL_35:
    while ( v10 )
    {
      v5 = *(unsigned int *)(v10 + 136);
      if ( *(_DWORD *)(v10 + 136)
        && v5 + (unsigned __int64)*(unsigned int *)(v10 + 132) >= 0x200
        && (*(_DWORD *)(v10 + 140) & 1) == 0 )
      {
        v3 = 48LL * *(_QWORD *)(v10 + 24) - 0x220000000000LL;
        v4 = 48LL * *(_QWORD *)(v10 + 32) - 0x220000000000LL;
        break;
      }
      v13 = *(_QWORD **)(v10 + 8);
      v14 = v10;
      if ( v13 )
      {
        do
        {
          v10 = (unsigned __int64)v13;
          v13 = (_QWORD *)*v13;
        }
        while ( v13 );
      }
      else
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v10 || *(_QWORD *)v10 == v14 )
            break;
          v14 = v10;
        }
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
    if ( !v10 )
      break;
    if ( v5 )
    {
      while ( 1 )
      {
        if ( v3 > v4 )
          goto LABEL_52;
        v24 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(__int64 *)(v3 + 24) < 0 );
        }
        if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v3 + 0x220000000000LL) >> 4) > qword_140C65820
          || !_bittest64(
                (const signed __int64 *)(16 * ((__int64)(v3 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL),
                0x36u)
          || !(unsigned int)MiCheckSlabPfnBitmap(v3, 1LL, 0) )
        {
          break;
        }
        if ( (*(_BYTE *)(v3 + 34) & 7) == 2
          && !*(_WORD *)(v3 + 32)
          && ((*(_QWORD *)(v3 + 40) >> 20) & 0x8000000000LL) != 0 )
        {
          MiUnlinkPageFromListEx(v3, 0LL);
          MiDiscardTransitionPteEx(v3, 0LL);
          --v5;
        }
        else if ( !(unsigned int)MiIsFreeSlabPage(v3) )
        {
          break;
        }
LABEL_51:
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v3 += 48LL;
        if ( !v5 )
          goto LABEL_52;
      }
      v5 = 0LL;
      goto LABEL_51;
    }
LABEL_52:
    v2 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x220000000000LL) >> 4) + 1;
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    v6 = (volatile LONG *)(a1 + 16);
    CurrentIrql = 17;
  }
  while ( *(_QWORD *)(a1 + 112) );
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      v20 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    __writecr8(CurrentIrql);
  }
}
