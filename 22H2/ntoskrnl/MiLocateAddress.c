/*
 * XREFs of MiLocateAddress @ 0x140217260
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159F4 (MiObtainReferencedSecureVad.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402170D0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiVadSupportsCombine @ 0x1402171C0 (MiVadSupportsCombine.c)
 *     MiImagePageOk @ 0x1402185AC (MiImagePageOk.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiUserFault @ 0x140235870 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1402385D0 (MiComputeMaximumFaultCluster.c)
 *     MiComputeFaultNode @ 0x14025D470 (MiComputeFaultNode.c)
 *     MiHandleTransitionFault @ 0x140262D30 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269C20 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026A860 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     NtUnlockVirtualMemory @ 0x140283040 (NtUnlockVirtualMemory.c)
 *     MiReservePageFileSpace @ 0x140284880 (MiReservePageFileSpace.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEB40 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiSharedVaToPartition @ 0x1402E2788 (MiSharedVaToPartition.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiValidFault @ 0x140333340 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x14033383C (MiUpdatePrefetchPriority.c)
 *     MiDeleteEmptyPageTables @ 0x1403571A0 (MiDeleteEmptyPageTables.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x140357D5C (MiAdvanceToLastUntrimmableVa.c)
 *     MiProcessCommitIntact @ 0x140369168 (MiProcessCommitIntact.c)
 *     MiLockStealUserVm @ 0x1403BD8B8 (MiLockStealUserVm.c)
 *     MiCanGrantExecute @ 0x140645B34 (MiCanGrantExecute.c)
 *     MmOutSwapVirtualAddresses @ 0x140652CBC (MmOutSwapVirtualAddresses.c)
 *     MmStoreDecommitVirtualMemory @ 0x14065CFE4 (MmStoreDecommitVirtualMemory.c)
 *     MiFindPlaceholderVadToReplace @ 0x140660D70 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 *     MiUnlockVadRange @ 0x1406AFF64 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A320A8 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x140A3C580 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x140A492EC (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // r9
  __int64 **result; // rax
  unsigned __int64 v3; // r8
  __int64 **v4; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  result = *(__int64 ***)&Process[1].Spare2[23];
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (*((unsigned int *)result + 6) | ((unsigned __int64)*((unsigned __int8 *)result + 32) << 32))
    || v3 > (*((unsigned int *)result + 7) | ((unsigned __int64)*((unsigned __int8 *)result + 33) << 32)) )
  {
    v4 = *(__int64 ***)&Process[1].Spare2[15];
    if ( v4 )
    {
      do
      {
        if ( v3 > (*((unsigned int *)v4 + 7) | ((unsigned __int64)*((unsigned __int8 *)v4 + 33) << 32)) )
        {
          v4 = (__int64 **)v4[1];
        }
        else
        {
          if ( v3 >= (*((unsigned int *)v4 + 6) | ((unsigned __int64)*((unsigned __int8 *)v4 + 32) << 32)) )
            break;
          v4 = (__int64 **)*v4;
        }
      }
      while ( v4 );
      if ( v4 )
      {
        *(_QWORD *)&Process[1].Spare2[23] = v4;
        return v4;
      }
    }
    return 0LL;
  }
  return result;
}
