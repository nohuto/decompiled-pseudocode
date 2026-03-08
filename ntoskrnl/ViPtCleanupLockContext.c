/*
 * XREFs of ViPtCleanupLockContext @ 0x1405CFF24
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140ADB5A0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140ADB7D8 (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140ADBA18 (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140ADBAD0 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140ADBBF0 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1405D0044 (ViPtReleaseTreeLockFromDpcLevel.c)
 */

void __fastcall ViPtCleanupLockContext(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    ViPtReleaseTreeLockFromDpcLevel(*(_QWORD *)a1, a1);
  if ( (*(_BYTE *)(a1 + 9) & 1) != 0 )
  {
    v2 = *(unsigned __int8 *)(a1 + 8);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v2);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
}
