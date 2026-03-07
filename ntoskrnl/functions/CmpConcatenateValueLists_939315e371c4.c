__int64 __fastcall CmpConcatenateValueLists(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v9; // r15d
  unsigned int *v10; // rax
  unsigned int v11; // edi
  int v12; // eax
  char *v13; // r12
  unsigned int v14; // edi
  ULONG_PTR v15; // rdx
  const void *CellFlat; // rax
  ULONG_PTR v17; // rdx
  const void *CellPaged; // rax
  unsigned int *v19; // rcx
  unsigned int v20; // esi
  int v21; // eax
  __int64 v23; // [rsp+30h] [rbp-10h] BYREF
  void *v24; // [rsp+38h] [rbp-8h] BYREF
  int v25; // [rsp+78h] [rbp+38h] BYREF
  __int64 v26; // [rsp+80h] [rbp+40h] BYREF

  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = -1;
  HvpGetCellContextReinitialize(&v23);
  HvpGetCellContextReinitialize(&v26);
  v9 = *a2 + *a3;
  if ( v9 < *a2 )
  {
    return (unsigned int)-1073741670;
  }
  else if ( v9 )
  {
    v12 = HvAllocateCell(BugCheckParameter2, 4 * v9, a4, &v25, (__int64)&v24, (__int64)&v23);
    v13 = (char *)v24;
    v11 = v12;
    if ( v12 < 0 )
    {
      v20 = v25;
    }
    else
    {
      v14 = 0;
      if ( *a2 )
      {
        v15 = a2[1];
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          CellFlat = (const void *)HvpGetCellFlat(BugCheckParameter2, v15, &v26);
        else
          CellFlat = (const void *)HvpGetCellPaged(BugCheckParameter2, v15, (unsigned int *)&v26);
        memmove(v13, CellFlat, 4LL * *a2);
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, &v26);
        else
          HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v26);
        v14 = *a2;
      }
      if ( *a3 )
      {
        v17 = a3[1];
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          CellPaged = (const void *)HvpGetCellFlat(BugCheckParameter2, v17, &v26);
        else
          CellPaged = (const void *)HvpGetCellPaged(BugCheckParameter2, v17, (unsigned int *)&v26);
        memmove(&v13[4 * v14], CellPaged, 4LL * *a3);
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, &v26);
        else
          HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v26);
      }
      v19 = a5;
      v20 = -1;
      v21 = v25;
      v11 = 0;
      *a5 = v9;
      v19[1] = v21;
    }
    if ( v13 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, &v23);
      else
        HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v23);
    }
    if ( v20 != -1 )
      HvFreeCell(BugCheckParameter2, v20);
  }
  else
  {
    v10 = a5;
    *a5 = 0;
    v11 = 0;
    v10[1] = -1;
  }
  return v11;
}
