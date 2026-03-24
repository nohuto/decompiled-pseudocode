/*
 * XREFs of PsGetThreadServerSilo @ 0x140206540
 * Callers:
 *     MmGetSessionById @ 0x140206410 (MmGetSessionById.c)
 *     RtlGetActiveConsoleId @ 0x140281DB0 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x1402C2020 (RtlGetNtProductType.c)
 *     MiGetNextSession @ 0x1402D5FA8 (MiGetNextSession.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A6070 (RtlGetCurrentServiceSessionId.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1403A6A08 (MmIsSessionInCurrentServerSilo.c)
 *     EtwTraceContextSwap @ 0x1403AED40 (EtwTraceContextSwap.c)
 *     EtwpTraceIo @ 0x1403B85F0 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x1403B8EE0 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x1403C2454 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x14050675C (IopCheckSessionDeviceAccess.c)
 *     EtwTracePageFault @ 0x1405A7B2C (EtwTracePageFault.c)
 *     EtwpTraceFileIo @ 0x1405A98E0 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x1405A9A30 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1405A9FC0 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1405AA300 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405AA3A0 (PerfInfoLogSysCallExit.c)
 *     IopGetThreadActiveConsoleId @ 0x1408942CC (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1403621B0 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1544) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1544));
}
