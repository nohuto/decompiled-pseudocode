/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x1402FC390
 * Callers:
 *     MiAgeWorkingSet @ 0x1402248A0 (MiAgeWorkingSet.c)
 *     PopPlNotifyDeviceDState @ 0x1402B9D3C (PopPlNotifyDeviceDState.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402C0A08 (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceFState @ 0x1402EFC60 (PopPlNotifyDeviceFState.c)
 *     MiLogTrimWs @ 0x1402F0ADC (MiLogTrimWs.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140308828 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MiProcessWorkingSets @ 0x14035F6F0 (MiProcessWorkingSets.c)
 *     MiLogProcessWorkingSetsStop @ 0x140360210 (MiLogProcessWorkingSetsStop.c)
 *     PopPlRegisterComponent @ 0x140393310 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1403937A4 (PopPlRegisterDevice.c)
 *     MiStoreLogNotCandidate @ 0x140465332 (MiStoreLogNotCandidate.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x1404FCE00 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopDiagTraceDIrpAfterSx @ 0x140590058 (PopDiagTraceDIrpAfterSx.c)
 *     PopPlPublishInitialPowerDraw @ 0x14059EF80 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x14059F158 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x14059F270 (PopPlRegisterDeviceIterator.c)
 *     PopPlRegisterPowerPlane @ 0x14059F404 (PopPlRegisterPowerPlane.c)
 *     PopPlTraceLogPowerPlane @ 0x14059F5B8 (PopPlTraceLogPowerPlane.c)
 *     VmpLogAccessFault @ 0x1405F7518 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x1405F765C (VmpLogAccessFaultRange.c)
 *     VmpLogColdHint @ 0x1405F77C0 (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x1405F78B4 (VmpLogLargeSlatFill.c)
 *     VmpLogSparseSlatFill @ 0x1405F79AC (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1405F7AAC (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140615DEC (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x140615F48 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14061603C (MiLogResetPagesCommitRelease.c)
 *     MiLogAddPhysicalMemory @ 0x1406194D0 (MiLogAddPhysicalMemory.c)
 *     MiLogBadMapper @ 0x14062E9E8 (MiLogBadMapper.c)
 *     MiLogWsEmptyControl @ 0x140650470 (MiLogWsEmptyControl.c)
 *     MiLogNotifyPageHeat @ 0x14065193C (MiLogNotifyPageHeat.c)
 *     MiStoreLogFullPagefile @ 0x140659D30 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteCompleteFailure @ 0x140659DA0 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x140659E3C (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x140659EFC (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x14065A04C (MiStoreLogWriteIssueRetry.c)
 *     MmStoreLogCorruptionFixed @ 0x14065AB44 (MmStoreLogCorruptionFixed.c)
 *     MiLogReserveVaFailed @ 0x140A2BBB4 (MiLogReserveVaFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x140A2C844 (MiLogCreateImageFileMapFailure.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140A2D7CC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogHotPatchManagement @ 0x140A359F8 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140A35E3C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140A36298 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x140A368B0 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x140A36A34 (MiLogHotPatchRundown.c)
 *     MiLogCommitRequestFailed @ 0x140A40CE4 (MiLogCommitRequestFailed.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B72430 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
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
