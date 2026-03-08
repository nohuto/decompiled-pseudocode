/*
 * XREFs of PspIsProcessInJob @ 0x140788EDC
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x1406FFFD0 (PspGetJobAssignmentDisposition.c)
 *     NtIsProcessInJob @ 0x140788DE0 (NtIsProcessInJob.c)
 *     PspChargeProcessWakeCounter @ 0x1407CA2E0 (PspChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspIsProcessInJob(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  bool v4; // zf

  v2 = *(_QWORD *)(a1 + 1296);
  result = 291LL;
  while ( v2 )
  {
    v4 = v2 == a2;
    v2 = *(_QWORD *)(v2 + 1288);
    if ( v4 )
      result = 292LL;
  }
  return result;
}
