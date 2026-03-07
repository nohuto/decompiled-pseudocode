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
