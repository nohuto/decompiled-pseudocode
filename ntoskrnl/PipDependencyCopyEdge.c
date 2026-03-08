/*
 * XREFs of PipDependencyCopyEdge @ 0x1409516D0
 * Callers:
 *     IoDuplicateDependency @ 0x140951200 (IoDuplicateDependency.c)
 * Callees:
 *     PipAddDependencyEdgeBetweenNodes @ 0x140394528 (PipAddDependencyEdgeBetweenNodes.c)
 */

__int64 __fastcall PipDependencyCopyEdge(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  __int64 result; // rax
  _QWORD *v7; // r8

  v2 = (_QWORD *)(a1 + 56);
  v4 = *(_QWORD **)(a1 + 56);
  result = 0LL;
  do
  {
    if ( v4 == v2 )
      break;
    v7 = v4;
    v4 = (_QWORD *)*v4;
    result = PipAddDependencyEdgeBetweenNodes(*(_QWORD *)(a1 + 40), a2, (__int64)(v7 + 2));
  }
  while ( (int)result >= 0 );
  return result;
}
