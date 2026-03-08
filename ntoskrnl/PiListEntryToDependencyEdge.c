/*
 * XREFs of PiListEntryToDependencyEdge @ 0x140394734
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x140681934 (PipNotifyDeviceDependencyList.c)
 *     PipCheckValidNewDependencyEdge @ 0x140838CAC (PipCheckValidNewDependencyEdge.c)
 *     PiEnumerateDependentListEntry @ 0x140838DB4 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x140838DE8 (PiEnumerateProviderListEntry.c)
 *     IoDuplicateDependency @ 0x140951200 (IoDuplicateDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x1409514A0 (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x1409517A8 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x1409519F8 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
