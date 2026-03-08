/*
 * XREFs of PipDereferenceDependencyNode @ 0x140838B30
 * Callers:
 *     IoResolveDependency @ 0x1403943F0 (IoResolveDependency.c)
 *     PipFreeDependencyEdge @ 0x14055D7DC (PipFreeDependencyEdge.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x140951668 (PipDeleteDependencyNode.c)
 */

__int64 __fastcall PipDereferenceDependencyNode(_DWORD *a1)
{
  __int64 result; // rax

  if ( a1[22]-- == 1 )
    return PipDeleteDependencyNode(a1);
  return result;
}
