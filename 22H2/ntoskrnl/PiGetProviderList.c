/*
 * XREFs of PiGetProviderList @ 0x14073DDF8
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x14073DDA8 (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x14074799C (PipNotifyDeviceDependencyList.c)
 *     PiQueryPowerDependencyRelations @ 0x140748EC8 (PiQueryPowerDependencyRelations.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x140748F80 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     IopSortRelationListForRemove @ 0x14074BF38 (IopSortRelationListForRemove.c)
 *     PnpGetDeviceDependencyList @ 0x14089E124 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x1408B2654 (IopCheckIfMergeRequired.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetProviderList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  else
    v1 = 0LL;
  if ( v1 )
    return (__int64 *)(v1 + 16);
  else
    return &PiDependencyNodeEmptyList;
}
