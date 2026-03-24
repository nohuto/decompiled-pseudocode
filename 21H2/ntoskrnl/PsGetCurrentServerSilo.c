/*
 * XREFs of PsGetCurrentServerSilo @ 0x14025C9C0
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CEDD8 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     SepReferenceLogonSession @ 0x1405DC7C4 (SepReferenceLogonSession.c)
 *     SepIsNgenImage @ 0x140603AA8 (SepIsNgenImage.c)
 *     SepIsMinTCB @ 0x14060D124 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14060DDB0 (ExpWnfGenerateStateName.c)
 *     PsLookupThreadByThreadId @ 0x140625630 (PsLookupThreadByThreadId.c)
 *     ObpReferenceDeviceMap @ 0x1406256F0 (ObpReferenceDeviceMap.c)
 *     PsLookupProcessByProcessId @ 0x140625880 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x140625930 (PspThreadFromTicket.c)
 *     SeCreateClientSecurityEx @ 0x14065DF60 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14065E160 (SepCreateClientSecurityEx.c)
 *     SepCreateLogonSessionTrack @ 0x1406A07EC (SepCreateLogonSessionTrack.c)
 *     PsCaptureUserProcessParameters @ 0x1406C2AD0 (PsCaptureUserProcessParameters.c)
 *     IoRegisterPlugPlayNotification @ 0x1406C4890 (IoRegisterPlugPlayNotification.c)
 *     EtwpStartLogger @ 0x1406DE1A0 (EtwpStartLogger.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406E6FA0 (PnpNotifyTargetDeviceChange.c)
 *     ExpGetProcessInformation @ 0x1406F1260 (ExpGetProcessInformation.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     NtImpersonateAnonymousToken @ 0x140716D30 (NtImpersonateAnonymousToken.c)
 *     PnpNotifyDeviceClassChange @ 0x14073D5D8 (PnpNotifyDeviceClassChange.c)
 *     PopTransitionCheckpoint @ 0x140775778 (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x14077956C (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14077A670 (SepDeleteLogonSessionTrack.c)
 *     MiSessionCreateInternal @ 0x140786C10 (MiSessionCreateInternal.c)
 *     NtGetNextProcess @ 0x14078A8B0 (NtGetNextProcess.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9554 (ExpRefreshTimeZoneInformation.c)
 *     ExInitLicenseData @ 0x1407AAD08 (ExInitLicenseData.c)
 *     SepMakeLogonSessionsSiblings @ 0x14092397C (SepMakeLogonSessionsSiblings.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E290 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3000 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x140362250 (PsIsServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D24 (KeIsExecutingInArbitraryThreadContext.c)
 */

__int64 __fastcall PsGetCurrentServerSilo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v5; // rcx

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(a1, a2) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    return *(_QWORD *)&CurrentThread->Process[2].Header.Lock;
  if ( !Blink )
    return 0LL;
  if ( (unsigned __int8)((__int64 (*)(void))PsIsServerSilo)() )
    return v5;
  while ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(v5 + 1072)) )
    ;
  return v5;
}
