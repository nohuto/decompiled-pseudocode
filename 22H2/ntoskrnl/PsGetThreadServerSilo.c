/*
 * XREFs of PsGetThreadServerSilo @ 0x140206500
 * Callers:
 *     MmGetSessionById @ 0x1402063D0 (MmGetSessionById.c)
 *     MiGetNextSession @ 0x140263DF8 (MiGetNextSession.c)
 *     RtlGetNtProductType @ 0x14031B310 (RtlGetNtProductType.c)
 *     RtlGetActiveConsoleId @ 0x14034ADC0 (RtlGetActiveConsoleId.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A5970 (RtlGetCurrentServiceSessionId.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1403A6308 (MmIsSessionInCurrentServerSilo.c)
 *     EtwTraceContextSwap @ 0x1403A9B60 (EtwTraceContextSwap.c)
 *     EtwpTraceIo @ 0x1403B7F90 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x1403B8880 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x1403C20B4 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x1405063DC (IopCheckSessionDeviceAccess.c)
 *     EtwTracePageFault @ 0x1405A7A6C (EtwTracePageFault.c)
 *     EtwpTraceFileIo @ 0x1405A9820 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x1405A9970 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1405A9F00 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1405AA240 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405AA2E0 (PerfInfoLogSysCallExit.c)
 *     IopGetThreadActiveConsoleId @ 0x14089431C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140361880 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1544) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1544));
}
