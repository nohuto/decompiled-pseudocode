/*
 * XREFs of PsGetCurrentServerSilo @ 0x14025C220
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CEDD8 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     SepReferenceLogonSession @ 0x1405DC7C4 (SepReferenceLogonSession.c)
 *     SepIsNgenImage @ 0x140603AA8 (SepIsNgenImage.c)
 *     SepIsMinTCB @ 0x14060D584 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x14060E210 (ExpWnfGenerateStateName.c)
 *     PsLookupThreadByThreadId @ 0x140625A50 (PsLookupThreadByThreadId.c)
 *     ObpReferenceDeviceMap @ 0x140625B10 (ObpReferenceDeviceMap.c)
 *     PsLookupProcessByProcessId @ 0x140625CA0 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x140625D50 (PspThreadFromTicket.c)
 *     ExpGetProcessInformation @ 0x14063E980 (ExpGetProcessInformation.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     SepCreateLogonSessionTrack @ 0x1406850AC (SepCreateLogonSessionTrack.c)
 *     IoRegisterPlugPlayNotification @ 0x14069BFE0 (IoRegisterPlugPlayNotification.c)
 *     PsCaptureUserProcessParameters @ 0x1406A5500 (PsCaptureUserProcessParameters.c)
 *     SeCreateClientSecurityEx @ 0x1406D6D20 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1406D6F20 (SepCreateClientSecurityEx.c)
 *     NtImpersonateAnonymousToken @ 0x14070DED0 (NtImpersonateAnonymousToken.c)
 *     EtwpStartLogger @ 0x140711A40 (EtwpStartLogger.c)
 *     PnpNotifyTargetDeviceChange @ 0x14071AD38 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x140739A78 (PnpNotifyDeviceClassChange.c)
 *     PopTransitionCheckpoint @ 0x1407761D8 (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x14077946C (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14077A570 (SepDeleteLogonSessionTrack.c)
 *     MiSessionCreateInternal @ 0x140786B10 (MiSessionCreateInternal.c)
 *     NtGetNextProcess @ 0x14078A7B0 (NtGetNextProcess.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 *     ExInitLicenseData @ 0x1407AB138 (ExInitLicenseData.c)
 *     SepMakeLogonSessionsSiblings @ 0x1409239CC (SepMakeLogonSessionsSiblings.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E2E0 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3140 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x140361920 (PsIsServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2494 (KeIsExecutingInArbitraryThreadContext.c)
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
