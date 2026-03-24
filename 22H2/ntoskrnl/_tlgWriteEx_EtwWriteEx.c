/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x14032C1BC
 * Callers:
 *     MiAgeWorkingSet @ 0x140208B00 (MiAgeWorkingSet.c)
 *     MiLogProcessWorkingSetsStart @ 0x14025FD4C (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x14025FDB8 (MiLogProcessWorkingSetsStop.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140262ACC (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402F2A14 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogWsEmptyControl @ 0x140317F80 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x140318224 (MiLogTrimWs.c)
 *     MiStoreLogNotCandidate @ 0x14038CEA8 (MiStoreLogNotCandidate.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x14038D1C0 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopPlNotifyDeviceDState @ 0x14039FD9C (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1403A4378 (PopPlNotifyDeviceFState.c)
 *     PopPlRegisterComponent @ 0x1403BDED8 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403BDFE8 (PopPlRegisterDevice.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14052B644 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14052B7C0 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14052B8E0 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x140554558 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1405545C8 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x140554664 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140554724 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1405548C8 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x140554A40 (MmStoreLogCorruptionFixed.c)
 *     MiLogNotifyPageHeat @ 0x14055F5B8 (MiLogNotifyPageHeat.c)
 *     PopPlPublishInitialPowerDraw @ 0x14057E4E0 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x14057E6B8 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x14057E7D0 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x14057E964 (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x14057EB14 (PopPlTraceLogPowerPlane.c)
 *     VmpLogAccessFault @ 0x1405A3D4C (VmpLogAccessFault.c)
 *     VmpLogColdHint @ 0x1405A3E8C (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x1405A3F80 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x1405A4078 (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1405A4178 (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogReserveVaFailed @ 0x1408C6CA4 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x1408C7744 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408C801C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x1408CB310 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408CB7A8 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBA90 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408CBE38 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1408CC00C (MiLogHotPatchRundown.c)
 *     MiLogCommitRequestFailed @ 0x1408D7434 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A54464 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
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
