/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x1402C3BD0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     ExpApplyPriorityBoost @ 0x14022E970 (ExpApplyPriorityBoost.c)
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     IopDeleteFileObjectExtension @ 0x1402524EC (IopDeleteFileObjectExtension.c)
 *     MiEmptyPageAccessLog @ 0x14025B4D0 (MiEmptyPageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x14026E7A0 (MmFreeAccessPfnBuffer.c)
 *     ExpFreeOwnerEntry @ 0x140275670 (ExpFreeOwnerEntry.c)
 *     IoReferenceIoAttributionFromThread @ 0x140278F68 (IoReferenceIoAttributionFromThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14029C670 (IoSetDiskIoAttributionFromThread.c)
 *     MiMakeSystemCacheRangeValid @ 0x14029F220 (MiMakeSystemCacheRangeValid.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     MiLogPageAccess @ 0x1402BACE0 (MiLogPageAccess.c)
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402CBCD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402CD8D0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     MiDereferenceControlAreaFile @ 0x1402D7994 (MiDereferenceControlAreaFile.c)
 *     PspJobDelete @ 0x1402DD320 (PspJobDelete.c)
 *     PfpServiceMainThreadUnboost @ 0x140382BC0 (PfpServiceMainThreadUnboost.c)
 *     CmpDelayedDerefKeys @ 0x1405ED57C (CmpDelayedDerefKeys.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     CmpRunDownCmRM @ 0x14066D560 (CmpRunDownCmRM.c)
 *     ObpDeleteDirectoryObject @ 0x14069FEB0 (ObpDeleteDirectoryObject.c)
 *     CmpFreePostBlock @ 0x1406E0850 (CmpFreePostBlock.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14075BB48 (MiObtainSectionForDriver.c)
 *     CmpCleanupTransactionState @ 0x140770144 (CmpCleanupTransactionState.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140779DF8 (PfpServiceMainThreadBoostPrep.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2580 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9248 (MiApplyHotPatchToLoadedDriver.c)
 *     PfpScenCtxScenarioSet @ 0x14099AB88 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140315484 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDelete(PVOID Object)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( v3 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
