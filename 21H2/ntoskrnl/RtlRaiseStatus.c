/*
 * XREFs of RtlRaiseStatus @ 0x14029AF80
 * Callers:
 *     FsRtlInitializeBaseMcbEx @ 0x140202C50 (FsRtlInitializeBaseMcbEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140203150 (NtWaitForWorkViaWorkerFactory.c)
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 *     RtlpxVirtualUnwind @ 0x14021E170 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x14021E5C0 (RtlpUnwindPrologue.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14022BCD0 (IopVerifierExAllocatePoolWithQuota.c)
 *     CcSetFileSizesEx @ 0x14022E120 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x14022E5C0 (CcInitializeCacheMapEx.c)
 *     KeWaitForMultipleObjects @ 0x14024BB90 (KeWaitForMultipleObjects.c)
 *     RtlIsNameInExpression @ 0x14024F7F0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x14024F870 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x14024F920 (RtlpIsNameInExpressionPrivate.c)
 *     KeReleaseSemaphoreEx @ 0x1402631F0 (KeReleaseSemaphoreEx.c)
 *     RtlRaiseException @ 0x140274220 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x140275570 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140275A30 (RtlUnwindEx.c)
 *     KeSuspendThread @ 0x14027A260 (KeSuspendThread.c)
 *     RtlAreNamesEqual @ 0x14028ACA0 (RtlAreNamesEqual.c)
 *     KiWaitForAllObjects @ 0x14029A090 (KiWaitForAllObjects.c)
 *     KeReleaseSemaphore @ 0x14029AC70 (KeReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     FsRtlInitializeLargeMcb @ 0x14029B890 (FsRtlInitializeLargeMcb.c)
 *     FsRtlAddEntry @ 0x14029DB44 (FsRtlAddEntry.c)
 *     PsChargePoolQuota @ 0x1402AA6E0 (PsChargePoolQuota.c)
 *     FsRtlCancelNotify @ 0x1402AA750 (FsRtlCancelNotify.c)
 *     KiInitializeUserApc @ 0x1402B2594 (KiInitializeUserApc.c)
 *     MmProbeAndLockSelectedPages @ 0x1402B7460 (MmProbeAndLockSelectedPages.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1402B7B3C (IopVerifierExAllocatePoolWithQuota_0.c)
 *     CcZeroDataOnDisk @ 0x1402BFC10 (CcZeroDataOnDisk.c)
 *     CcPrepareMdlWrite @ 0x1402CC660 (CcPrepareMdlWrite.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402CF748 (FsRtlPrivateInitializeFileLock.c)
 *     CcMdlWriteComplete2 @ 0x1402D05D8 (CcMdlWriteComplete2.c)
 *     RtlpUnwindOpSlots @ 0x1402D23A0 (RtlpUnwindOpSlots.c)
 *     CcZeroData @ 0x1402E82C0 (CcZeroData.c)
 *     CcZeroDataInCache @ 0x1402E86F8 (CcZeroDataInCache.c)
 *     CcAsyncCopyRead @ 0x1402F8440 (CcAsyncCopyRead.c)
 *     CcGetVacbMiss @ 0x1403109C0 (CcGetVacbMiss.c)
 *     CcPinFileData @ 0x14031F630 (CcPinFileData.c)
 *     CcCopyReadEx @ 0x140320720 (CcCopyReadEx.c)
 *     CcMapAndRead @ 0x1403213E0 (CcMapAndRead.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x14033C180 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocateHeapPool @ 0x14033C210 (ExAllocateHeapPool.c)
 *     KeReleaseMutant @ 0x1403424B0 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140351F10 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     NtSetInformationFile @ 0x140352270 (NtSetInformationFile.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 *     FsRtlPrivateLock @ 0x140358360 (FsRtlPrivateLock.c)
 *     InitializeSListHead @ 0x14035E3E0 (InitializeSListHead.c)
 *     HalpInitializeGhesRecovery @ 0x1403C587C (HalpInitializeGhesRecovery.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CAF28 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1403CF920 (RtlpLookupPrimaryFunctionEntry.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F1D24 (IopAllocateAndPopulateWriteIrp.c)
 *     CcReferenceFileOffset @ 0x1404EB214 (CcReferenceFileOffset.c)
 *     FsRtlAllocatePool @ 0x1404F0120 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1404F0150 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1404F0180 (FsRtlAllocatePoolWithQuotaTag.c)
 *     FsRtlAllocatePoolWithTag @ 0x1404F01B0 (FsRtlAllocatePoolWithTag.c)
 *     FsRtlpPostStackOverflow @ 0x1404F16D4 (FsRtlpPostStackOverflow.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140506DCC (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1405087A0 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x140508960 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     _purecall @ 0x1405B7200 (_purecall.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     IopCreateFile @ 0x14060B4C0 (IopCreateFile.c)
 *     BuildQueryDirectoryIrp @ 0x14064FCB0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406508C0 (NtQueryVolumeInformationFile.c)
 *     RtlRunOnceExecuteOnce @ 0x14068A9B0 (RtlRunOnceExecuteOnce.c)
 *     NtReadFileScatter @ 0x140699E80 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14069A620 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x14069B320 (NtQueryEaFile.c)
 *     NtQueryMultipleValueKey @ 0x1406A1E20 (NtQueryMultipleValueKey.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406AE6E0 (NtNotifyChangeDirectoryFileEx.c)
 *     CcMdlRead @ 0x1406D3BB0 (CcMdlRead.c)
 *     CcMapAndCopyFromCache @ 0x1406EF550 (CcMapAndCopyFromCache.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14071BF10 (IoCreateStreamFileObjectEx2.c)
 *     NtSetEaFile @ 0x140730CB0 (NtSetEaFile.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B6A0 (MiMapLockedPagesInUserSpace.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     NtSetUuidSeed @ 0x1407C7300 (NtSetUuidSeed.c)
 *     CmpInitCallbacks @ 0x1407D3B70 (CmpInitCallbacks.c)
 *     EtwpInitializeLastBranchTracing @ 0x1407D462C (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeStackLookasideList @ 0x1407D5548 (EtwpInitializeStackLookasideList.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923AC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140892814 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x140895B40 (NtQueryQuotaInformationFile.c)
 *     ObpInitStackAndObjectTables @ 0x1408DE970 (ObpInitStackAndObjectTables.c)
 *     ExRaiseAccessViolation @ 0x1409560F0 (ExRaiseAccessViolation.c)
 *     PopEndMirroring @ 0x140996250 (PopEndMirroring.c)
 *     ExAllocatePool2 @ 0x1409B41B0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x1409B4270 (ExAllocatePool3.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D45D0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePool2 @ 0x1409D49E0 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePool3 @ 0x1409D4B10 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409D4D00 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D4E70 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E6BF0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1409E6DD0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1409E6EC0 (VerifierMmProbeAndLockProcessPages.c)
 *     MiInitNucleus @ 0x140A42F34 (MiInitNucleus.c)
 *     WheapInitializeEventing @ 0x140A62F24 (WheapInitializeEventing.c)
 *     MiInitializeDecayPfns @ 0x140A68188 (MiInitializeDecayPfns.c)
 *     ExpWorkerFactoryInitialization @ 0x140A71A20 (ExpWorkerFactoryInitialization.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8C8F4 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     RtlRaiseNoncontinuableException @ 0x140408140 (RtlRaiseNoncontinuableException.c)
 *     memset @ 0x140414200 (memset.c)
 */

void __fastcall __noreturn RtlRaiseStatus(unsigned int a1)
{
  __int64 v2; // r8
  char v3; // bl
  unsigned int v4; // eax
  _QWORD v5[20]; // [rsp+20h] [rbp-578h] BYREF
  _BYTE v6[1240]; // [rsp+C0h] [rbp-4D8h] BYREF

  memset(v5, 0, 0x98uLL);
  v5[1] = 0LL;
  LODWORD(v5[3]) = 0;
  v5[0] = a1 | 0x100000000LL;
  v3 = 1;
  do
  {
    LOBYTE(v2) = v3;
    v4 = RtlRaiseNoncontinuableException(v5, v6, v2);
    --v3;
  }
  while ( !v3 );
  RtlRaiseStatus(v4);
}
