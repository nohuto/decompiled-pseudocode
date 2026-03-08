/*
 * XREFs of MiStoreUpdateMemoryConditions @ 0x1403561BC
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x140360B80 (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x1403AD2B0 (MiModifiedPageWriter.c)
 *     MiFlushAllPagesWorker @ 0x1406378D4 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x1406379DC (MiFlushAllStoreSwapPages.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140224C00 (MiGetAvailablePagesBelowPriority.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x140356320 (KeQueryEffectiveBasePriorityThread.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140356350 (MiUseLowIoPriorityForModifiedPages.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140356474 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1405BC8E4 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

void __fastcall MiStoreUpdateMemoryConditions(__int64 a1)
{
  volatile LONG *v1; // r15
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned int v5; // r13d
  int v6; // r12d
  int v7; // r14d
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  char v12; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  bool v17; // zf
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF

  v1 = (volatile LONG *)(a1 + 1352);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1352));
  if ( *(_DWORD *)(a1 + 1268) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    v12 = KiIrqlFlags;
    if ( !KiIrqlFlags )
      goto LABEL_17;
    goto LABEL_19;
  }
  v4 = *(_QWORD *)(a1 + 17216);
  v5 = MiUseLowIoPriorityForModifiedPages(a1) == 0;
  if ( v4 < 0xA0 )
  {
    v10 = 0;
    v6 = 1;
    v7 = 18;
  }
  else
  {
    v6 = 0;
    if ( v4 < 0x420 )
    {
      v10 = 1;
      v7 = 18;
    }
    else
    {
      v7 = 8;
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority((_QWORD *)a1, 6u);
      if ( AvailablePagesBelowPriority < 3LL * *(_QWORD *)(*(_QWORD *)(a1 + 16920) + 2392LL) )
      {
        v10 = 2;
      }
      else
      {
        v9 = *(_QWORD *)(a1 + 17824);
        if ( v9 >= AvailablePagesBelowPriority + 0x2000 )
          v10 = (v9 < AvailablePagesBelowPriority + 0x2000 + AvailablePagesBelowPriority) + 2;
        else
          v10 = 4;
      }
    }
  }
  if ( (unsigned int)KeQueryEffectiveBasePriorityThread(*(_QWORD *)(a1 + 1232)) != v7 )
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 1232));
  if ( v6 )
    KeSetEvent((PRKEVENT)(a1 + 1240), 0, 0);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 24LL);
  if ( *(unsigned __int8 *)(v11 + 2040) != v10 || !v10 || *(unsigned __int8 *)(v11 + 2041) != v5 )
  {
    *(_BYTE *)(v11 + 2040) = v10;
    *(_BYTE *)(v11 + 2041) = v5;
    _InterlockedOr(v18, 0);
    SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(v11, v10, v5);
    if ( !v10 )
      SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(*(_QWORD *)(*(_QWORD *)(a1 + 200) + 24LL) + 1408LL, 0LL);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v12 = KiIrqlFlags;
  if ( KiIrqlFlags )
  {
LABEL_19:
    CurrentIrql = KeGetCurrentIrql();
    if ( (v12 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
LABEL_17:
  __writecr8(v3);
}
