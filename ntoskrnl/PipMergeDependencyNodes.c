/*
 * XREFs of PipMergeDependencyNodes @ 0x14095192C
 * Callers:
 *     IoResolveDependency @ 0x1403943F0 (IoResolveDependency.c)
 * Callees:
 *     PipMoveListEntries @ 0x14055D934 (PipMoveListEntries.c)
 *     PipDeleteDependencyNode @ 0x140951668 (PipDeleteDependencyNode.c)
 *     PipMergeDependencyEdgeList @ 0x1409517A8 (PipMergeDependencyEdgeList.c)
 */

void __fastcall PipMergeDependencyNodes(_DWORD *P, _DWORD *a2)
{
  bool v4; // zf

  ++P[22];
  ++a2[22];
  P[23] |= a2[23];
  PipMoveListEntries((_QWORD *)P + 7, (__int64)(a2 + 14));
  PipMergeDependencyEdgeList((__int64)P, (__int64)a2, 0);
  PipMergeDependencyEdgeList((__int64)P, (__int64)a2, 1);
  v4 = P[22]-- == 1;
  if ( v4 )
    PipDeleteDependencyNode(P);
  v4 = a2[22]-- == 1;
  if ( v4 )
    PipDeleteDependencyNode(a2);
}
