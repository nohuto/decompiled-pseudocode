__int64 __fastcall PipVisitDeviceObjectListEntry(_DWORD *a1, _DWORD *a2, int *a3)
{
  int v5; // eax
  __int64 v7; // rbp
  __int64 i; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 *DependentList; // r14
  __int64 *j; // rdi
  int v13; // eax
  _QWORD *v15; // [rsp+78h] [rbp+20h]

  v15 = 0LL;
  v5 = a1[4];
  if ( (v5 & 2) == 0 )
  {
    a1[4] = v5 | 2;
    if ( *(_QWORD *)a1 )
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 312LL) + 40LL);
    else
      v7 = 0LL;
    for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
    {
      v9 = &a2[4 * i + 4 + 2 * i];
      v10 = (_QWORD *)*v9;
      v15 = v9;
      if ( v10 )
        v10 = *(_QWORD **)(v10[39] + 40LL);
      if ( v10[2] == v7 || (v10[81] & 0xFFFFFFFFFFFFFFFEuLL) == v7 )
        PipVisitDeviceObjectListEntry(v9, a2, a3);
    }
    DependentList = PiGetDependentList(*(_QWORD *)a1);
    for ( j = (__int64 *)*DependentList; j != DependentList; j = (__int64 *)*j )
      PiEnumerateDependentListEntry((__int64)j);
    v13 = *a3;
    a1[3] = *a3;
    *a3 = v13 + 1;
  }
  return 0LL;
}
