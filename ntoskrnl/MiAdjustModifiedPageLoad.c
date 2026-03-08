/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x140360B80
 * Callers:
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 * Callees:
 *     MiUpdateReserveClusterInfo @ 0x14020B44C (MiUpdateReserveClusterInfo.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403561BC (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140356350 (MiUseLowIoPriorityForModifiedPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWakeModifiedPageWriter @ 0x14063982C (MiWakeModifiedPageWriter.c)
 */

void __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v13; // ebp
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rdi
  unsigned __int64 v18; // r14
  unsigned __int64 *v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  signed __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // r11
  __int64 v26; // rax
  char v27; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf
  signed __int32 v33[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 17824);
  v5 = 0x4000LL;
  if ( *(_QWORD *)(a1 + 17216) >> 5 > 0x4000uLL )
    v5 = *(_QWORD *)(a1 + 17216) >> 5;
  v8 = *(_QWORD *)(a1 + 17216) >> 4;
  if ( v8 >= v5 )
    v8 = v5;
  v9 = *(_QWORD *)(a1 + 2560) + *(_QWORD *)(a1 + 2688);
  v10 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16920) + 2384LL);
  v12 = 20000LL;
  if ( v11 > 0x4E20 )
    v12 = v11;
  if ( v9 > v12 && v3 < v9 / 0xA )
    goto LABEL_9;
  v19 = (unsigned __int64 *)(a1 + 864);
  if ( v3 >= v8 )
  {
    v10 = v8 >> 1;
LABEL_37:
    if ( !MiUseLowIoPriorityForModifiedPages(a1) )
      v10 = -1LL;
    MiWakeModifiedPageWriter(a1, v10);
    *(_QWORD *)(a1 + 856) = 0LL;
    *v19 = 0LL;
    goto LABEL_9;
  }
  v20 = *v19 >> 4;
  v21 = 15 * v20 + (v3 >> 4);
  *v19 = v21;
  if ( 15 * v20 > v21 )
    goto LABEL_37;
  if ( v3 < 0x320 )
  {
    *(_QWORD *)(a1 + 856) = 0LL;
    goto LABEL_9;
  }
  v22 = *(_QWORD *)(a1 + 856);
  v23 = v21 <= v3 ? v21 - v3 + v22 : v3 + v22 - v21;
  v24 = v23 + v3;
  *(_QWORD *)(a1 + 856) = v23 + v3;
  if ( v23 > (__int64)(v23 + v3) )
    goto LABEL_37;
  v25 = v8 >> 1;
  v26 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v25 < 0x369D0369D0369DLL )
    v26 = 600 * v25;
  if ( v24 >= v26 )
    goto LABEL_37;
LABEL_9:
  *(_QWORD *)(a1 + 872) = a2;
  if ( (a3 & 7) == 0 )
  {
    v13 = 0;
    if ( (*(_BYTE *)(a1 + 916) & 1) != 0 )
    {
      _InterlockedOr(v33, 0);
      if ( a2 > 0x4000 || (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 904)) >= 0x47868C00 )
      {
        v13 = 1;
        *(_WORD *)(a1 + 916) &= ~1u;
      }
    }
    v14 = *(_DWORD *)(a1 + 17048);
    if ( v14 )
    {
      v15 = a1 + 17056;
      v16 = v14;
      do
      {
        v17 = *(_QWORD *)v15;
        if ( (*(_BYTE *)(*(_QWORD *)v15 + 204LL) & 0x40) == 0 )
        {
          v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v17 + 232));
          if ( *(_DWORD *)(v17 + 132) != *(_DWORD *)(v17 + 128) )
            *(_DWORD *)(v17 + 124) = dword_140D1D1DC;
          *(_DWORD *)(v17 + 136) = 4 * dword_140D1D1DC;
          if ( v13 )
          {
            v27 = *(_BYTE *)(v17 + 207);
            if ( (v27 & 1) != 0 )
              *(_BYTE *)(v17 + 207) = v27 & 0xFE;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 232));
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
              v32 = (v31 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v31;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v18);
        }
        v15 += 8LL;
        --v16;
      }
      while ( v16 );
    }
    if ( v13 )
      MiUpdateReserveClusterInfo(a1, 0LL, 0);
  }
  if ( *(_DWORD *)(a1 + 1192) )
    MiStoreUpdateMemoryConditions(a1);
}
