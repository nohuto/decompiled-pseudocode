/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x14024A9B0
 * Callers:
 *     MmNotifyProcessInSwapTrigger @ 0x140211750 (MmNotifyProcessInSwapTrigger.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14024A824 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MiLogProcessWorkingSetsStop @ 0x1402A1948 (MiLogProcessWorkingSetsStop.c)
 *     MiLogProcessWorkingSetsStart @ 0x1402A19AC (MiLogProcessWorkingSetsStart.c)
 *     MiAgeWorkingSet @ 0x14030C870 (MiAgeWorkingSet.c)
 *     MiLogWsEmptyControl @ 0x140373DA0 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x140374708 (MiLogTrimWs.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x1403985E0 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopPlNotifyDeviceDState @ 0x1403B171C (PopPlNotifyDeviceDState.c)
 *     PopPlRegisterComponent @ 0x1403B9DF8 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403B9F08 (PopPlRegisterDevice.c)
 *     MiStoreLogNotCandidate @ 0x14045D27C (MiStoreLogNotCandidate.c)
 *     PopPlNotifyDeviceFState @ 0x14045EA32 (PopPlNotifyDeviceFState.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140580088 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1405801E4 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1405802D8 (MiLogResetPagesCommitRelease.c)
 *     MiLogAddPhysicalMemory @ 0x140583428 (MiLogAddPhysicalMemory.c)
 *     MiShowBadMapper @ 0x140593B18 (MiShowBadMapper.c)
 *     MiStoreLogFullPagefile @ 0x1405B650C (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1405B657C (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x1405B6618 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1405B66D8 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1405B6828 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x1405B6950 (MmStoreLogCorruptionFixed.c)
 *     MiLogNotifyPageHeat @ 0x1405B77AC (MiLogNotifyPageHeat.c)
 *     PopPlPublishInitialPowerDraw @ 0x1405DE550 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x1405DE728 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x1405DE840 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x1405DE9D4 (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x1405DEB88 (PopPlTraceLogPowerPlane.c)
 *     VmpLogAccessFault @ 0x14062A42C (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x14062A570 (VmpLogAccessFaultRange.c)
 *     VmpLogColdHint @ 0x14062A6D4 (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x14062A7C8 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x14062A8C0 (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x14062A9C0 (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogReserveVaFailed @ 0x14096B308 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x14096BE44 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14096C6C4 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x14097471C (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140974B60 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140974FBC (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1409755D4 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x140975748 (MiLogHotPatchRundown.c)
 *     MiLogCommitRequestFailed @ 0x14097F2B0 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B084F4 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 */

NTSTATUS __fastcall tlgWriteEx_EtwWriteEx(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        ULONG a4,
        int a5,
        int a6,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a8)
{
  EVENT_DESCRIPTOR v9; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v9.Id = *a2 << 24;
  *(_DWORD *)&v9.Level = *(unsigned __int16 *)(a2 + 1);
  v9.Keyword = *(_QWORD *)(a2 + 3);
  a8->Ptr = *(_QWORD *)(a1 + 8);
  a8->Size = **(unsigned __int16 **)(a1 + 8);
  a8[1].Ptr = (ULONGLONG)(a2 + 11);
  a8->Reserved = 2;
  a8[1].Size = *(unsigned __int16 *)(a2 + 11);
  a8[1].Reserved = 1;
  return EtwWriteEx(*(_QWORD *)(a1 + 32), &v9, 0LL, a4, 0LL, 0LL, UserDataCount, a8);
}
