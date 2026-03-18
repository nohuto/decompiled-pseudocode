/*
 * XREFs of PiListEntryToDependencyEdge @ 0x140396904
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x14079C794 (PipNotifyDeviceDependencyList.c)
 *     PipCheckValidNewDependencyEdge @ 0x140839D5C (PipCheckValidNewDependencyEdge.c)
 *     PiEnumerateDependentListEntry @ 0x140839E64 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x140839E98 (PiEnumerateProviderListEntry.c)
 *     IoDuplicateDependency @ 0x140954220 (IoDuplicateDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x1409544C0 (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x1409547C8 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x140954A18 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
