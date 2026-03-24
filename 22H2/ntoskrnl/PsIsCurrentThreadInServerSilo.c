/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x1402D19C0
 * Callers:
 *     RtlGetNtProductType @ 0x14031B310 (RtlGetNtProductType.c)
 *     RtlGetActiveConsoleId @ 0x14034ADC0 (RtlGetActiveConsoleId.c)
 *     IopLoadDriverImage @ 0x140399778 (IopLoadDriverImage.c)
 *     RtlSetSystemGlobalData @ 0x1403F7C14 (RtlSetSystemGlobalData.c)
 *     ExpWriteTimeZoneBias @ 0x1405D1CC8 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x1405D1D18 (ExpWriteTimeZoneBiasStartEnd.c)
 *     PspCreateSilo @ 0x1405D90DC (PspCreateSilo.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpOKToFollowLink @ 0x140649730 (CmpOKToFollowLink.c)
 *     RtlIsMultiSessionSku @ 0x1406816A0 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x14068F690 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x140695DF0 (RtlSetConsoleSessionForegroundProcessId.c)
 *     RtlGetNtSystemRoot @ 0x14069F2A0 (RtlGetNtSystemRoot.c)
 *     NtPlugPlayControl @ 0x1406AE380 (NtPlugPlayControl.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     SepCreateClientSecurityEx @ 0x1406D6F20 (SepCreateClientSecurityEx.c)
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     NtImpersonateAnonymousToken @ 0x14070DED0 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x14070EB50 (ObpParseSymbolicLinkEx.c)
 *     PsQueryCurrentApiSetSchema @ 0x14075D104 (PsQueryCurrentApiSetSchema.c)
 *     IopUnloadDriver @ 0x140768DB8 (IopUnloadDriver.c)
 *     EtwShutdown @ 0x140774A14 (EtwShutdown.c)
 *     NtInitiatePowerAction @ 0x140775A10 (NtInitiatePowerAction.c)
 *     PoUserShutdownInitiated @ 0x140776090 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x140779D50 (PoUserShutdownCancelled.c)
 *     MiInitializeSessionGlobals @ 0x1407873A0 (MiInitializeSessionGlobals.c)
 *     CmpAcceptBoot @ 0x14078D470 (CmpAcceptBoot.c)
 *     RtlSetActiveConsoleId @ 0x14078E960 (RtlSetActiveConsoleId.c)
 *     SepInitializationPhase1 @ 0x14079D7A8 (SepInitializationPhase1.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 *     MiCreatePagingFile @ 0x1407B6DDC (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x1407C5350 (SepRmSetAuditEventWrkr.c)
 *     NtSetDefaultHardErrorPort @ 0x1407D2200 (NtSetDefaultHardErrorPort.c)
 *     NtSetInformationSymbolicLink @ 0x1408DCC80 (NtSetInformationSymbolicLink.c)
 *     PspConvertSiloToServerSilo @ 0x1409060A4 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x14090AA44 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x140910080 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlCapabilityCheck @ 0x1409133A0 (RtlCapabilityCheck.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937EBC (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409385B0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1409485C4 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1409493A0 (EtwpSetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x14094B3CC (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14094BD60 (NtSetSystemTime.c)
 *     ExpRaiseHardError @ 0x140956478 (ExpRaiseHardError.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140361880 (PsGetEffectiveServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2494 (KeIsExecutingInArbitraryThreadContext.c)
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
