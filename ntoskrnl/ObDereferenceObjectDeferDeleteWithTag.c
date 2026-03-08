/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x140283390
 * Callers:
 *     IoReferenceIoAttributionFromThread @ 0x140216E60 (IoReferenceIoAttributionFromThread.c)
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     FsRtlpClearOwner @ 0x14023AB1C (FsRtlpClearOwner.c)
 *     PspRevertContainerImpersonation @ 0x140248164 (PspRevertContainerImpersonation.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14025D990 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     IopCallDriverReference @ 0x14027F1E0 (IopCallDriverReference.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14027F900 (IoSetDiskIoAttributionFromThread.c)
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiEmptyPageAccessLog @ 0x14028C160 (MiEmptyPageAccessLog.c)
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     ExpReturnPoolQuota @ 0x140294F44 (ExpReturnPoolQuota.c)
 *     IopDeleteFileObjectExtension @ 0x140298CFC (IopDeleteFileObjectExtension.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     ExReinitializeResourceLite @ 0x1402CB110 (ExReinitializeResourceLite.c)
 *     MmChangeSectionBackingFile @ 0x1402F34E4 (MmChangeSectionBackingFile.c)
 *     IopBoostThreadCallback @ 0x1402F6CA0 (IopBoostThreadCallback.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiLogPageAccess @ 0x140326EF0 (MiLogPageAccess.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14033B5E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1403441C0 (ObFastDereferenceObjectDeferDelete.c)
 *     MmFreeAccessPfnBuffer @ 0x14035B5FC (MmFreeAccessPfnBuffer.c)
 *     MiUnlockStealVm @ 0x1403B7AF8 (MiUnlockStealVm.c)
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     CcChangeBackingFileObject @ 0x140532D48 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x140576EC0 (KiMonitorCacheErrata.c)
 *     PfpServiceMainThreadUnboost @ 0x140580A80 (PfpServiceMainThreadUnboost.c)
 *     SmTerminateStoreProcess @ 0x1405C77C8 (SmTerminateStoreProcess.c)
 *     MiStoreFreeWriteSupport @ 0x140659CD0 (MiStoreFreeWriteSupport.c)
 *     ObpUnlockDirectory @ 0x140699588 (ObpUnlockDirectory.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     VrpDestroyNamespaceNode @ 0x140737134 (VrpDestroyNamespaceNode.c)
 *     VrpFreeKeyContext @ 0x14078D308 (VrpFreeKeyContext.c)
 *     PspChargeProcessWakeCounter @ 0x1407CA2E0 (PspChargeProcessWakeCounter.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x1407DD1A8 (ObpLockUnrelatedDirectoryShared.c)
 *     ObpLockChildDirectory @ 0x140871F00 (ObpLockChildDirectory.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1402ECA68 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
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
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
