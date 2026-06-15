/*
 * XREFs of ?StdDev@?$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@QEAANW4SpatialObjectCountTypes@@@Z @ 0x1400685E0
 * Callers:
 *     ?LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140067E50 (-LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 * Callees:
 *     sqrt @ 0x14001DF48 (sqrt.c)
 */

double __fastcall CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::StdDev(
        __int64 a1,
        int a2)
{
  __int64 v2; // r8
  double v3; // xmm6_8

  v2 = 32LL * a2;
  v3 = (double)*(int *)(v2 + a1 + 16);
  if ( v3 <= 1.0 )
    return 0.0;
  else
    return sqrt(v3 * *(double *)(v2 + a1 + 40) - *(double *)(v2 + a1 + 24) * *(double *)(v2 + a1 + 24)) / v3;
}
