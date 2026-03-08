/*
 * XREFs of ??$SmmAcquirePushLockExclusive@$0EC@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EC@@@@Z @ 0x1C006DD24
 * Callers:
 *     ?SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z @ 0x1C03D0FD0 (-SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 SmmAcquirePushLockExclusive<66>()
{
  return ExAcquirePushLockExclusiveEx(&SmmDomainChangeGlobalLock, 0LL);
}
