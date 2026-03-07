__int64 __fastcall CmpMarkKeyDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, char a3)
{
  __int64 v3; // r14
  bool v4; // zf
  char v5; // r13
  unsigned int v6; // r12d
  __int64 CellPaged; // rax
  __int64 v9; // rsi
  int v10; // edi
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rdx
  __int64 CellFlat; // rax
  __int64 v14; // r15
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // r13
  int *v20; // rdx
  _DWORD v21[2]; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v22[2]; // [rsp+28h] [rbp-18h] BYREF
  _DWORD v23[4]; // [rsp+30h] [rbp-10h] BYREF
  int v24; // [rsp+80h] [rbp+40h] BYREF
  int v25; // [rsp+84h] [rbp+44h]
  unsigned int v26; // [rsp+88h] [rbp+48h]
  char v27; // [rsp+90h] [rbp+50h]

  v27 = a3;
  v26 = a2;
  v3 = 0LL;
  v23[0] = -1;
  v4 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v5 = a3;
  v6 = a2;
  v23[1] = 0;
  v22[0] = -1;
  v22[1] = 0;
  v24 = -1;
  v25 = 0;
  v21[0] = -1;
  v21[1] = 0;
  if ( v4 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2);
  v9 = CellPaged;
  if ( (*(_BYTE *)(CellPaged + 2) & 2) != 0 )
  {
    v10 = 0;
    goto LABEL_22;
  }
  v10 = HvpMarkCellDirty(BugCheckParameter3, v6);
  if ( v10 < 0 )
    goto LABEL_22;
  v11 = *(unsigned int *)(v9 + 48);
  if ( (_DWORD)v11 != -1 )
  {
    v10 = HvpMarkCellDirty(BugCheckParameter3, v11);
    if ( v10 < 0 )
      goto LABEL_22;
  }
  v12 = *(unsigned int *)(v9 + 44);
  if ( (_DWORD)v12 != -1 )
  {
    v10 = HvpMarkCellDirty(BugCheckParameter3, v12);
    if ( v10 < 0 )
      goto LABEL_22;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v9 + 44));
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v14 = CellFlat;
    v10 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(CellFlat + 4));
    if ( v10 < 0 || (v10 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v14 + 8)), v10 < 0) )
    {
      if ( !v14 )
        goto LABEL_22;
      v20 = &v24;
LABEL_51:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v20);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v20);
      goto LABEL_21;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v24);
  }
  if ( (*(_BYTE *)(v9 + 2) & 0x40) == 0 && *(_DWORD *)(v9 + 36) )
  {
    v10 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v9 + 40));
    if ( v10 < 0 )
      goto LABEL_22;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v16 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v9 + 40));
    else
      v16 = HvpGetCellPaged(BugCheckParameter3);
    v17 = 0LL;
    v3 = v16;
    if ( *(_DWORD *)(v9 + 36) )
    {
      while ( 1 )
      {
        v10 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v3 + 4 * v17));
        if ( v10 < 0 )
          goto LABEL_21;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v18 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v3 + 4 * v17));
        else
          v18 = HvpGetCellPaged(BugCheckParameter3);
        v19 = v18;
        v10 = CmpMarkValueDataDirty(BugCheckParameter3);
        if ( v10 < 0 )
        {
          if ( !v19 )
            goto LABEL_21;
          v20 = v21;
          goto LABEL_51;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v21);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v21);
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= *(_DWORD *)(v9 + 36) )
        {
          v5 = v27;
          break;
        }
      }
    }
    v6 = v26;
  }
  if ( (*(_BYTE *)(v9 + 2) & 4) != 0
    || !v5
    || (v10 = CmpMarkIndexDirty(BugCheckParameter3, *(unsigned int *)(v9 + 16), v6), v10 >= 0)
    && (v10 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v9 + 16)), v10 >= 0) )
  {
    v10 = 0;
  }
LABEL_21:
  if ( v3 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v22);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v22);
  }
LABEL_22:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v23);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v23);
  return (unsigned int)v10;
}
