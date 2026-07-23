/*
 * XREFs of PpmPerfReApplyStates @ 0x14077A510
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14037CC28 (PpmCheckCustomRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x140380B78 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmUpdateProcessorPolicy @ 0x14078CA90 (PpmUpdateProcessorPolicy.c)
 */

char PpmPerfReApplyStates()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  return PpmCheckCustomRun(2);
}
