/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x140351230
 * Callers:
 *     RtlGetActiveConsoleId @ 0x140281DB0 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x1402C2020 (RtlGetNtProductType.c)
 *     IopLoadDriverImage @ 0x140399E78 (IopLoadDriverImage.c)
 *     RtlSetSystemGlobalData @ 0x1403F8534 (RtlSetSystemGlobalData.c)
 *     ExpWriteTimeZoneBias @ 0x1405D1CC8 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x1405D1D18 (ExpWriteTimeZoneBiasStartEnd.c)
 *     PspCreateSilo @ 0x1405D90DC (PspCreateSilo.c)
 *     NtPlugPlayControl @ 0x1406355A0 (NtPlugPlayControl.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     SepCreateClientSecurityEx @ 0x14065E160 (SepCreateClientSecurityEx.c)
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     RtlIsMultiSessionSku @ 0x14069CDE0 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x1406AC6E0 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1406B2D70 (RtlSetConsoleSessionForegroundProcessId.c)
 *     RtlGetNtSystemRoot @ 0x1406BC270 (RtlGetNtSystemRoot.c)
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpOKToFollowLink @ 0x1406FC010 (CmpOKToFollowLink.c)
 *     NtImpersonateAnonymousToken @ 0x140716D30 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x1407179B0 (ObpParseSymbolicLinkEx.c)
 *     PsQueryCurrentApiSetSchema @ 0x14075D914 (PsQueryCurrentApiSetSchema.c)
 *     IopUnloadDriver @ 0x140769798 (IopUnloadDriver.c)
 *     EtwShutdown @ 0x140773FC0 (EtwShutdown.c)
 *     NtInitiatePowerAction @ 0x140774FB0 (NtInitiatePowerAction.c)
 *     PoUserShutdownInitiated @ 0x140775630 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x140779E50 (PoUserShutdownCancelled.c)
 *     MiInitializeSessionGlobals @ 0x1407874A0 (MiInitializeSessionGlobals.c)
 *     CmpAcceptBoot @ 0x14078D570 (CmpAcceptBoot.c)
 *     RtlSetActiveConsoleId @ 0x14078EA60 (RtlSetActiveConsoleId.c)
 *     SepInitializationPhase1 @ 0x14079D378 (SepInitializationPhase1.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9554 (ExpRefreshTimeZoneInformation.c)
 *     MiCreatePagingFile @ 0x1407B661C (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x1407C4B90 (SepRmSetAuditEventWrkr.c)
 *     NtSetDefaultHardErrorPort @ 0x1407D22E0 (NtSetDefaultHardErrorPort.c)
 *     NtSetInformationSymbolicLink @ 0x1408DCC30 (NtSetInformationSymbolicLink.c)
 *     PspConvertSiloToServerSilo @ 0x140906054 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x14090A9F4 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x140910030 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlCapabilityCheck @ 0x140913350 (RtlCapabilityCheck.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937E6C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938560 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x140948574 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140949350 (EtwpSetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x14094B37C (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14094BD10 (NtSetSystemTime.c)
 *     ExpRaiseHardError @ 0x140956428 (ExpRaiseHardError.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1403621B0 (PsGetEffectiveServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D24 (KeIsExecutingInArbitraryThreadContext.c)
 */

bool __fastcall PsIsCurrentThreadInServerSilo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(a1, a2) )
    return 0;
  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    return *(_QWORD *)&CurrentThread->Process[2].Header.Lock != 0LL;
  else
    return PsGetEffectiveServerSilo(Blink) != 0;
}
