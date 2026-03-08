/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x140289BA0
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x1402008EC (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiGetVadWakeList @ 0x140289A20 (MiGetVadWakeList.c)
 *     MmEnforceWorkingSetLimit @ 0x140294980 (MmEnforceWorkingSetLimit.c)
 *     MiReleaseFaultState @ 0x1402A2FD4 (MiReleaseFaultState.c)
 *     MiDeleteProcessShadow @ 0x1402A5828 (MiDeleteProcessShadow.c)
 *     MiCountSystemImageCommitment @ 0x1402B0C2C (MiCountSystemImageCommitment.c)
 *     MiReleaseWalkLocks @ 0x1402D45CC (MiReleaseWalkLocks.c)
 *     MiPerformVadSplitting @ 0x1402D581C (MiPerformVadSplitting.c)
 *     MiOutSwapWorkingSet @ 0x1402DB710 (MiOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x1402DB7FC (MiBeginProcessClean.c)
 *     MiUnlockFaultWorkingSet @ 0x1402F7444 (MiUnlockFaultWorkingSet.c)
 *     MiCleanWorkingSet @ 0x1402F92FC (MiCleanWorkingSet.c)
 *     MiDeleteCloneZombies @ 0x1402FBC3C (MiDeleteCloneZombies.c)
 *     MiLocateOldestSecure @ 0x1402FE90C (MiLocateOldestSecure.c)
 *     MiSetTrimWhileAgingState @ 0x1402FF644 (MiSetTrimWhileAgingState.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     MiInsertVadEvent @ 0x14034C254 (MiInsertVadEvent.c)
 *     MiRemoveSecureEntry @ 0x14034D404 (MiRemoveSecureEntry.c)
 *     MiSessionInsertImage @ 0x14036BEC4 (MiSessionInsertImage.c)
 *     MiMapWithLargePages @ 0x14038A6D4 (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14038AB90 (MiFreeUnusedPfnPagesDpc.c)
 *     MiDeleteBootRange @ 0x14038BEB8 (MiDeleteBootRange.c)
 *     MmStealTopLevelPage @ 0x1403D1884 (MmStealTopLevelPage.c)
 *     MiClearCommitReleaseState @ 0x140615BBC (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140616AC8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140616CA8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140616E38 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1406173A4 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x140617408 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14061762C (MmSetCommitReleaseEligibility.c)
 *     MiDeleteRotateAndStopFaults @ 0x140630198 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x1406309AC (MiRotateComplete.c)
 *     MiWaitForRotateToComplete @ 0x1406317E4 (MiWaitForRotateToComplete.c)
 *     MiMakeSecureExclusive @ 0x140631940 (MiMakeSecureExclusive.c)
 *     MiRemoveVadEvent @ 0x1406319E8 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x14063F804 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x1406401D8 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x140641180 (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14064DB98 (MiLockWorkingSetForLargeMapping.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x14066143C (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x140661690 (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x1406619A4 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x140661AA8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x140662BB0 (MiLockDownWorkingSet.c)
 *     MiMapUserLargePages @ 0x1406667E0 (MiMapUserLargePages.c)
 *     MiCreateInitialSystemWsles @ 0x140B3A6E8 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14025F210 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14066192C (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  int v3; // ebp
  _QWORD *v4; // r14
  unsigned __int64 v5; // r15
  _DWORD *v6; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  _QWORD *v12; // rdi
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+48h] [rbp+10h]

  v3 = 0;
  v4 = 0LL;
  v14 = *(_DWORD *)(a1 + 184);
  v5 = a2;
  if ( (v14 & 7) == 2 )
  {
    v6 = &unk_140C69E00;
  }
  else
  {
    v6 = (_DWORD *)(a1 + 192);
    if ( (v14 & 7) == 0 )
    {
      v6 = (_DWORD *)(a1 + 192);
      if ( *(_QWORD *)(a1 + 16) )
      {
        v6 = (_DWORD *)(a1 + 192);
        if ( *(_WORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 352) )
        {
          v4 = (_QWORD *)MiDeleteDeferredCloneDescriptors();
          v6 = (_DWORD *)(a1 + 192);
        }
      }
    }
  }
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
    v3 = 1;
  MiCheckProcessShadow(a1, 2u);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
  else
    *v6 = 0;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  if ( v4 )
  {
    do
    {
      v12 = (_QWORD *)*v4;
      ExFreePoolWithTag(v4, 0);
      v4 = v12;
    }
    while ( v12 );
  }
  if ( !v3 && ((*(_DWORD *)(a1 + 188) & 3) != 0 || (v14 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(a1);
    MiUnlockWorkingSetShared(a1, v5);
  }
}
