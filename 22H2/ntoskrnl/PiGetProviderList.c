/*
 * XREFs of PiGetProviderList @ 0x1406C9980
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x1406C98DC (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x14079C794 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14079C854 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x140868C88 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x14086F248 (PiQueryPowerDependencyRelations.c)
 *     PnpGetDeviceDependencyList @ 0x140954A18 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x14096C9DC (IopCheckIfMergeRequired.c)
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
