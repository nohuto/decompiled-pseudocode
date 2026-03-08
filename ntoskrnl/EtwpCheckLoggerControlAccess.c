/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x140692E00
 * Callers:
 *     EtwpGetPmcSessions @ 0x1405F9D94 (EtwpGetPmcSessions.c)
 *     EtwTraceRaw @ 0x1405FCF28 (EtwTraceRaw.c)
 *     EtwpTransitionToRealtime @ 0x1405FD178 (EtwpTransitionToRealtime.c)
 *     EtwpUpdateEnableMask @ 0x140692F88 (EtwpUpdateEnableMask.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x140745044 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407456E0 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x140748AA8 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140748BFC (EtwpRealtimeConnect.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085C154 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCheckSystemTraceAccess @ 0x1408606D8 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DF094 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1409EA544 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EB328 (EtwpSetSoftRestartInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EBB50 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140692DB8 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140692E54 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x140692ED0 (EtwpAccessCheck.c)
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
