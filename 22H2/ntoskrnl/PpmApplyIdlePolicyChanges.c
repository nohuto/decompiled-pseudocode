/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x140583F90
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x14039F868 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy((_QWORD *)(a1 + 33600));
  return 0LL;
}
