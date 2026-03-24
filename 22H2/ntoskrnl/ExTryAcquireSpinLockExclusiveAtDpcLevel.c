/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402610E0
 * Callers:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     PopPepWork @ 0x140260D5C (PopPepWork.c)
 *     MiCopyDataPageToImagePage @ 0x140284A68 (MiCopyDataPageToImagePage.c)
 *     MiReferenceControlArea @ 0x1402D6FD4 (MiReferenceControlArea.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1402F7C00 (MmDoesFileHaveUserWritableReferences.c)
 *     MiCanFileBeTruncatedInternal @ 0x1402F93FC (MiCanFileBeTruncatedInternal.c)
 *     MmFlushImageSection @ 0x1403107A0 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x140310910 (MiForceSectionClosed.c)
 *     MiDeleteEmptySubsections @ 0x14031676C (MiDeleteEmptySubsections.c)
 *     MmChangeSectionBackingFile @ 0x14031C484 (MmChangeSectionBackingFile.c)
 *     MiReferencePfBackedSection @ 0x14031E588 (MiReferencePfBackedSection.c)
 *     MiLockSectionControlArea @ 0x14033D954 (MiLockSectionControlArea.c)
 *     MiCopyHeaderIfResident @ 0x14035A290 (MiCopyHeaderIfResident.c)
 *     MiProcessDereferenceList @ 0x14038746C (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x1403DB290 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x140528AF8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140528CEC (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140529CA8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140529ED8 (MiProcessDeleteOnClose.c)
 *     MmRemoveSystemCacheFromDump @ 0x140538ACC (MmRemoveSystemCacheFromDump.c)
 *     MiDbgMarkPfnModified @ 0x140545C2C (MiDbgMarkPfnModified.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140546130 (MiDbgTranslatePhysicalAddress.c)
 *     PspIumReplenishPartitionPages @ 0x140583EB8 (PspIumReplenishPartitionPages.c)
 *     sub_1405CC010 @ 0x1405CC010 (sub_1405CC010.c)
 *     KiForceSymbolReferences @ 0x140A915EC (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5D30 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 result; // rax
  unsigned int v5; // ebx
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[6];
      SchedulerAssist[6] = v7 + 1;
      if ( v7 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    result = ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
    v5 = result;
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    if ( !_InterlockedCompareExchange(a1, 0x80000000, 0) )
      return 1LL;
    v5 = 0;
  }
  v6 = CurrentPrcb->SchedulerAssist;
  if ( v6 && CurrentPrcb->NestingLevel <= 1u )
  {
    v8 = v6[6] - 1;
    v6[6] = v8;
    if ( !v8 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  return v5;
}
