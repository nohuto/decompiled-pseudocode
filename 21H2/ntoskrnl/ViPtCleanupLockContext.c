/*
 * XREFs of ViPtCleanupLockContext @ 0x140601FCC
 * Callers:
 *     VfPtAddStackInfoIfNotExist @ 0x140A9D4F0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtGenerateTraceInformation @ 0x140A9D738 (VfPtGenerateTraceInformation.c)
 *     VfPtProcessAllocPoolInfo @ 0x140A9D980 (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140A9DA38 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140A9DB60 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ViPtReleaseTreeLockFromDpcLevel @ 0x1406020E8 (ViPtReleaseTreeLockFromDpcLevel.c)
 */

char __fastcall ViPtCleanupLockContext(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v3; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  LOBYTE(v1) = *(_BYTE *)(a1 + 9);
  if ( (v1 & 2) != 0 )
  {
    ViPtReleaseTreeLockFromDpcLevel(*(_QWORD *)a1, a1);
    LOBYTE(v1) = *(_BYTE *)(a1 + 9);
  }
  if ( (v1 & 1) != 0 )
  {
    LOBYTE(v1) = KiIrqlFlags;
    v3 = *(unsigned __int8 *)(a1 + 8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v1) = KeGetCurrentIrql();
        if ( (unsigned __int8)v1 <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v1 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v1 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v6 = (v1 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v1;
          if ( v6 )
            LOBYTE(v1) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return v1;
}
