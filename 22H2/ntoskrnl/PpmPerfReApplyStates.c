/*
 * XREFs of PpmPerfReApplyStates @ 0x14077A250
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x14034AA84 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14037CB48 (PpmCheckCustomRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x1403807D8 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmUpdateProcessorPolicy @ 0x14078C7D0 (PpmUpdateProcessorPolicy.c)
 */

char PpmPerfReApplyStates()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  return PpmCheckCustomRun(2);
}
