/*
 * XREFs of PsGetCurrentServerSilo @ 0x140248480
 * Callers:
 *     MmIsSessionInCurrentServerSilo @ 0x1402019D8 (MmIsSessionInCurrentServerSilo.c)
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlGetActiveConsoleId @ 0x1402B8940 (RtlGetActiveConsoleId.c)
 *     ExLocalTimeToSystemTime @ 0x1402D10A0 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x1402D10F0 (ExSystemTimeToLocalTime.c)
 *     RtlGetSystemGlobalData @ 0x1402D9300 (RtlGetSystemGlobalData.c)
 *     RtlSetSystemGlobalData @ 0x1402EF650 (RtlSetSystemGlobalData.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403024F0 (RtlGetCurrentServiceSessionId.c)
 *     RtlGetNtProductType @ 0x140303E90 (RtlGetNtProductType.c)
 *     MiGetNextSession @ 0x14035C308 (MiGetNextSession.c)
 *     EtwpTraceFileName @ 0x14035E5C0 (EtwpTraceFileName.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140365BA0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     SepAdtLogAuditRecord @ 0x140397890 (SepAdtLogAuditRecord.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x14039FDA4 (UpcaseUnicodeToUTF8NHelper.c)
 *     ExLogTimeZoneInformation @ 0x1403AB740 (ExLogTimeZoneInformation.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14045B5C4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     IopCheckSessionDeviceAccess @ 0x140555228 (IopCheckSessionDeviceAccess.c)
 *     PerfInfoLogSysCallEntry @ 0x1405FC7B0 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405FC840 (PerfInfoLogSysCallExit.c)
 *     PopTransitionCheckpoint @ 0x14067F1CC (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x14067F8BC (SepBlockAccessForLogonSession.c)
 *     PnpNotifyTargetDeviceChange @ 0x14068C820 (PnpNotifyTargetDeviceChange.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     SeCreateClientSecurityEx @ 0x1406D5D70 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1406D5F10 (SepCreateClientSecurityEx.c)
 *     PsLookupThreadByThreadId @ 0x1406DBE00 (PsLookupThreadByThreadId.c)
 *     IoRegisterPlugPlayNotification @ 0x1406F4F30 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1406F5818 (PnpNotifyDeviceClassChange.c)
 *     SepIsMinTCB @ 0x14070E10C (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14071BF88 (ExpWnfGenerateStateName.c)
 *     NtImpersonateAnonymousToken @ 0x1407390D0 (NtImpersonateAnonymousToken.c)
 *     MiSessionCreate @ 0x140756EC8 (MiSessionCreate.c)
 *     PsCaptureUserProcessParameters @ 0x1407599C0 (PsCaptureUserProcessParameters.c)
 *     SepCreateLogonSessionTrack @ 0x14076B35C (SepCreateLogonSessionTrack.c)
 *     SepReferenceLogonSession @ 0x140773DC0 (SepReferenceLogonSession.c)
 *     NtManageHotPatch @ 0x140784740 (NtManageHotPatch.c)
 *     NtGetNextProcess @ 0x140784C70 (NtGetNextProcess.c)
 *     SepIsNgenImage @ 0x14078E8D4 (SepIsNgenImage.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     SepDeleteLogonSessionTrack @ 0x1407DAE44 (SepDeleteLogonSessionTrack.c)
 *     RtlpInitCodePageTables @ 0x14080EA38 (RtlpInitCodePageTables.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     ExInitLicenseData @ 0x140819CE8 (ExInitLicenseData.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x140953980 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     SepMakeLogonSessionsSiblings @ 0x1409CD2D0 (SepMakeLogonSessionsSiblings.c)
 *     ExProcessCounterSetCallback @ 0x1409F2FF0 (ExProcessCounterSetCallback.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x140AA7FE0 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x140294E20 (PsIsServerSilo.c)
 */

__int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v2; // rcx

  if ( KeGetPcr()->Prcb.NestingLevel )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    return *(_QWORD *)&CurrentThread->Process[2].Header.Lock;
  if ( Blink )
  {
    while ( !(unsigned __int8)PsIsServerSilo() )
      ;
    return v2;
  }
  return 0LL;
}
