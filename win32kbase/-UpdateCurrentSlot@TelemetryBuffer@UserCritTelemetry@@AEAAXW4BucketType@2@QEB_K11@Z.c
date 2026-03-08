/*
 * XREFs of ?UpdateCurrentSlot@TelemetryBuffer@UserCritTelemetry@@AEAAXW4BucketType@2@QEB_K11@Z @ 0x1C00DDD38
 * Callers:
 *     ?Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z @ 0x1C00DD904 (-Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UserCritTelemetry::TelemetryBuffer::UpdateCurrentSlot(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r10
  unsigned __int64 result; // rax

  v6 = 60LL * a2;
  *(_QWORD *)(a1 + 24 * (v6 + *(unsigned __int16 *)(a1 + 4392))) = *(_QWORD *)(a3 + 8LL * a2);
  *(_QWORD *)(a1 + 24 * (v6 + *(unsigned __int16 *)(a1 + 4392)) + 8) = *(_QWORD *)(a4 + 8LL * a2);
  *(_QWORD *)(a1 + 24 * (v6 + *(unsigned __int16 *)(a1 + 4392)) + 16) = *(_QWORD *)(a5 + 8LL * a2);
  *(_QWORD *)(a1 + 24LL * a2 + 4320) += *(_QWORD *)(a3 + 8LL * a2);
  v7 = 0LL;
  *(_QWORD *)(a1 + 24LL * a2 + 4328) += *(_QWORD *)(a4 + 8LL * a2);
  v8 = *(_QWORD *)(a3 + 8LL * a2);
  if ( v8 )
    v7 = *(_QWORD *)(a4 + 8LL * a2) / v8;
  result = *(_QWORD *)(a1 + 24LL * a2 + 4336);
  if ( result <= v7 )
    result = v7;
  *(_QWORD *)(a1 + 24LL * a2 + 4336) = result;
  return result;
}
