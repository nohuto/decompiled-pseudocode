/*
 * XREFs of PpmCancelExitLatencyTrace @ 0x1403A7EC8
 * Callers:
 *     KdPowerTransitionEx @ 0x1403A7D80 (KdPowerTransitionEx.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1405828E8 (PpmIdleCompleteExitLatencyTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmCancelExitLatencyTrace(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 33600);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 3) )
    {
      *(_DWORD *)(v1 + 20) = PpmExitLatencySamplingPercentage != 0;
      result = *(_QWORD *)(a1 + 33600);
      *(_BYTE *)(result + 3) = 0;
      *(_QWORD *)(result + 64) = 0LL;
    }
  }
  return result;
}
