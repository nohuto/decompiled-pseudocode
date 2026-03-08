/*
 * XREFs of PiEnumerateProviderListEntry @ 0x140838DE8
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1406CB7E0 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x140862350 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x14086CD28 (PiQueryPowerDependencyRelations.c)
 *     IopCheckIfMergeRequired @ 0x1409699BC (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140394734 (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateProviderListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 0);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 32) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
