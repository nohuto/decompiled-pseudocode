/*
 * XREFs of RtlRaiseStatus @ 0x140292590
 * Callers:
 *     CcAsyncCopyRead @ 0x140216AA0 (CcAsyncCopyRead.c)
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     CcCopyReadEx @ 0x14021E070 (CcCopyReadEx.c)
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     CcMapAndRead @ 0x14021FF20 (CcMapAndRead.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x140240590 (IopAllocateAndPopulateWriteIrp.c)
 *     CcZeroDataInCache @ 0x140241DBC (CcZeroDataInCache.c)
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     CcZeroData @ 0x140243410 (CcZeroData.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MiZeroEngineMemory @ 0x1402758F0 (MiZeroEngineMemory.c)
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     RtlDispatchException @ 0x14027FA60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402809E0 (RtlUnwindEx.c)
 *     RtlpxVirtualUnwind @ 0x140281720 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x140281BF0 (RtlpUnwindPrologue.c)
 *     KeReleaseSemaphore @ 0x140292210 (KeReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     KiWaitForAllObjects @ 0x1402936D0 (KiWaitForAllObjects.c)
 *     PsChargePoolQuota @ 0x140294F20 (PsChargePoolQuota.c)
 *     CcSetFileSizesEx @ 0x14029F9B0 (CcSetFileSizesEx.c)
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     RtlAreNamesEqual @ 0x1402B7510 (RtlAreNamesEqual.c)
 *     FsRtlPrivateLock @ 0x1402C21B0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402C32B0 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAddEntry @ 0x1402D0C14 (FsRtlAddEntry.c)
 *     FsRtlInitializeLargeMcb @ 0x1402DFC20 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1402DFC90 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlCancelNotify @ 0x1402F2B70 (FsRtlCancelNotify.c)
 *     CcPrepareMdlWrite @ 0x1402FD600 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1403002DC (CcMdlWriteComplete2.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140310130 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 *     CcGetVacbMiss @ 0x140335850 (CcGetVacbMiss.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     KeSuspendThread @ 0x140354244 (KeSuspendThread.c)
 *     RtlRaiseException @ 0x140364BF0 (RtlRaiseException.c)
 *     RtlIsNameInExpression @ 0x140365B20 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x140365CA0 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140365D60 (RtlpIsNameInExpressionPrivate.c)
 *     KiInitializeUserApc @ 0x1403664E8 (KiInitializeUserApc.c)
 *     MiZeroPageCalibrate @ 0x1403A50D0 (MiZeroPageCalibrate.c)
 *     CcZeroDataOnDisk @ 0x1403BB780 (CcZeroDataOnDisk.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1403BEF80 (RtlpLookupPrimaryFunctionEntry.c)
 *     MmProbeAndLockSelectedPages @ 0x1403CF7D0 (MmProbeAndLockSelectedPages.c)
 *     KeReleaseMutantEx @ 0x14040A86C (KeReleaseMutantEx.c)
 *     RtlpUnwindOpSlots @ 0x14045C250 (RtlpUnwindOpSlots.c)
 *     CcReferenceFileOffset @ 0x140535C90 (CcReferenceFileOffset.c)
 *     FsRtlAllocatePool @ 0x14053B750 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithQuota @ 0x14053B780 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x14053B7B0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     FsRtlAllocatePoolWithTag @ 0x14053B7E0 (FsRtlAllocatePoolWithTag.c)
 *     FsRtlpPostStackOverflow @ 0x14053D044 (FsRtlpPostStackOverflow.c)
 *     DifExRaiseStatusWrapper @ 0x1405D71D0 (DifExRaiseStatusWrapper.c)
 *     _purecall @ 0x14060AAE0 (_purecall.c)
 *     CcMdlRead @ 0x1406A3B50 (CcMdlRead.c)
 *     CcMapAndCopyFromCache @ 0x1406A7510 (CcMapAndCopyFromCache.c)
 *     BuildQueryDirectoryIrp @ 0x1406B22C0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406B2A90 (NtQueryVolumeInformationFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406B5020 (IoCreateStreamFileObjectEx2.c)
 *     NtQueryMultipleValueKey @ 0x1406B8CB0 (NtQueryMultipleValueKey.c)
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     NtQueryEaFile @ 0x14076D8E0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14077B8F0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x140798190 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140799670 (NtWriteFileGather.c)
 *     RtlRunOnceExecuteOnce @ 0x1407A2BE0 (RtlRunOnceExecuteOnce.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     IopCreateFile @ 0x1407CE5A0 (IopCreateFile.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     CmpInitCallbacks @ 0x140813390 (CmpInitCallbacks.c)
 *     NtSetUuidSeed @ 0x14084E2E0 (NtSetUuidSeed.c)
 *     EtwpInitializeLastBranchTracing @ 0x140860DF8 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeStackLookasideList @ 0x140861A64 (EtwpInitializeStackLookasideList.c)
 *     ExRaiseAccessViolation @ 0x1408713F0 (ExRaiseAccessViolation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140942B50 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140942FC8 (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x140947CF0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140948300 (NtQueryQuotaInformationFile.c)
 *     ObpInitStackAndObjectTables @ 0x140979F68 (ObpInitStackAndObjectTables.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     PopEndMirroring @ 0x140A9F6B0 (PopEndMirroring.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140AAB128 (ExpAllocatePoolWithQuotaTag.c)
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     VerifierExAllocatePoolWithTag @ 0x140ABCFD0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePool @ 0x140ACD8C0 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x140ACD9E0 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePool3 @ 0x140ACDB20 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140ACDCD0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140ACDDA0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140ACDE80 (VerifierExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140ACDFB0 (VfHandlePoolAlloc.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE0250 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140AE0450 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140AE0540 (VerifierMmProbeAndLockProcessPages.c)
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 *     MiInitializeDecayPfns @ 0x140B60264 (MiInitializeDecayPfns.c)
 *     WheapInitializeEventing @ 0x140B63B48 (WheapInitializeEventing.c)
 *     MiInitializeSystemPteTracker @ 0x140B6B974 (MiInitializeSystemPteTracker.c)
 *     ExpWorkerFactoryInitialization @ 0x140B6F290 (ExpWorkerFactoryInitialization.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B8DE04 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     RtlRaiseNoncontinuableException @ 0x140420D50 (RtlRaiseNoncontinuableException.c)
 *     memset @ 0x14042CFC0 (memset.c)
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
