/*
 * XREFs of PpmPerfReApplyStates @ 0x140986A84
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfSetAllDomainsToUpdate @ 0x14032AFD0 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmCheckCustomRun @ 0x14032B45C (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 *     PpmUpdateProcessorPolicy @ 0x14082E300 (PpmUpdateProcessorPolicy.c)
 */

void PpmPerfReApplyStates()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  PpmCheckCustomRun(2u);
}
