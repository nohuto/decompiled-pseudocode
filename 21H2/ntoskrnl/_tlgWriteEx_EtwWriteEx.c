/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x1402514DC
 * Callers:
 *     MmNotifyProcessInSwapTrigger @ 0x1402136B4 (MmNotifyProcessInSwapTrigger.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14028498C (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MiLogProcessWorkingSetsStart @ 0x140286424 (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x140286490 (MiLogProcessWorkingSetsStop.c)
 *     MiLogWsEmptyControl @ 0x14029EC00 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x14029EEA4 (MiLogTrimWs.c)
 *     MiAgeWorkingSet @ 0x1402AD440 (MiAgeWorkingSet.c)
 *     MiStoreLogNotCandidate @ 0x14038D6F8 (MiStoreLogNotCandidate.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x14038DA10 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopPlNotifyDeviceDState @ 0x1403A05EC (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1403A4BC8 (PopPlNotifyDeviceFState.c)
 *     PopPlRegisterComponent @ 0x1403BE6A8 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403BE7B8 (PopPlRegisterDevice.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14052B944 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14052BAC0 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14052BBE0 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x140554858 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1405548C8 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x140554964 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140554A24 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x140554BC8 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x140554D40 (MmStoreLogCorruptionFixed.c)
 *     MiLogNotifyPageHeat @ 0x14055F8B8 (MiLogNotifyPageHeat.c)
 *     PopPlPublishInitialPowerDraw @ 0x14057E7E0 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x14057E9B8 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x14057EAD0 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x14057EC64 (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x14057EE14 (PopPlTraceLogPowerPlane.c)
 *     VmpLogAccessFault @ 0x1405A403C (VmpLogAccessFault.c)
 *     VmpLogColdHint @ 0x1405A417C (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x1405A4270 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x1405A4368 (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1405A4468 (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogReserveVaFailed @ 0x1408C6DB4 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x1408C7854 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408C812C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x1408CB420 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408CB8B8 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBBA0 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408CBF48 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1408CC11C (MiLogHotPatchRundown.c)
 *     MiLogCommitRequestFailed @ 0x1408D7544 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A55464 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
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
