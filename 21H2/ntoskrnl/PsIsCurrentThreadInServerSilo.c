/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x14035BF80
 * Callers:
 *     RtlGetNtProductType @ 0x1402404C0 (RtlGetNtProductType.c)
 *     RtlGetActiveConsoleId @ 0x14026FFF0 (RtlGetActiveConsoleId.c)
 *     IopLoadDriverImage @ 0x140399FC8 (IopLoadDriverImage.c)
 *     RtlSetSystemGlobalData @ 0x1403F8564 (RtlSetSystemGlobalData.c)
 *     ExpWriteTimeZoneBias @ 0x1405D1CC8 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x1405D1D18 (ExpWriteTimeZoneBiasStartEnd.c)
 *     PspCreateSilo @ 0x1405D90DC (PspCreateSilo.c)
 *     RtlIsMultiSessionSku @ 0x1405FBEB0 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x14060ADD0 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x140611E30 (RtlSetConsoleSessionForegroundProcessId.c)
 *     RtlGetNtSystemRoot @ 0x14061B3E0 (RtlGetNtSystemRoot.c)
 *     NtPlugPlayControl @ 0x14062A3B0 (NtPlugPlayControl.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     SepCreateClientSecurityEx @ 0x140652F80 (SepCreateClientSecurityEx.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     NtImpersonateAnonymousToken @ 0x1406C5380 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x1406C6000 (ObpParseSymbolicLinkEx.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpOKToFollowLink @ 0x1407133F0 (CmpOKToFollowLink.c)
 *     PsQueryCurrentApiSetSchema @ 0x14075DAD4 (PsQueryCurrentApiSetSchema.c)
 *     IopUnloadDriver @ 0x140769958 (IopUnloadDriver.c)
 *     EtwShutdown @ 0x140774180 (EtwShutdown.c)
 *     NtInitiatePowerAction @ 0x140775170 (NtInitiatePowerAction.c)
 *     PoUserShutdownInitiated @ 0x1407757F0 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x14077A010 (PoUserShutdownCancelled.c)
 *     MiInitializeSessionGlobals @ 0x140787660 (MiInitializeSessionGlobals.c)
 *     CmpAcceptBoot @ 0x14078D730 (CmpAcceptBoot.c)
 *     RtlSetActiveConsoleId @ 0x14078EC20 (RtlSetActiveConsoleId.c)
 *     SepInitializationPhase1 @ 0x14079D578 (SepInitializationPhase1.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x1407C50B0 (SepRmSetAuditEventWrkr.c)
 *     NtSetDefaultHardErrorPort @ 0x1407D2450 (NtSetDefaultHardErrorPort.c)
 *     NtSetInformationSymbolicLink @ 0x1408DCD90 (NtSetInformationSymbolicLink.c)
 *     PspConvertSiloToServerSilo @ 0x1409061B4 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x140910190 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlCapabilityCheck @ 0x1409134B0 (RtlCapabilityCheck.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093803C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938730 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x140948744 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140949520 (EtwpSetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x14094B54C (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14094BEE0 (NtSetSystemTime.c)
 *     ExpRaiseHardError @ 0x1409565F8 (ExpRaiseHardError.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1402F7010 (PsGetEffectiveServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D74 (KeIsExecutingInArbitraryThreadContext.c)
 */

bool __fastcall PsIsCurrentThreadInServerSilo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(a1, a2) )
    return 0;
  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
    return *(_QWORD *)&CurrentThread->Process[2].Header.Lock != 0LL;
  else
    return PsGetEffectiveServerSilo(Blink) != 0;
}
