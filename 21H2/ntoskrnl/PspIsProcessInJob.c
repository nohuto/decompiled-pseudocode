/*
 * XREFs of PspIsProcessInJob @ 0x1406C9B74
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x140687EEC (PspGetJobAssignmentDisposition.c)
 *     NtIsProcessInJob @ 0x1406C9A70 (NtIsProcessInJob.c)
 *     PspChargeProcessWakeCounter @ 0x1407AC250 (PspChargeProcessWakeCounter.c)
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
    v2 = *(_QWORD *)(v2 + 1264);
    if ( v4 )
      result = 292LL;
  }
  return result;
}
