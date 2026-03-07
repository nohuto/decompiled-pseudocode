void __fastcall PipDeleteAllDependencyRelations(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  bool v11; // zf

  if ( a1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
    if ( v3 )
    {
      ++*(_DWORD *)(v3 + 88);
      PipConvertResolutionsToReservations(v3, a2);
      v4 = *(_QWORD **)(v3 + 16);
      while ( v4 != (_QWORD *)(v3 + 16) )
      {
        v5 = (_DWORD *)PiListEntryToDependencyEdge((__int64)v4, 0);
        v4 = (_QWORD *)*v4;
        PipFreeDependencyEdge(v5, v6);
      }
      v7 = *(_QWORD **)(v3 + 32);
      while ( v7 != (_QWORD *)(v3 + 32) )
      {
        v8 = PiListEntryToDependencyEdge((__int64)v7, 1);
        v7 = (_QWORD *)*v7;
        v9 = *(_QWORD *)(v8 + 40);
        ++*(_DWORD *)(v9 + 88);
        PipFreeDependencyEdge((_DWORD *)v8, 0LL);
        v10 = *(_QWORD **)(v9 + 48);
        if ( v10 && *(_QWORD *)(v9 + 16) != v9 + 16 )
          PipAttemptDependentStart(v10);
        v11 = (*(_DWORD *)(v9 + 88))-- == 1;
        if ( v11 )
          PipDeleteDependencyNode((PVOID)v9);
      }
      PipUnlinkDeviceObjectAndDependencyNode(a1, v3);
      v11 = (*(_DWORD *)(v3 + 88))-- == 1;
      if ( v11 )
        PipDeleteDependencyNode((PVOID)v3);
    }
  }
}
