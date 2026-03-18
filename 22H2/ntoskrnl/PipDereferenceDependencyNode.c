/*
 * XREFs of PipDereferenceDependencyNode @ 0x140839BE0
 * Callers:
 *     IoResolveDependency @ 0x1403965C0 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x14055FC7C (PipFreeDependencyEdge.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x140954688 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}
