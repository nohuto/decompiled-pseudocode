/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x14021CAA0
 * Callers:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiUserFault @ 0x14020D730 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MmEnforceWorkingSetLimit @ 0x140251A38 (MmEnforceWorkingSetLimit.c)
 *     MiRemoveSecureEntry @ 0x14025AE40 (MiRemoveSecureEntry.c)
 *     MiInsertVadEvent @ 0x14025B21C (MiInsertVadEvent.c)
 *     MiInsertInSystemSpace @ 0x14027B460 (MiInsertInSystemSpace.c)
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x1402854CC (MiRemoveFromSystemSpace.c)
 *     MiDeleteProcessShadow @ 0x140285DE8 (MiDeleteProcessShadow.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiReleaseFaultState @ 0x14028FB74 (MiReleaseFaultState.c)
 *     MiUnlockSystemVa @ 0x14029277C (MiUnlockSystemVa.c)
 *     MiInsertVad @ 0x1402969B0 (MiInsertVad.c)
 *     MiFinishVadDeletion @ 0x140297440 (MiFinishVadDeletion.c)
 *     MiFreePhysicalView @ 0x140298638 (MiFreePhysicalView.c)
 *     MiGetVadWakeList @ 0x1402986A0 (MiGetVadWakeList.c)
 *     MiDeletePagablePteRange @ 0x1402B79F0 (MiDeletePagablePteRange.c)
 *     MiUnlockFaultWorkingSet @ 0x1402E3CBC (MiUnlockFaultWorkingSet.c)
 *     MiRotateComplete @ 0x1402EB19C (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1402EB774 (MiDeleteRotateAndStopFaults.c)
 *     MiReleaseWalkLocks @ 0x140302EB0 (MiReleaseWalkLocks.c)
 *     MiSetTrimWhileAgingState @ 0x1403044BC (MiSetTrimWhileAgingState.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031711C (MmAdjustWorkingSetSizeEx.c)
 *     MiCleanWorkingSet @ 0x14031D4D4 (MiCleanWorkingSet.c)
 *     MiMakeSecureExclusive @ 0x1403222F0 (MiMakeSecureExclusive.c)
 *     MiDeleteCloneZombies @ 0x14032267C (MiDeleteCloneZombies.c)
 *     MiWaitForRotateToComplete @ 0x14032BD70 (MiWaitForRotateToComplete.c)
 *     MiBeginProcessClean @ 0x140350150 (MiBeginProcessClean.c)
 *     MiOutSwapWorkingSet @ 0x140351618 (MiOutSwapWorkingSet.c)
 *     MiLocateOldestSecure @ 0x14037DC38 (MiLocateOldestSecure.c)
 *     MmStealTopLevelPage @ 0x140387ED8 (MmStealTopLevelPage.c)
 *     MiDeleteSessionAddressSpace @ 0x140388EEC (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x14038A8F8 (MiSessionRemoveImage.c)
 *     MiCountSystemImageCommitment @ 0x14039E594 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x1403A2274 (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x1403B4B18 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1403B848C (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B8FF0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F3AC8 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F4194 (MiDeleteEmptyPageTableCommit.c)
 *     MiClearCommitReleaseState @ 0x14052B418 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C2A8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14052C494 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C648 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x14052CBD0 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CC34 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052CE6C (MmSetCommitReleaseEligibility.c)
 *     MiRemoveVadEvent @ 0x14053A6D4 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x14053E170 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x14053EA44 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x140544F8C (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054F718 (MiLockWorkingSetForLargeMapping.c)
 *     MiRemovePlaceholderVad @ 0x1405552A8 (MiRemovePlaceholderVad.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140559A00 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x140559CEC (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x14055A078 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x14055A174 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x14055B238 (MiLockDownWorkingSet.c)
 *     MiMapUserLargePages @ 0x14055E670 (MiMapUserLargePages.c)
 *     MiCreateInitialSystemWsles @ 0x140A4F20C (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14020F840 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14055A000 (MiDeleteDeferredCloneDescriptors.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5CCC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2)
{
  int v3; // esi
  _QWORD *v4; // r14
  unsigned __int64 v5; // rbp
  LONG *v6; // rbx
  __int64 v7; // r8
  _DWORD *v8; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 SchedulerAssist; // rdx
  int v11; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v13; // r10
  int v14; // eax
  bool v15; // zf
  _QWORD *v16; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v18; // [rsp+48h] [rbp+10h]

  v3 = 0;
  v4 = 0LL;
  v18 = *(_DWORD *)(a1 + 184);
  v5 = a2;
  if ( (v18 & 7) == 2 )
    v6 = &dword_140C4F780;
  else
    v6 = (LONG *)(a1 + 192);
  if ( (v18 & 7) == 0
    && *(_QWORD *)(a1 + 16)
    && *(_WORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 368) )
  {
    v4 = (_QWORD *)MiDeleteDeferredCloneDescriptors();
  }
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
    v3 = 1;
  MiCheckProcessShadow(a1, 2u);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
  else
    *v6 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = *(_DWORD *)(SchedulerAssist + 24) - 1;
      *(_DWORD *)(SchedulerAssist + 24) = v11;
      if ( !v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        SchedulerAssist = -1LL << ((unsigned __int8)v5 + 1);
        v8 = v13->SchedulerAssist;
        v14 = ~(unsigned __int16)SchedulerAssist;
        v15 = (v14 & v8[5]) == 0;
        v7 = (unsigned int)v14 & v8[5];
        v8[5] = v7;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
  }
  __writecr8(v5);
  if ( v4 )
  {
    do
    {
      v16 = (_QWORD *)*v4;
      ExFreePoolWithTag(v4, 0);
      v4 = v16;
    }
    while ( v16 );
  }
  if ( !v3 && ((v18 & 0x8000000) != 0 || (v18 & 0x4000000) != 0 || (v18 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(a1, SchedulerAssist, v7, v8);
    MiUnlockWorkingSetShared(a1, v5);
  }
}
