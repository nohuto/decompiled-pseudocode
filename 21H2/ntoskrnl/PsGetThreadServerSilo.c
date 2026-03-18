/*
 * XREFs of PsGetThreadServerSilo @ 0x140347690
 * Callers:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x14021A3A0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     RtlGetSystemGlobalData @ 0x140236E00 (RtlGetSystemGlobalData.c)
 *     RtlGetNtProductType @ 0x140245CC0 (RtlGetNtProductType.c)
 *     RtlSetSystemGlobalData @ 0x14025D830 (RtlSetSystemGlobalData.c)
 *     RtlGetCurrentServiceSessionId @ 0x14025D8B0 (RtlGetCurrentServiceSessionId.c)
 *     MmIsSessionInCurrentServerSilo @ 0x14025DEF0 (MmIsSessionInCurrentServerSilo.c)
 *     EtwpTraceFileName @ 0x140280F60 (EtwpTraceFileName.c)
 *     MiGetNextSession @ 0x1402A1788 (MiGetNextSession.c)
 *     RtlGetActiveConsoleId @ 0x1402DEB60 (RtlGetActiveConsoleId.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     MmGetSessionById @ 0x1402DF880 (MmGetSessionById.c)
 *     EtwTraceContextSwap @ 0x1403ABA40 (EtwTraceContextSwap.c)
 *     SepAdtLogAuditRecord @ 0x1403CD84C (SepAdtLogAuditRecord.c)
 *     ExLogTimeZoneInformation @ 0x1403DB94C (ExLogTimeZoneInformation.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14045EDD4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     EtwTracePageFault @ 0x14045F8C2 (EtwTracePageFault.c)
 *     IopCheckSessionDeviceAccess @ 0x140557F6C (IopCheckSessionDeviceAccess.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1405E4598 (UpcaseUnicodeToUTF8NHelper.c)
 *     EtwpTraceIoInit @ 0x14062FB50 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x140630050 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x140630340 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1406303E0 (PerfInfoLogSysCallExit.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14069C820 (ObpReferenceCurrentDeviceMap.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     IopGetThreadActiveConsoleId @ 0x140936BD8 (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1624) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1624));
}
