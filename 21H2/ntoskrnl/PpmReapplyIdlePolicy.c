/*
 * XREFs of PpmReapplyIdlePolicy @ 0x14098B1A8
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1407FCE7C (PpmSetProfilePolicySetting.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14099788C (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 */

__int64 PpmReapplyIdlePolicy()
{
  return PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
}
