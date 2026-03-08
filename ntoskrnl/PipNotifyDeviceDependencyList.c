/*
 * XREFs of PipNotifyDeviceDependencyList @ 0x140681934
 * Callers:
 *     PnpNewDeviceNodeDependencyCheck @ 0x1406818C0 (PnpNewDeviceNodeDependencyCheck.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PiListEntryToDependencyEdge @ 0x140394734 (PiListEntryToDependencyEdge.c)
 *     PiGetDependentList @ 0x1406819C8 (PiGetDependentList.c)
 *     PiGetProviderList @ 0x1406CB884 (PiGetProviderList.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406CB90C (PnpAcquireDependencyRelationsLock.c)
 *     PipNotifyDependenciesChanged @ 0x140838D1C (PipNotifyDependenciesChanged.c)
 */

__int64 __fastcall PipNotifyDeviceDependencyList(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _QWORD **DependentList; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  PnpAcquireDependencyRelationsLock(0LL);
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_5;
    DependentList = (_QWORD **)PiGetDependentList(v2);
  }
  else
  {
    DependentList = (_QWORD **)PiGetProviderList(v2);
  }
  v5 = *DependentList;
  v6 = DependentList;
  while ( v5 != v6 )
  {
    v8 = PiListEntryToDependencyEdge((__int64)v5, a2);
    v5 = (_QWORD *)*v5;
    if ( a2 )
    {
      v10 = *(_QWORD *)(v8 + 40);
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 32);
      v10 = 0LL;
    }
    PipNotifyDependenciesChanged(v10, v9);
  }
LABEL_5:
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  return PpDevNodeUnlockTree(0LL);
}
