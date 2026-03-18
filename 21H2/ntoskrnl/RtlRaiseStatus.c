/*
 * XREFs of RtlRaiseStatus @ 0x1402D37A0
 * Callers:
 *     FsRtlInitializeLargeMcb @ 0x140202160 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1402021D0 (FsRtlInitializeBaseMcbEx.c)
 *     RtlAreNamesEqual @ 0x140212760 (RtlAreNamesEqual.c)
 *     KiWaitForAllObjects @ 0x1402175B8 (KiWaitForAllObjects.c)
 *     RtlIsNameInExpression @ 0x140219D90 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x140219E10 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140219EC0 (RtlpIsNameInExpressionPrivate.c)
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14021F468 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAddEntry @ 0x14022C788 (FsRtlAddEntry.c)
 *     PsChargePoolQuota @ 0x1402331B0 (PsChargePoolQuota.c)
 *     CcZeroDataOnDisk @ 0x1402458E0 (CcZeroDataOnDisk.c)
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     FsRtlCancelNotify @ 0x14024CCD0 (FsRtlCancelNotify.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1402581E0 (CcMdlWriteComplete2.c)
 *     RtlpUnwindOpSlots @ 0x14025DAA8 (RtlpUnwindOpSlots.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     CcGetVacbMiss @ 0x1402858A0 (CcGetVacbMiss.c)
 *     RtlRaiseException @ 0x140294A60 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x140295210 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     RtlpxVirtualUnwind @ 0x140296FC0 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x140297430 (RtlpUnwindPrologue.c)
 *     KiInitializeUserApc @ 0x14029A86C (KiInitializeUserApc.c)
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 *     CcZeroDataInCache @ 0x14029C34C (CcZeroDataInCache.c)
 *     MiProbeAndLockPages @ 0x14029C5B0 (MiProbeAndLockPages.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeSuspendThread @ 0x1402EE3D8 (KeSuspendThread.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     IopProbeAndLockPages_1 @ 0x1403198A0 (IopProbeAndLockPages_1.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     CcMapAndRead @ 0x140328510 (CcMapAndRead.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 *     CcPinFileData @ 0x14032AD00 (CcPinFileData.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140349670 (ExAllocatePoolWithTagFromNode.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140349710 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1403A6AE0 (RtlpLookupPrimaryFunctionEntry.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404183E0 (IopAllocateAndPopulateWriteIrp.c)
 *     CcReferenceFileOffset @ 0x14053B22C (CcReferenceFileOffset.c)
 *     FsRtlAllocatePool @ 0x140542070 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1405420A0 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1405420D0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     FsRtlAllocatePoolWithTag @ 0x140542100 (FsRtlAllocatePoolWithTag.c)
 *     FsRtlpPostStackOverflow @ 0x140542FC4 (FsRtlpPostStackOverflow.c)
 *     DifExRaiseStatusWrapper @ 0x140609000 (DifExRaiseStatusWrapper.c)
 *     _purecall @ 0x14063F630 (_purecall.c)
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     NtQueryMultipleValueKey @ 0x140713980 (NtQueryMultipleValueKey.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 *     BuildQueryDirectoryIrp @ 0x1407563A0 (BuildQueryDirectoryIrp.c)
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 *     IopCreateFile @ 0x1407ADB90 (IopCreateFile.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     CcMapAndCopyFromCache @ 0x1407BDF60 (CcMapAndCopyFromCache.c)
 *     NtSetUuidSeed @ 0x140855FA0 (NtSetUuidSeed.c)
 *     CmpInitCallbacks @ 0x1408639BC (CmpInitCallbacks.c)
 *     EtwpInitializeLastBranchTracing @ 0x140864500 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeStackLookasideList @ 0x140865288 (EtwpInitializeStackLookasideList.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140935320 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140935790 (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 *     ObpInitStackAndObjectTables @ 0x140985FBC (ObpInitStackAndObjectTables.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     PopEndMirroring @ 0x140A4E4B0 (PopEndMirroring.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140A6E9A4 (ExpAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTag @ 0x140A7EF40 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePool @ 0x140A8FF70 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x140A90090 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePool3 @ 0x140A901D0 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140A90380 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140A90450 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140A90530 (VerifierExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AA00D0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140AA02D0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140AA03C0 (VerifierMmProbeAndLockProcessPages.c)
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 *     MiInitializeDecayPfns @ 0x140B1D550 (MiInitializeDecayPfns.c)
 *     WheapInitializeEventing @ 0x140B24410 (WheapInitializeEventing.c)
 *     MiInitializeSystemPteTracker @ 0x140B2B698 (MiInitializeSystemPteTracker.c)
 *     ExpWorkerFactoryInitialization @ 0x140B2DEA8 (ExpWorkerFactoryInitialization.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B4BE3C (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     RtlRaiseNoncontinuableException @ 0x14042A160 (RtlRaiseNoncontinuableException.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall __noreturn RtlRaiseStatus(int a1)
{
  __int64 v2; // r8
  char v3; // bl
  unsigned int v4; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-578h] BYREF
  __int64 v6; // [rsp+28h] [rbp-570h]
  __int64 v7; // [rsp+30h] [rbp-568h]
  int v8; // [rsp+38h] [rbp-560h]
  _BYTE v9[124]; // [rsp+3Ch] [rbp-55Ch] BYREF
  _BYTE v10[1240]; // [rsp+C0h] [rbp-4D8h] BYREF

  memset(v9, 0, sizeof(v9));
  v6 = 0LL;
  v8 = 0;
  v7 = -1LL;
  v5[0] = a1;
  v3 = 1;
  v5[1] = 129;
  do
  {
    LOBYTE(v2) = v3;
    v4 = RtlRaiseNoncontinuableException(v5, v10, v2);
    --v3;
  }
  while ( !v3 );
  RtlRaiseStatus(v4);
}
