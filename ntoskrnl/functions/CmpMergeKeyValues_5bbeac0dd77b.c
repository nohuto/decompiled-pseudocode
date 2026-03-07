__int64 CmpMergeKeyValues(ULONG_PTR BugCheckParameter3, int a2, _DWORD *a3, ULONG_PTR a4, unsigned int a5, ...)
{
  unsigned int v5; // r15d
  __int64 v7; // rax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int NameInListWithStatus; // ebx
  unsigned int v12; // r14d
  ULONG_PTR v13; // rdx
  unsigned int v14; // r13d
  __int64 CellFlat; // rax
  __int64 v16; // r12
  unsigned int *v17; // rsi
  ULONG_PTR v18; // rdx
  ULONG_PTR v19; // rax
  __int16 v21; // [rsp+30h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h] BYREF
  unsigned int *v24; // [rsp+50h] [rbp-20h]
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-18h]
  __int128 v26; // [rsp+60h] [rbp-10h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+50h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+C8h] [rbp+58h]
  __int64 v30; // [rsp+D8h] [rbp+68h] BYREF
  va_list va; // [rsp+D8h] [rbp+68h]
  va_list va1; // [rsp+E0h] [rbp+70h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v30 = va_arg(va1, _QWORD);
  BugCheckParameter3a = a4;
  LODWORD(v27) = a2;
  v5 = 0;
  v7 = v30;
  v23 = 0xFFFFFFFFLL;
  v22 = 0xFFFFFFFFLL;
  v9 = a3[15];
  LODWORD(v28) = 0;
  LODWORD(v27) = 0;
  v26 = 0LL;
  if ( *(_DWORD *)(v30 + 60) < v9 )
    *(_DWORD *)(v30 + 60) = v9;
  v10 = a3[16];
  if ( *(_DWORD *)(v7 + 64) < v10 )
    *(_DWORD *)(v7 + 64) = v10;
  v24 = (unsigned int *)(v7 + 36);
  if ( *(_DWORD *)(v7 + 36) )
  {
    v12 = a3[9];
    if ( !v12 )
      return 0;
    Privileges = (PPRIVILEGE_SET)CmpAllocatePool(256LL, 0x7FFFLL, 538987843LL);
    if ( Privileges )
    {
      v13 = (unsigned int)a3[10];
      v14 = a5 >> 31;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v13, &v23);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, v13, (unsigned int *)&v23);
      v16 = CellFlat;
      v17 = (unsigned int *)CellFlat;
      while ( 1 )
      {
        v18 = *v17;
        v19 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
            ? HvpGetCellFlat(BugCheckParameter3, v18, &v22)
            : HvpGetCellPaged(BugCheckParameter3, v18, (unsigned int *)&v22);
        CmpInitializeValueNameString(v19, (__int64)&v26, (__int64)Privileges);
        NameInListWithStatus = CmpFindNameInListWithStatus(
                                 BugCheckParameter3a,
                                 v24,
                                 (__int64)&v26,
                                 0,
                                 (__int64)&v27,
                                 (__int64)va);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v22);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v22);
        if ( NameInListWithStatus < 0 )
        {
          if ( NameInListWithStatus != -1073741772 )
            break;
          NameInListWithStatus = CmpCopyValue(BugCheckParameter3, *v17, BugCheckParameter3a, v14, (unsigned int *)&v28);
          if ( NameInListWithStatus < 0 )
            break;
          NameInListWithStatus = CmpAddValueToListEx(BugCheckParameter3a, v28, v27, v14, v24, 1);
          if ( NameInListWithStatus < 0 )
            break;
        }
        ++v5;
        ++v17;
        if ( v5 >= v12 )
        {
          NameInListWithStatus = 0;
          break;
        }
      }
      if ( v16 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v23);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
      }
      CmSiFreeMemory(Privileges);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    NameInListWithStatus = CmpSyncKeyValues(BugCheckParameter3, a5, v7, v21);
    if ( NameInListWithStatus >= 0 )
      return 0;
  }
  return (unsigned int)NameInListWithStatus;
}
