/*
 * XREFs of PpmReapplyIdlePolicy @ 0x140982B74
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x14082DAD0 (PpmSetProfilePolicySetting.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140992EFC (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1402BFAEC (PopExecuteOnTargetProcessors.c)
 */

__int64 PpmReapplyIdlePolicy()
{
  return PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
}
