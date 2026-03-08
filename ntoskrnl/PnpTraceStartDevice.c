/*
 * XREFs of PnpTraceStartDevice @ 0x1402B1628
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140202690 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x1406F71A4 (PnpStartDeviceNode.c)
 * Callees:
 *     PnpDiagnosticTraceDeviceOperation @ 0x1402B167C (PnpDiagnosticTraceDeviceOperation.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 */

__int64 __fastcall PnpTraceStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax

  LOBYTE(v3) = 0;
  if ( a3 )
    v3 = *(_WORD *)(RtlImageNtHeader(*(_QWORD *)(a3 + 24)) + 70);
  PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceStart_Stop, v3);
  return 0LL;
}
