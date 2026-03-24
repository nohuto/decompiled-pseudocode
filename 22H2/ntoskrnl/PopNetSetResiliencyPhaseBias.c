/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x1408F2048
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403CAF50 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408F1D6C (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408F1DB8 (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetSetResiliencyPhaseBias(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  PopReleasePolicyLock(a1, a2);
  if ( qword_140C54400 )
  {
    LOBYTE(v3) = v2;
    qword_140C54400(v3);
  }
  return PopAcquirePolicyLock(v3);
}
