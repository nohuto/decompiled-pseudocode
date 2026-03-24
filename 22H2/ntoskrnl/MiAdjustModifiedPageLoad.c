/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x14033BADC
 * Callers:
 *     MiWorkingSetManager @ 0x14033BC70 (MiWorkingSetManager.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140253F54 (KiQueryUnbiasedInterruptTime.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStoreUpdateMemoryConditions @ 0x14033A2F4 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14033A9BC (MiUseLowIoPriorityForModifiedPages.c)
 *     MiWakeModifiedPageWriter @ 0x140350344 (MiWakeModifiedPageWriter.c)
 *     MiUpdateReserveClusterInfo @ 0x1403BF6D8 (MiUpdateReserveClusterInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  int v13; // ebp
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rdi
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  signed __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r11
  __int64 v25; // rax
  char v26; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  signed __int32 v32[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 7600);
  v5 = 0x4000LL;
  if ( *(_QWORD *)(a1 + 7104) >> 5 > 0x4000uLL )
    v5 = *(_QWORD *)(a1 + 7104) >> 5;
  v8 = *(_QWORD *)(a1 + 7104) >> 4;
  if ( v8 >= v5 )
    v8 = v5;
  v9 = *(_QWORD *)(a1 + 2240) + *(_QWORD *)(a1 + 2304);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 6848) + 2384LL);
  v11 = 0LL;
  v12 = 20000LL;
  if ( v10 > 0x4E20 )
    v12 = v10;
  if ( v9 > v12 && v3 < v9 / 0xA )
    goto LABEL_9;
  if ( v3 >= v8 )
  {
    v11 = v8 >> 1;
LABEL_37:
    if ( !MiUseLowIoPriorityForModifiedPages(a1) )
      v11 = -1LL;
    MiWakeModifiedPageWriter(a1, v11);
    *(_QWORD *)(a1 + 816) = 0LL;
    *(_QWORD *)(a1 + 824) = 0LL;
    goto LABEL_9;
  }
  v19 = *(_QWORD *)(a1 + 824) >> 4;
  v20 = 15 * v19 + (v3 >> 4);
  *(_QWORD *)(a1 + 824) = v20;
  if ( 15 * v19 > v20 )
    goto LABEL_37;
  if ( v3 < 0x320 )
  {
    *(_QWORD *)(a1 + 816) = 0LL;
    goto LABEL_9;
  }
  v21 = *(_QWORD *)(a1 + 816);
  v22 = v20 <= v3 ? v20 - v3 + v21 : v3 + v21 - v20;
  v23 = v22 + v3;
  *(_QWORD *)(a1 + 816) = v22 + v3;
  if ( v22 > (__int64)(v22 + v3) )
    goto LABEL_37;
  v24 = v8 >> 1;
  v25 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v24 < 0x369D0369D0369DLL )
    v25 = 600 * v24;
  if ( v23 >= v25 )
    goto LABEL_37;
LABEL_9:
  *(_QWORD *)(a1 + 832) = a2;
  if ( (a3 & 7) == 0 )
  {
    v13 = 0;
    if ( (*(_BYTE *)(a1 + 876) & 1) != 0 )
    {
      _InterlockedOr(v32, 0);
      if ( a2 > 0x4000 || (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 864)) >= 0x47868C00 )
      {
        v13 = 1;
        *(_WORD *)(a1 + 876) &= ~1u;
      }
    }
    v14 = *(_DWORD *)(a1 + 6936);
    if ( v14 )
    {
      v15 = a1 + 6944;
      v16 = v14;
      do
      {
        v17 = *(_QWORD *)v15;
        if ( (*(_BYTE *)(*(_QWORD *)v15 + 204LL) & 0x40) == 0 )
        {
          v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v17 + 232));
          if ( *(_DWORD *)(v17 + 132) != *(_DWORD *)(v17 + 128) )
            *(_DWORD *)(v17 + 124) = dword_140CFB18C;
          *(_DWORD *)(v17 + 136) = 4 * dword_140CFB18C;
          if ( v13 )
          {
            v26 = *(_BYTE *)(v17 + 207);
            if ( (v26 & 1) != 0 )
              *(_BYTE *)(v17 + 207) = v26 & 0xFE;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 232));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
                v31 = (v30 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v30;
                if ( v31 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
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
      MiUpdateReserveClusterInfo(a1, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 1160) )
    MiStoreUpdateMemoryConditions(a1);
}
