__int64 __fastcall CmpMarkKeyValuesDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // r15
  bool v4; // zf
  int v7; // esi
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rdx
  __int64 CellFlat; // rax
  __int64 v12; // r13
  _BYTE *v13; // rdi
  ULONG_PTR v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // r12
  ULONG_PTR v18; // rdx
  __int64 CellPaged; // rax
  __int64 v20; // r13
  _QWORD v22[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+50h] BYREF
  __int64 v24; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0LL;
  v22[0] = 0xFFFFFFFFLL;
  v4 = (*(_BYTE *)(a3 + 2) & 2) == 0;
  v23 = 0xFFFFFFFFLL;
  v24 = 0xFFFFFFFFLL;
  if ( !v4 )
    return 0;
  v7 = HvpMarkCellDirty(BugCheckParameter3, a2, 0);
  if ( v7 >= 0 )
  {
    v8 = *(unsigned int *)(a3 + 48);
    if ( (_DWORD)v8 == -1 || (v7 = HvpMarkCellDirty(BugCheckParameter3, v8, 0), v7 >= 0) )
    {
      v9 = *(unsigned int *)(a3 + 44);
      if ( (_DWORD)v9 != -1 )
      {
        v7 = HvpMarkCellDirty(BugCheckParameter3, v9, 0);
        if ( v7 < 0 )
          return (unsigned int)v7;
        v10 = *(unsigned int *)(a3 + 44);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(BugCheckParameter3, v10, &v23);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter3, v10, (unsigned int *)&v23);
        v12 = CellFlat;
        v7 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(CellFlat + 4), 0);
        v13 = (_BYTE *)(BugCheckParameter3 + 140);
        if ( v7 < 0 || (v7 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v12 + 8), 0), v7 < 0) )
        {
          if ( v12 )
          {
            v16 = &v23;
LABEL_22:
            if ( (*v13 & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, v16);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v16);
          }
LABEL_36:
          if ( v3 )
          {
            if ( (*v13 & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, v22);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v22);
          }
          return (unsigned int)v7;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v23);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
      }
      if ( !*(_DWORD *)(a3 + 36) )
        goto LABEL_35;
      v7 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(a3 + 40), 0);
      if ( v7 < 0 )
        return (unsigned int)v7;
      v14 = *(unsigned int *)(a3 + 40);
      v13 = (_BYTE *)(BugCheckParameter3 + 140);
      v15 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
          ? HvpGetCellFlat(BugCheckParameter3, v14, v22)
          : HvpGetCellPaged(BugCheckParameter3, v14, (unsigned int *)v22);
      v17 = 0LL;
      v3 = v15;
      if ( *(_DWORD *)(a3 + 36) )
      {
        while ( 1 )
        {
          v7 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v3 + 4 * v17), 0);
          if ( v7 < 0 )
            break;
          v18 = *(unsigned int *)(v3 + 4 * v17);
          if ( (*v13 & 1) != 0 )
            CellPaged = HvpGetCellFlat(BugCheckParameter3, v18, &v24);
          else
            CellPaged = HvpGetCellPaged(BugCheckParameter3, v18, (unsigned int *)&v24);
          v20 = CellPaged;
          v7 = CmpMarkValueDataDirty(BugCheckParameter3, CellPaged);
          if ( v7 < 0 )
          {
            if ( !v20 )
              goto LABEL_36;
            v16 = &v24;
            goto LABEL_22;
          }
          if ( (*v13 & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v24);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v24);
          v17 = (unsigned int)(v17 + 1);
          if ( (unsigned int)v17 >= *(_DWORD *)(a3 + 36) )
            goto LABEL_35;
        }
      }
      else
      {
LABEL_35:
        v7 = 0;
        v13 = (_BYTE *)(BugCheckParameter3 + 140);
      }
      goto LABEL_36;
    }
  }
  return (unsigned int)v7;
}
