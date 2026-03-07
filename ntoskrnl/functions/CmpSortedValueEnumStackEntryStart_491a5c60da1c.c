__int64 __fastcall CmpSortedValueEnumStackEntryStart(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int v4; // ebx
  size_t v7; // r14
  struct _PRIVILEGE_SET *Pool; // rsi
  ULONG_PTR v9; // rdx
  __int64 CellFlat; // rax
  unsigned int *v11; // r12
  unsigned int *v12; // rbp
  _QWORD *p_PrivilegeCount; // r13
  size_t v14; // r15
  ULONG_PTR v15; // rdx
  __int64 CellPaged; // rax
  __int64 v17; // r13
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v20 = 0LL;
  HvpGetCellContextReinitialize(&v20);
  *(_QWORD *)a1 = a2;
  v7 = *(unsigned int *)(a3 + 36);
  if ( (_DWORD)v7 )
  {
    Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, 8 * v7, 943148355LL);
    if ( Pool )
    {
      v21 = CmpAllocatePool(256LL, 8 * v7, 943148355LL);
      if ( v21 )
      {
        v9 = *(unsigned int *)(a3 + 40);
        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(a2, v9, &v20);
        else
          CellFlat = HvpGetCellPaged(a2, v9, (unsigned int *)&v20);
        v11 = (unsigned int *)CellFlat;
        v12 = (unsigned int *)v21;
        p_PrivilegeCount = &Pool->PrivilegeCount;
        v14 = v7;
        do
        {
          HvpGetCellContextReinitialize(v12);
          v15 = *v11;
          if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(a2, v15, v12);
          else
            CellPaged = HvpGetCellPaged(a2, v15, v12);
          *p_PrivilegeCount = CellPaged;
          v12 += 2;
          ++p_PrivilegeCount;
          ++v11;
          --v14;
        }
        while ( v14 );
        v17 = v21;
        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(a2, &v20);
        else
          HvpReleaseCellPaged(a2, (unsigned int *)&v20);
        qsort(Pool, v7, 8uLL, CmpSortedValueEnumStackValueCompareFunction);
        *(_QWORD *)(a1 + 8) = Pool;
        *(_QWORD *)(a1 + 16) = v17;
        *(_DWORD *)(a1 + 24) = v7;
      }
      else
      {
        v4 = -1073741670;
        CmSiFreeMemory(Pool);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v4;
}
