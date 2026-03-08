/*
 * XREFs of EtwpCheckSystemTraceAccess @ 0x1408606D8
 * Callers:
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085C154 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DF094 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1406910EC (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerControlAccess @ 0x140692E00 (EtwpCheckLoggerControlAccess.c)
 */

__int64 __fastcall EtwpCheckSystemTraceAccess(__int64 a1, ACCESS_MASK a2)
{
  if ( (*(_DWORD *)(a1 + 816) & 0x20) != 0 )
    return EtwpCheckLoggerControlAccess(a2, a1);
  else
    return EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, a2);
}
