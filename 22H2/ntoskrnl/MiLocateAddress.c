/*
 * XREFs of MiLocateAddress @ 0x14025B070
 * Callers:
 *     MiProcessCommitIntact @ 0x140201780 (MiProcessCommitIntact.c)
 *     MiProbeLockFrame @ 0x14020AC90 (MiProbeLockFrame.c)
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiUserFault @ 0x14020D730 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x14020F610 (MiComputeMaximumFaultCluster.c)
 *     MiResolveDemandZeroFault @ 0x14020FB10 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x140210810 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x140215390 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x140217410 (MiHandleTransitionFault.c)
 *     MiReservePageFileSpace @ 0x14023CB00 (MiReservePageFileSpace.c)
 *     MiComputeFaultNode @ 0x14023EA70 (MiComputeFaultNode.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiSharedVaToPartition @ 0x140240DBC (MiSharedVaToPartition.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14025A9BC (MiCaptureWriteWatchDirtyBit.c)
 *     MiObtainReferencedSecureVad @ 0x14025AF50 (MiObtainReferencedSecureVad.c)
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     MiInitializeReadInProgressPfn @ 0x14027C5B0 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 *     NtUnlockVirtualMemory @ 0x1402AE5C0 (NtUnlockVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiCheckVirtualAddress @ 0x1402E34B0 (MiCheckVirtualAddress.c)
 *     MiImagePageOk @ 0x1402E3BB0 (MiImagePageOk.c)
 *     MmStoreDecommitVirtualMemory @ 0x14032B734 (MmStoreDecommitVirtualMemory.c)
 *     MiLockStealUserVm @ 0x140333FE4 (MiLockStealUserVm.c)
 *     MiUpdatePrefetchPriority @ 0x140337770 (MiUpdatePrefetchPriority.c)
 *     NtLockVirtualMemory @ 0x140339070 (NtLockVirtualMemory.c)
 *     MmOutSwapVirtualAddresses @ 0x1403504CC (MmOutSwapVirtualAddresses.c)
 *     MiCrcStillIntact @ 0x1403674C4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4610 (MiDeleteEmptyPageTables.c)
 *     MiCanGrantExecute @ 0x140548018 (MiCanGrantExecute.c)
 *     MiWriteAwePtes @ 0x14054E1D8 (MiWriteAwePtes.c)
 *     MiFindPlaceholderVadToReplace @ 0x140555134 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MiLockVadRange @ 0x14061E040 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x140620550 (MiUnlockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C87F4 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x1408D0F90 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x1408D99B0 (MiMapChildLargePageVads.c)
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
      while ( 1 )
      {
        if ( v3 > (*((unsigned int *)v4 + 7) | ((unsigned __int64)*((unsigned __int8 *)v4 + 33) << 32)) )
        {
          v4 = (__int64 **)v4[1];
        }
        else
        {
          if ( v3 >= (*((unsigned int *)v4 + 6) | ((unsigned __int64)*((unsigned __int8 *)v4 + 32) << 32)) )
          {
            *(_QWORD *)&Process[1].Spare2[23] = v4;
            return v4;
          }
          v4 = (__int64 **)*v4;
        }
        if ( !v4 )
          return 0LL;
      }
    }
    return 0LL;
  }
  return result;
}
