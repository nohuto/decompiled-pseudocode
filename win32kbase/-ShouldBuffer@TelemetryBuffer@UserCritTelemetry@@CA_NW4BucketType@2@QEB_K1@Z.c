/*
 * XREFs of ?ShouldBuffer@TelemetryBuffer@UserCritTelemetry@@CA_NW4BucketType@2@QEB_K1@Z @ 0x1C00DD8CC
 * Callers:
 *     ?Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z @ 0x1C00DD904 (-Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall UserCritTelemetry::TelemetryBuffer::ShouldBuffer(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r9

  v3 = a1;
  v4 = 8LL * a1;
  v5 = 2 * v3;
  return *(_QWORD *)(v4 + a2) > UserCritTelemetry::TelemetryBuffer::LatencyThresholds[v5]
      || *(_QWORD *)(v4 + a3) > UserCritTelemetry::TelemetryBuffer::LatencyThresholds[v5 + 1];
}
