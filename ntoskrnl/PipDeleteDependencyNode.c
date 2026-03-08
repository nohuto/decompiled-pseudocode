/*
 * XREFs of PipDeleteDependencyNode @ 0x140951668
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipSetDependency @ 0x1408387E4 (PipSetDependency.c)
 *     PipCreateDependencyNode @ 0x140838A40 (PipCreateDependencyNode.c)
 *     PipDereferenceDependencyNode @ 0x140838B30 (PipDereferenceDependencyNode.c)
 *     IoDuplicateDependency @ 0x140951200 (IoDuplicateDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x1409514A0 (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x1409517A8 (PipMergeDependencyEdgeList.c)
 *     PipMergeDependencyNodes @ 0x14095192C (PipMergeDependencyNodes.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x1409519A4 (PipUnlinkDeviceObjectAndDependencyNode.c)
 * Callees:
 *     PipDeleteBindingIds @ 0x140951624 (PipDeleteBindingIds.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PipDeleteDependencyNode(_QWORD *P)
{
  _QWORD *v2; // rcx
  PVOID *v3; // rax
  _QWORD **v4; // rdx
  PVOID *v5; // rcx

  PipDeleteBindingIds((__int64)P);
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
