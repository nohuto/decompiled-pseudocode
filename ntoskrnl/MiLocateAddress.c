/*
 * XREFs of MiLocateAddress @ 0x140228680
 * Callers:
 *     MiVadSupportsCombine @ 0x1402285E0 (MiVadSupportsCombine.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140228730 (MiCaptureWriteWatchDirtyBit.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x14026AFC0 (MiComputeMaximumFaultCluster.c)
 *     MiResolveDemandZeroFault @ 0x14026B720 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026C360 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1402720E0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiInitializeReadInProgressPfn @ 0x140289390 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 *     MiComputeFaultNode @ 0x14028AE90 (MiComputeFaultNode.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x1402C95DC (MiUpdatePrefetchPriority.c)
 *     MiSharedVaToPartition @ 0x1402E21A4 (MiSharedVaToPartition.c)
 *     MiDeleteEmptyPageTables @ 0x1402EB5E0 (MiDeleteEmptyPageTables.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x1402EC17C (MiAdvanceToLastUntrimmableVa.c)
 *     MiProcessCommitIntact @ 0x1402FDBAC (MiProcessCommitIntact.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiReservePageFileSpace @ 0x14032E800 (MiReservePageFileSpace.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 *     MiImagePageOk @ 0x14034B09C (MiImagePageOk.c)
 *     MiObtainReferencedSecureVad @ 0x14034C5AC (MiObtainReferencedSecureVad.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 *     MiCanGrantExecute @ 0x140643510 (MiCanGrantExecute.c)
 *     MmOutSwapVirtualAddresses @ 0x14065065C (MmOutSwapVirtualAddresses.c)
 *     MmStoreDecommitVirtualMemory @ 0x14065A994 (MmStoreDecommitVirtualMemory.c)
 *     MiFindPlaceholderVadToReplace @ 0x14065E720 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MiUnlockVadRange @ 0x1407D73E8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A2F378 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x140A3989C (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x140A4661C (MiMapChildLargePageVads.c)
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
