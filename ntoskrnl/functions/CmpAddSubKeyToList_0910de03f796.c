__int64 __fastcall CmpAddSubKeyToList(ULONG_PTR BugCheckParameter3, unsigned int *a2, unsigned int a3)
{
  __int64 CellFlat; // rax
  __int64 v7; // rsi
  __int16 v8; // cx
  __int64 (__fastcall *v9)(_QWORD, _QWORD, __int64); // rax
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned int v13; // edi
  _WORD *CellPaged; // rax
  _WORD *v15; // rsi
  int v16; // edi
  _DWORD *v17; // rcx
  __int64 *v18; // rdx
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int128 v23; // [rsp+48h] [rbp-18h]
  char v24; // [rsp+A0h] [rbp+40h]
  ULONG_PTR BugCheckParameter4; // [rsp+B8h] [rbp+58h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  HvpGetCellContextReinitialize(&v20);
  HvpGetCellContextReinitialize(&v21);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v7 = CellFlat;
  v8 = *(_WORD *)(CellFlat + 72);
  if ( (*(_BYTE *)(CellFlat + 2) & 0x20) != 0 )
  {
    v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24);
    v10 = (unsigned __int16)(2 * v8);
    LOWORD(v23) = 2 * v8;
    WORD1(v23) = 2 * v8;
    v11 = v9((unsigned __int16)(2 * v8), 0LL, 540560707LL);
    *((_QWORD *)&v23 + 1) = v11;
    v12 = v11;
    if ( !v11 )
    {
      v16 = -1073741670;
      if ( !v7 )
        return (unsigned int)v16;
      v18 = &v20;
      goto LABEL_18;
    }
    v24 = 1;
    CmpCopyCompressedName(v11, v10, v7 + 76, *(unsigned __int16 *)(v7 + 72));
  }
  else
  {
    v24 = 0;
    LOWORD(v10) = *(_WORD *)(CellFlat + 72);
    v12 = CellFlat + 76;
    LOWORD(v23) = v10;
    *((_QWORD *)&v23 + 1) = CellFlat + 76;
    WORD1(v23) = v8;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v20);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v20);
  v13 = *a2;
  LODWORD(BugCheckParameter4) = v13;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v13);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
  v22 = 0LL;
  v15 = CellPaged;
  if ( *CellPaged == 26994 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v21);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v21);
    v15 = 0LL;
    v16 = CmpSelectLeaf(BugCheckParameter3, (__int64)&v22, (__int64)&BugCheckParameter4);
    if ( v16 < 0 )
      goto LABEL_14;
    v16 = CmpAddToLeaf(BugCheckParameter3, (unsigned int)BugCheckParameter4, (__int64)&BugCheckParameter4);
    if ( v16 < 0 )
      goto LABEL_14;
    v17 = (_DWORD *)v22;
  }
  else
  {
    v16 = CmpAddToLeaf(BugCheckParameter3, v13, (__int64)&BugCheckParameter4);
    if ( v16 < 0 )
      goto LABEL_14;
    v17 = a2;
  }
  v16 = 0;
  *v17 = BugCheckParameter4;
LABEL_14:
  if ( v24 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v12, (unsigned __int16)v10);
  if ( v15 )
  {
    v18 = &v21;
LABEL_18:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v18);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v18);
  }
  return (unsigned int)v16;
}
