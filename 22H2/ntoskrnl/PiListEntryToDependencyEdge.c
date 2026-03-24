/*
 * XREFs of PiListEntryToDependencyEdge @ 0x14050C438
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x14074799C (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x1407CD520 (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14089D6C0 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x14089D948 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x14089D97C (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x14089DB98 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14089DDC0 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x14089E124 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
