/*
 * XREFs of ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140358728
 * Callers:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140356474 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextUpdateMemoryCondition(
        PEX_SPIN_LOCK SpinLock,
        int a2,
        int a3)
{
  int v5; // edi
  ULONG ActiveProcessorCount; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned __int64 v9; // rsi
  __int64 **i; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf

  if ( a2 == 4 )
    v5 = 7;
  else
    v5 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + a2);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v7 = ActiveProcessorCount;
  if ( !a3 )
    goto LABEL_4;
  if ( v5 <= 7 )
  {
    v7 = 3 * ActiveProcessorCount;
LABEL_11:
    v8 = v7 >> 2;
    goto LABEL_12;
  }
  if ( v5 > 8 )
  {
    if ( v5 <= 10 )
      goto LABEL_11;
    v8 = ActiveProcessorCount >> 3;
  }
  else
  {
    v8 = ActiveProcessorCount >> 1;
  }
LABEL_12:
  if ( !v8 )
  {
LABEL_4:
    v8 = 1;
    goto LABEL_5;
  }
  if ( v8 >= 0x10 )
    v8 = 16;
LABEL_5:
  v9 = ExAcquireSpinLockExclusive(SpinLock);
  if ( *((_DWORD *)SpinLock + 32) != v5 )
  {
    *((_DWORD *)SpinLock + 32) = v5;
    for ( i = (__int64 **)*((_QWORD *)SpinLock + 9); i != (__int64 **)(SpinLock + 18); i = (__int64 **)*i )
      KeSetActualBasePriorityThread((ULONG_PTR)i[2], v5);
  }
  *((_DWORD *)SpinLock + 22) = v8;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
}
