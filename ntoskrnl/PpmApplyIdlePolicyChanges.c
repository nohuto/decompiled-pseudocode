/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x140581A60
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x14039AFC8 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy((_QWORD *)(a1 + 33600));
  return 0LL;
}
