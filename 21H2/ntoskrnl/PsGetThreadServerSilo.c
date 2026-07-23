/*
 * XREFs of PsGetThreadServerSilo @ 0x1402AAE70
 * Callers:
 *     RtlGetNtProductType @ 0x1402404C0 (RtlGetNtProductType.c)
 *     RtlGetActiveConsoleId @ 0x14026FFF0 (RtlGetActiveConsoleId.c)
 *     MiGetNextSession @ 0x1402872F8 (MiGetNextSession.c)
 *     MmGetSessionById @ 0x1402AAD40 (MmGetSessionById.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A61C0 (RtlGetCurrentServiceSessionId.c)
 *     MmIsSessionInCurrentServerSilo @ 0x1403A6B58 (MmIsSessionInCurrentServerSilo.c)
 *     EtwTraceContextSwap @ 0x1403AEEB0 (EtwTraceContextSwap.c)
 *     EtwpTraceIo @ 0x1403B8760 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x1403B9050 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x1403C2884 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x1405066DC (IopCheckSessionDeviceAccess.c)
 *     EtwTracePageFault @ 0x1405A7D5C (EtwTracePageFault.c)
 *     EtwpTraceFileIo @ 0x1405A9B10 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x1405A9C60 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1405AA1F0 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1405AA530 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405AA5D0 (PerfInfoLogSysCallExit.c)
 *     IopGetThreadActiveConsoleId @ 0x14089442C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1402F7010 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1544) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1544));
}
