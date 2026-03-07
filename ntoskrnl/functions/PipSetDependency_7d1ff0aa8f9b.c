__int64 __fastcall PipSetDependency(__int64 a1, __int64 a2)
{
  __int64 BindingResolution; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *DependencyNode; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // rbx
  unsigned int v12; // esi
  bool v13; // zf

  BindingResolution = PipQueryBindingResolution(a1);
  DependencyNode = (_DWORD *)BindingResolution;
  if ( BindingResolution )
  {
    ++*(_DWORD *)(BindingResolution + 88);
  }
  else
  {
    DependencyNode = (_DWORD *)PipCreateDependencyNode(a1, v5, v6);
    if ( !DependencyNode )
      return (unsigned int)-1073741670;
  }
  v8 = PipQueryBindingResolution(a2);
  v11 = (_DWORD *)v8;
  if ( v8 )
  {
    ++*(_DWORD *)(v8 + 88);
  }
  else
  {
    v11 = (_DWORD *)PipCreateDependencyNode(a2, v9, v10);
    if ( !v11 )
    {
      v12 = -1073741670;
      goto LABEL_6;
    }
  }
  v12 = PipAddDependencyEdgeBetweenNodes((__int64)DependencyNode, (__int64)v11, a2);
LABEL_6:
  v13 = DependencyNode[22]-- == 1;
  if ( v13 )
    PipDeleteDependencyNode(DependencyNode);
  if ( v11 )
  {
    v13 = v11[22]-- == 1;
    if ( v13 )
      PipDeleteDependencyNode(v11);
  }
  return v12;
}
