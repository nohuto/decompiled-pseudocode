/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     ExpReturnPoolQuota @ 0x140207F24 (ExpReturnPoolQuota.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D860 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249510 (KiDispatchInterrupt.c)
 *     PspRevertContainerImpersonation @ 0x140259D1C (PspRevertContainerImpersonation.c)
 *     CcUnpinFileDataEx @ 0x14025D6F0 (CcUnpinFileDataEx.c)
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MiLogPageAccess @ 0x14027CA90 (MiLogPageAccess.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A23E0 (ObFastDereferenceObjectDeferDelete.c)
 *     IopCallDriverReference @ 0x1402A7820 (IopCallDriverReference.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1402A7B10 (IoSetDiskIoAttributionFromThread.c)
 *     ExpApplyPriorityBoost @ 0x1402A8420 (ExpApplyPriorityBoost.c)
 *     ExDeleteResourceLite @ 0x1402A8CA0 (ExDeleteResourceLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9090 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAD10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     IopDeleteFileObjectExtension @ 0x1402BB7E0 (IopDeleteFileObjectExtension.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402C0F00 (IoReferenceIoAttributionFromThread.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiEmptyPageAccessLog @ 0x1402E1F40 (MiEmptyPageAccessLog.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MmFreeAccessPfnBuffer @ 0x1402F55AC (MmFreeAccessPfnBuffer.c)
 *     FsRtlpClearOwner @ 0x1402FD62C (FsRtlpClearOwner.c)
 *     ExReinitializeResourceLite @ 0x1403187C0 (ExReinitializeResourceLite.c)
 *     MmChangeSectionBackingFile @ 0x14035E968 (MmChangeSectionBackingFile.c)
 *     IopBoostThreadCallback @ 0x1403616C0 (IopBoostThreadCallback.c)
 *     MiUnlockStealVm @ 0x1403BD420 (MiUnlockStealVm.c)
 *     MiStoreWriteModifiedPages @ 0x14046D44A (MiStoreWriteModifiedPages.c)
 *     CcChangeBackingFileObject @ 0x140535218 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x1405793D0 (KiMonitorCacheErrata.c)
 *     PfpServiceMainThreadUnboost @ 0x140582FB0 (PfpServiceMainThreadUnboost.c)
 *     SmTerminateStoreProcess @ 0x1405C9C78 (SmTerminateStoreProcess.c)
 *     MiStoreFreeWriteSupport @ 0x14065C314 (MiStoreFreeWriteSupport.c)
 *     VrpFreeKeyContext @ 0x14068EC34 (VrpFreeKeyContext.c)
 *     ObpUnlockDirectory @ 0x1406C32F8 (ObpUnlockDirectory.c)
 *     ObOpenObjectByNameEx @ 0x1406ED090 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     PspChargeProcessWakeCounter @ 0x1407388E0 (PspChargeProcessWakeCounter.c)
 *     PspProcessDelete @ 0x1407615C0 (PspProcessDelete.c)
 *     VrpDestroyNamespaceNode @ 0x14077BB14 (VrpDestroyNamespaceNode.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x1407AA85C (ObpLockUnrelatedDirectoryShared.c)
 *     ObpLockChildDirectory @ 0x140874DC0 (ObpLockChildDirectory.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14020B950 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( v4 )
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
    ObpDeferObjectDeletion((signed __int64)Object - 48);
  }
}
