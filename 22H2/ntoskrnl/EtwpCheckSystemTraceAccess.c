/*
 * XREFs of EtwpCheckSystemTraceAccess @ 0x140793808
 * Callers:
 *     EtwpUpdateTrace @ 0x140791BF8 (EtwpUpdateTrace.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937EBC (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409385B0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpCheckLoggerControlAccess @ 0x1406BBBBC (EtwpCheckLoggerControlAccess.c)
 *     EtwpCheckGuidAccess @ 0x140716B20 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckSystemTraceAccess(__int64 a1, ACCESS_MASK a2)
{
  if ( (*(_DWORD *)(a1 + 832) & 0x20) != 0 )
    return EtwpCheckLoggerControlAccess(a2, a1);
  else
    return EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, a2, 0LL);
}
