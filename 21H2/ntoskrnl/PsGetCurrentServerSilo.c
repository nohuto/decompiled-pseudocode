/*
 * XREFs of PsGetCurrentServerSilo @ 0x1402F61B0
 * Callers:
 *     SepReferenceLogonSession @ 0x14066B8C8 (SepReferenceLogonSession.c)
 *     SepIsMinTCB @ 0x14066F678 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14066FCE4 (ExpWnfGenerateStateName.c)
 *     SepIsNgenImage @ 0x140671B34 (SepIsNgenImage.c)
 *     NtImpersonateAnonymousToken @ 0x140695570 (NtImpersonateAnonymousToken.c)
 *     SepDeleteLogonSessionTrack @ 0x14069BDD0 (SepDeleteLogonSessionTrack.c)
 *     PsCaptureUserProcessParameters @ 0x14069D3D0 (PsCaptureUserProcessParameters.c)
 *     SepCreateLogonSessionTrack @ 0x1406BBC4C (SepCreateLogonSessionTrack.c)
 *     NtManageHotPatch @ 0x1406C9390 (NtManageHotPatch.c)
 *     NtGetNextProcess @ 0x1406D2920 (NtGetNextProcess.c)
 *     SepBlockAccessForLogonSession @ 0x1406EB0AC (SepBlockAccessForLogonSession.c)
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 *     SepCreateClientSecurityEx @ 0x140727350 (SepCreateClientSecurityEx.c)
 *     SeCreateClientSecurityEx @ 0x1407275D0 (SeCreateClientSecurityEx.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078B7C4 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14078D5D8 (PnpNotifyDeviceClassChange.c)
 *     PsLookupThreadByThreadId @ 0x1407A7D90 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x1407A87D0 (PspThreadFromTicket.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     PopTransitionCheckpoint @ 0x1407EBF04 (PopTransitionCheckpoint.c)
 *     MiSessionCreateInternal @ 0x1407F336C (MiSessionCreateInternal.c)
 *     ExInitLicenseData @ 0x14082D3F8 (ExInitLicenseData.c)
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     RtlpInitCodePageTables @ 0x14085A964 (RtlpInitCodePageTables.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x140944ADC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     SepMakeLogonSessionsSiblings @ 0x1409CD544 (SepMakeLogonSessionsSiblings.c)
 *     ExProcessCounterSetCallback @ 0x1409F5F90 (ExProcessCounterSetCallback.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA6E0 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x140A6CC50 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x14020A400 (PsIsServerSilo.c)
 */

__int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx

  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
    return *(_QWORD *)&CurrentThread->Process[2].Header.Lock;
  if ( Blink )
  {
    while ( !PsIsServerSilo(Blink) )
      Blink = *(_QWORD *)(Blink + 1264);
  }
  return Blink;
}
