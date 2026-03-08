/*
 * XREFs of PipUnlinkDeviceObjectAndDependencyNode @ 0x1409519A4
 * Callers:
 *     IoResolveDependency @ 0x1403943F0 (IoResolveDependency.c)
 *     PipDeleteAllDependencyRelations @ 0x1409514A0 (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PipDeleteDependencyNode @ 0x140951668 (PipDeleteDependencyNode.c)
 */

void __fastcall PipUnlinkDeviceObjectAndDependencyNode(_QWORD *a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 72) != a2 + 72 )
    ObfDereferenceObjectWithTag(a1, 0x44706E50u);
  *(_QWORD *)(a1[39] + 80LL) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  if ( (*(_DWORD *)(a2 + 88))-- == 1 )
    PipDeleteDependencyNode((_QWORD *)a2);
}
