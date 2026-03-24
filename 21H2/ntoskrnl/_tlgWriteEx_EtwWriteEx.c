/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x1402D2F3C
 * Callers:
 *     MiAgeWorkingSet @ 0x140208B40 (MiAgeWorkingSet.c)
 *     MiLogProcessWorkingSetsStart @ 0x1402604EC (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x140260558 (MiLogProcessWorkingSetsStop.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14026354C (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14029BCE4 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogWsEmptyControl @ 0x140359E64 (MiLogWsEmptyControl.c)
 *     MiLogTrimWs @ 0x14035A108 (MiLogTrimWs.c)
 *     MiStoreLogNotCandidate @ 0x14038D5A8 (MiStoreLogNotCandidate.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x14038D8C0 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopPlNotifyDeviceDState @ 0x1403A049C (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1403A4A78 (PopPlNotifyDeviceFState.c)
 *     PopPlRegisterComponent @ 0x1403BED48 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403BEE58 (PopPlRegisterDevice.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14052B704 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14052B880 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14052B9A0 (MiLogResetPagesCommitRelease.c)
 *     MiStoreLogFullPagefile @ 0x140554618 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x140554688 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x140554724 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1405547E4 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x140554988 (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x140554B00 (MmStoreLogCorruptionFixed.c)
 *     MiLogNotifyPageHeat @ 0x14055F678 (MiLogNotifyPageHeat.c)
 *     PopPlPublishInitialPowerDraw @ 0x14057E5A0 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x14057E778 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x14057E890 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x14057EA24 (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x14057EBD4 (PopPlTraceLogPowerPlane.c)
 *     VmpLogAccessFault @ 0x1405A3E0C (VmpLogAccessFault.c)
 *     VmpLogColdHint @ 0x1405A3F4C (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x1405A4040 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x1405A4138 (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1405A4238 (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogReserveVaFailed @ 0x1408C6C54 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x1408C76F4 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1408C7FCC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x1408CB2C0 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408CB758 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBA40 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408CBDE8 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1408CBFBC (MiLogHotPatchRundown.c)
 *     MiLogCommitRequestFailed @ 0x1408D73E4 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A54464 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
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
