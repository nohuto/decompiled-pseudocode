/*
 * XREFs of PiGetProviderList @ 0x1406CB884
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x140681934 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1406CB7E0 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x140862350 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x14086CD28 (PiQueryPowerDependencyRelations.c)
 *     PnpGetDeviceDependencyList @ 0x1409519F8 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1409699BC (IopCheckIfMergeRequired.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetProviderList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL)) != 0 )
    return (__int64 *)(v1 + 16);
  else
    return &PiDependencyNodeEmptyList;
}
