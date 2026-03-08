/*
 * XREFs of IoDuplicateDependency @ 0x140951200
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PiListEntryToDependencyEdge @ 0x140394734 (PiListEntryToDependencyEdge.c)
 *     PiGetDependentList @ 0x1406819C8 (PiGetDependentList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PipQueryBindingResolution @ 0x14083888C (PipQueryBindingResolution.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140838960 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipCreateDependencyNode @ 0x140838A40 (PipCreateDependencyNode.c)
 *     PipDeleteDependencyNode @ 0x140951668 (PipDeleteDependencyNode.c)
 *     PipDependencyCopyEdge @ 0x1409516D0 (PipDependencyCopyEdge.c)
 */

__int64 __fastcall IoDuplicateDependency(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *BindingResolution; // rax
  _DWORD *DependencyNode; // rdi
  __int64 *DependentList; // r15
  __int64 *v8; // r14
  __int64 v9; // rax
  int v10; // eax
  _DWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v2 = 0;
  v13[1] = 0;
  if ( a1 && a2 )
  {
    PnpAcquireDependencyRelationsLock(1);
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL) )
    {
LABEL_4:
      ExReleaseResourceLite(&PiDependencyRelationsLock);
      PpDevNodeUnlockTree(0);
      return v2;
    }
    v13[0] = 0;
    v14 = a2;
    BindingResolution = PipQueryBindingResolution((__int64)v13);
    DependencyNode = BindingResolution;
    if ( BindingResolution )
    {
      ++*((_DWORD *)BindingResolution + 22);
    }
    else
    {
      DependencyNode = (_DWORD *)PipCreateDependencyNode((__int64)v13);
      if ( !DependencyNode )
      {
        v2 = -1073741670;
        goto LABEL_4;
      }
    }
    DependentList = PiGetDependentList(a1);
    v8 = (__int64 *)*DependentList;
    if ( (__int64 *)*DependentList != DependentList )
    {
      while ( 1 )
      {
        v9 = PiListEntryToDependencyEdge((__int64)v8, 1);
        v8 = (__int64 *)*v8;
        v10 = PipDependencyCopyEdge(v9, DependencyNode);
        if ( v10 < 0 )
          break;
        if ( v8 == DependentList )
          goto LABEL_14;
      }
      v2 = v10;
    }
LABEL_14:
    if ( DependencyNode[22]-- == 1 )
      PipDeleteDependencyNode(DependencyNode);
    PipAddDependentsToRebuildPowerRelationsQueue(a2);
    ExReleaseResourceLite(&PiDependencyRelationsLock);
    PpDevNodeUnlockTree(0);
    PipProcessRebuildPowerRelationsQueue();
    return v2;
  }
  return 3221225485LL;
}
