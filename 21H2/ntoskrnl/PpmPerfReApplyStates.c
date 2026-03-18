/*
 * XREFs of PpmPerfReApplyStates @ 0x140808958
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14022475C (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x140224EDC (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmUpdateProcessorPolicy @ 0x14081ACB4 (PpmUpdateProcessorPolicy.c)
 */

void PpmPerfReApplyStates()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  PpmCheckCustomRun(2u);
}
