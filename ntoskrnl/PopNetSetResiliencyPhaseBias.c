/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x140993978
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403A7BD0 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x140993720 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x14099376C (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetSetResiliencyPhaseBias(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = a1;
  PopReleasePolicyLock(a1, a2, a3);
  if ( qword_140C6ABE0 )
  {
    LOBYTE(v4) = v3;
    qword_140C6ABE0(v4);
  }
  return PopAcquirePolicyLock(v4);
}
