/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x1408F2158
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403CB7C0 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408F1E7C (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408F1EC8 (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetSetResiliencyPhaseBias(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = a1;
  PopReleasePolicyLock(a1, a2);
  if ( qword_140C54440 )
  {
    LOBYTE(v3) = v2;
    qword_140C54440(v3);
  }
  return PopAcquirePolicyLock(v3);
}
