/*
 * XREFs of PsGetCurrentServerSilo @ 0x14027DF30
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CEDD8 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     SepCreateLogonSessionTrack @ 0x1405FFB2C (SepCreateLogonSessionTrack.c)
 *     PsCaptureUserProcessParameters @ 0x1406217D0 (PsCaptureUserProcessParameters.c)
 *     SeCreateClientSecurityEx @ 0x140652D80 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140652F80 (SepCreateClientSecurityEx.c)
 *     IoRegisterPlugPlayNotification @ 0x140673180 (IoRegisterPlugPlayNotification.c)
 *     PsLookupThreadByThreadId @ 0x14068F2A0 (PsLookupThreadByThreadId.c)
 *     ObpReferenceDeviceMap @ 0x14068F360 (ObpReferenceDeviceMap.c)
 *     PsLookupProcessByProcessId @ 0x14068F4F0 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x14068F5A0 (PspThreadFromTicket.c)
 *     SepIsMinTCB @ 0x14069CBD4 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14069D860 (ExpWnfGenerateStateName.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     NtImpersonateAnonymousToken @ 0x1406C5380 (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x1406CBF44 (SepReferenceLogonSession.c)
 *     SepIsNgenImage @ 0x1406F31D8 (SepIsNgenImage.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406FE380 (PnpNotifyTargetDeviceChange.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     PnpNotifyDeviceClassChange @ 0x14073D798 (PnpNotifyDeviceClassChange.c)
 *     PopTransitionCheckpoint @ 0x140775938 (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x14077972C (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14077A830 (SepDeleteLogonSessionTrack.c)
 *     MiSessionCreateInternal @ 0x140786DD0 (MiSessionCreateInternal.c)
 *     NtGetNextProcess @ 0x14078AA70 (NtGetNextProcess.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     ExInitLicenseData @ 0x1407AAF08 (ExInitLicenseData.c)
 *     SepMakeLogonSessionsSiblings @ 0x140923ADC (SepMakeLogonSessionsSiblings.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3F30 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x1402F70B0 (PsIsServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D74 (KeIsExecutingInArbitraryThreadContext.c)
 */

__int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v3; // rcx

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    return *(_QWORD *)&CurrentThread->Process[2].Header.Lock;
  if ( !Blink )
    return 0LL;
  if ( (unsigned __int8)((__int64 (*)(void))PsIsServerSilo)() )
    return v3;
  while ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(v3 + 1072)) )
    ;
  return v3;
}
