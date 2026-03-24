/*
 * XREFs of PipDeleteDependencyNode @ 0x1407CD5D0
 * Callers:
 *     PipDereferenceDependencyNode @ 0x140748F60 (PipDereferenceDependencyNode.c)
 *     PipCreateDependencyNode @ 0x1407B685C (PipCreateDependencyNode.c)
 *     PipDeleteAllDependencyRelations @ 0x1407CD520 (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14089D6C0 (IoDuplicateDependency.c)
 *     PipMergeDependencyEdgeList @ 0x14089DDC0 (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x14089DF44 (PipMergeDependencyNodes.c)
 *     PipSetDependency @ 0x14089E044 (PipSetDependency.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x14089E0F4 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     PipDeleteBindingIds @ 0x1407CD6A0 (PipDeleteBindingIds.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PipDeleteDependencyNode(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  _QWORD **v4; // rdx
  PVOID *v5; // rcx

  PipDeleteBindingIds();
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P
    || (v3 = (PVOID *)P[1], *v3 != P)
    || (*v3 = v2, v2[1] = v3, v4 = (_QWORD **)P[9], v4[1] != P + 9)
    || (v5 = (PVOID *)P[10], *v5 != P + 9) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  v4[1] = v5;
  ExFreePoolWithTag(P, 0x53706E50u);
}
