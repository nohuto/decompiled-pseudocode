/*
 * XREFs of PipDereferenceDependencyNode @ 0x140748F60
 * Callers:
 *     IoResolveDependency @ 0x1403BF100 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x14050C660 (PipFreeDependencyEdge.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140747A0C (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1407CD5D0 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}
