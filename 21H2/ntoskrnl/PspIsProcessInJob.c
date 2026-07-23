/*
 * XREFs of PspIsProcessInJob @ 0x1405FD380
 * Callers:
 *     PspCheckConditionalWakeCharge @ 0x1405FD214 (PspCheckConditionalWakeCharge.c)
 *     NtIsProcessInJob @ 0x1405FD290 (NtIsProcessInJob.c)
 *     PspGetJobAssignmentDisposition @ 0x1406F6B28 (PspGetJobAssignmentDisposition.c)
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
    v2 = *(_QWORD *)(v2 + 1072);
    if ( v4 )
      result = 292LL;
  }
  return result;
}
