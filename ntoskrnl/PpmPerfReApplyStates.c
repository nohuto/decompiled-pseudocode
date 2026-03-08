/*
 * XREFs of PpmPerfReApplyStates @ 0x1409839D4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmPerfSetAllDomainsToUpdate @ 0x1402D1B24 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmCheckCustomRun @ 0x1402D1B4C (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmUpdateProcessorPolicy @ 0x140826290 (PpmUpdateProcessorPolicy.c)
 */

void PpmPerfReApplyStates()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  PpmCheckCustomRun(2u);
}
