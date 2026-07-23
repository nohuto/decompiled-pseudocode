/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x140565900
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x1403C4BC8 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy((_QWORD *)(a1 + 0x8000));
  return 0LL;
}
