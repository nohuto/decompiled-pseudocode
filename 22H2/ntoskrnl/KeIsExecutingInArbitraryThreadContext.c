/*
 * XREFs of KeIsExecutingInArbitraryThreadContext @ 0x1403F2494
 * Callers:
 *     MmGetSessionById @ 0x1402063D0 (MmGetSessionById.c)
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     MiGetNextSession @ 0x140263DF8 (MiGetNextSession.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlGetNtProductType @ 0x14031B310 (RtlGetNtProductType.c)
 *     RtlGetActiveConsoleId @ 0x14034ADC0 (RtlGetActiveConsoleId.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A5970 (RtlGetCurrentServiceSessionId.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1403A6308 (MmIsSessionInCurrentServerSilo.c)
 *     EtwpTraceFileName @ 0x1403B8880 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x1403C20B4 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x1405063DC (IopCheckSessionDeviceAccess.c)
 *     PerfInfoLogSysCallEntry @ 0x1405AA240 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405AA2E0 (PerfInfoLogSysCallExit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeIsExecutingInArbitraryThreadContext()
{
  return KeGetPcr()->Prcb.NestingLevel != 0;
}
