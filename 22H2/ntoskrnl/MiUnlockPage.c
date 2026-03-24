/*
 * XREFs of MiUnlockPage @ 0x140306A9C
 * Callers:
 *     MiFreeLargePageMemory @ 0x14027ECD4 (MiFreeLargePageMemory.c)
 *     MiFindContiguousPages @ 0x140281D60 (MiFindContiguousPages.c)
 *     MiReadyLargePageToFree @ 0x1402AA3C0 (MiReadyLargePageToFree.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1402E6C70 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiLargeFreePageToMdl @ 0x1402EEF1C (MiLargeFreePageToMdl.c)
 *     MiUpdateLargePageSectionPfns @ 0x1403F382C (MiUpdateLargePageSectionPfns.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F50CC (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F5BB4 (MiDeleteSubsectionLargePages.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6188 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiUnlinkNodeLargePages @ 0x1403F6768 (MiUnlinkNodeLargePages.c)
 *     MiInitializeLargeUserBasePfn @ 0x1403F72A0 (MiInitializeLargeUserBasePfn.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541648 (MiMarkFileOnlyPfnBad.c)
 *     MiTransferPartitionPageRun @ 0x140562D50 (MiTransferPartitionPageRun.c)
 *     MiScanPagefileSpace @ 0x1408D0820 (MiScanPagefileSpace.c)
 *     MmAreMdlPagesLocked @ 0x1409C5CE0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockPage(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  v2 = a2;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && a2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (a2 + 1));
        v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v6 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
