/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x140996A28
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403AD1B0 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x1409967D0 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x14099681C (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetSetResiliencyPhaseBias(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = a1;
  PopReleasePolicyLock(a1, a2, a3);
  if ( qword_140C6B050 )
  {
    LOBYTE(v4) = v3;
    qword_140C6B050(v4);
  }
  return PopAcquirePolicyLock(v4);
}
