/*
 * XREFs of StorpInitializeUnitTelemetry @ 0x1C001A9C8
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001A7B0 (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     StorpUninititalizePerUnitPerfTelemetry @ 0x1C001D584 (StorpUninititalizePerUnitPerfTelemetry.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C00740F8 (StorpInititalizePerUnitPerfTelemetry.c)
 */

void __fastcall StorpInitializeUnitTelemetry(__int64 a1)
{
  int v1; // ebx
  bool v2; // zf

  v1 = 0;
  *(_QWORD *)(a1 + 2064) = 1LL;
  v2 = g_StorpTraceLoggingPerformanceEnabled == 0;
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_QWORD *)(a1 + 2024) = 0LL;
  *(_QWORD *)(a1 + 2032) = 0LL;
  *(_QWORD *)(a1 + 2008) = 0LL;
  *(_QWORD *)(a1 + 2016) = 0LL;
  *(_QWORD *)(a1 + 2040) = 0LL;
  *(_QWORD *)(a1 + 2048) = 0LL;
  *(_QWORD *)(a1 + 2056) = 0LL;
  *(_DWORD *)(a1 + 2072) = 0;
  *(_QWORD *)(a1 + 2080) = 0LL;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  if ( !v2 )
  {
    if ( (unsigned int)StorpInititalizePerUnitPerfTelemetry() )
      StorpUninititalizePerUnitPerfTelemetry(a1);
    else
      v1 = 1;
  }
  *(_DWORD *)(a1 + 2244) = v1;
}
