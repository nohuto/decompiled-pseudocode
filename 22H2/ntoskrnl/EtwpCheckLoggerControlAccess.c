/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x1406BDB0C
 * Callers:
 *     EtwpGetPmcSessions @ 0x1405FC234 (EtwpGetPmcSessions.c)
 *     EtwTraceRaw @ 0x1405FF3C8 (EtwTraceRaw.c)
 *     EtwpTransitionToRealtime @ 0x1405FF618 (EtwpTransitionToRealtime.c)
 *     EtwpUpdateEnableMask @ 0x1406BDC94 (EtwpUpdateEnableMask.c)
 *     EtwpRealtimeConnect @ 0x1407F5B64 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x1407F6068 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1407F8630 (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1407F8938 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407F8FD4 (EtwpQueryTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x1408262CC (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860054 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1F34 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1409ED3E4 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EE1BC (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EE9E4 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1406BDAC4 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1406BDB60 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x1406BDBDC (EtwpAccessCheck.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  void *v4; // rdi
  unsigned int v5; // ebx

  v4 = (void *)EtwpReferenceLoggerSecurityDescriptor(a2);
  v5 = EtwpAccessCheck(v4, DesiredAccess);
  EtwpDereferenceLoggerSecurityDescriptor(a2, (__int64)v4);
  return v5;
}
