/*
 * XREFs of PnpTraceStartDevice @ 0x14037BD10
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14036ECE0 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x14073A3A4 (PnpStartDeviceNode.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14037BD64 (PnpDiagnosticTraceDeviceOperation.c)
 */

__int64 __fastcall PnpTraceStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 MinorImageVersion; // ax

  LOBYTE(MinorImageVersion) = 0;
  if ( a3 )
    MinorImageVersion = RtlImageNtHeader(*(PVOID *)(a3 + 24))->OptionalHeader.MinorImageVersion;
  PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceStart_Stop, MinorImageVersion);
  return 0LL;
}
