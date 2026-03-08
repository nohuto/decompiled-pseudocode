/*
 * XREFs of PpmReapplyIdlePolicy @ 0x14097FAC4
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x140825A60 (PpmSetProfilePolicySetting.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14098FE4C (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140236D20 (PopExecuteOnTargetProcessors.c)
 */

__int64 PpmReapplyIdlePolicy()
{
  return PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
}
