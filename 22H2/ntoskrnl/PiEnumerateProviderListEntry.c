/*
 * XREFs of PiEnumerateProviderListEntry @ 0x14089D97C
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x14073DDA8 (PipCheckForUnsatisfiedDependencies.c)
 *     PiQueryPowerDependencyRelations @ 0x140748EC8 (PiQueryPowerDependencyRelations.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x140748F80 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     IopSortRelationListForRemove @ 0x14074BF38 (IopSortRelationListForRemove.c)
 *     IopCheckIfMergeRequired @ 0x1408B2654 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14050C438 (PiListEntryToDependencyEdge.c)
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
