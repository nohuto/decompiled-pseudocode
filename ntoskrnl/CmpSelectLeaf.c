/*
 * XREFs of CmpSelectLeaf @ 0x140872120
 * Callers:
 *     CmpAddSubKeyToList @ 0x1407A4300 (CmpAddSubKeyToList.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyInRoot @ 0x1407ADE40 (CmpFindSubKeyInRoot.c)
 *     CmpDoCompareKeyName @ 0x1407AE420 (CmpDoCompareKeyName.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpSplitLeaf @ 0x140A21D7C (CmpSplitLeaf.c)
 */

__int64 __fastcall CmpSelectLeaf(
        ULONG_PTR BugCheckParameter3,
        _DWORD *a2,
        const UNICODE_STRING *a3,
        int a4,
        unsigned int **a5,
        unsigned int *a6)
{
  int v9; // edi
  ULONG_PTR v10; // rdx
  __int64 CellFlat; // rax
  __int64 v12; // r14
  signed int SubKeyInRoot; // r15d
  unsigned int v14; // edi
  __int64 CellPaged; // rax
  unsigned int *v16; // rsi
  ULONG_PTR v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  char v21; // al
  __int64 v22; // rsi
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rax
  ULONG_PTR v26; // rdx
  __int64 v27; // rax
  ULONG_PTR v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp+48h] BYREF
  int v32; // [rsp+A8h] [rbp+58h]

  v32 = a4;
  LODWORD(BugCheckParameter4) = 0;
  LODWORD(v28) = 0;
  v30[0] = 0xFFFFFFFFLL;
  v29 = 0xFFFFFFFFLL;
  v9 = HvpMarkCellDirty(BugCheckParameter3, (unsigned int)*a2, 0);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v10 = (unsigned int)*a2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v10, v30);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v10, (unsigned int *)v30);
  v12 = CellFlat;
  SubKeyInRoot = CmpFindSubKeyInRoot(
                   BugCheckParameter3,
                   CellFlat,
                   (__int64)a3,
                   0LL,
                   (unsigned int *)&BugCheckParameter4);
  if ( SubKeyInRoot < 0 )
  {
LABEL_63:
    v9 = -1073741670;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v14 = BugCheckParameter4;
    if ( (_DWORD)BugCheckParameter4 != -1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v29);
      else
        CellPaged = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, (unsigned int *)&v29);
      if ( *(_WORD *)(CellPaged + 2) < 0x3F5u )
      {
        v16 = (unsigned int *)(v12 + 4 * ((unsigned int)SubKeyInRoot + 1LL));
LABEL_10:
        *a5 = v16;
        *a6 = v14;
        v9 = 0;
        goto LABEL_11;
      }
      goto LABEL_39;
    }
    v16 = (unsigned int *)(v12 + 4 * ((unsigned int)SubKeyInRoot + 1LL));
    v18 = *v16;
    v19 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, v18, &v29)
        : HvpGetCellPaged(BugCheckParameter3, v18, (unsigned int *)&v29);
    LODWORD(v28) = *(_DWORD *)(v19 + 4);
    v20 = CmpDoCompareKeyName(BugCheckParameter3, a3, 0LL, v28);
    if ( v20 == 2 )
      break;
    if ( v20 < 0 )
    {
      v21 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
      if ( SubKeyInRoot )
      {
        if ( v21 )
          HvpReleaseCellFlat(BugCheckParameter3, &v29);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
        v22 = (unsigned int)(SubKeyInRoot - 1);
        goto LABEL_32;
      }
      if ( v21 )
        HvpReleaseCellFlat(BugCheckParameter3, &v29);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
      v16 = (unsigned int *)(v12 + 4);
LABEL_35:
      v23 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      v14 = *v16;
      LODWORD(BugCheckParameter4) = *v16;
      if ( v23 )
        v24 = HvpGetCellPaged(BugCheckParameter3, v14, (unsigned int *)&v29);
      else
        v24 = HvpGetCellFlat(BugCheckParameter3, v14, &v29);
      if ( *(_WORD *)(v24 + 2) < 0x3F5u )
        goto LABEL_10;
      goto LABEL_39;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
    v23 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v14 = *v16;
    LODWORD(BugCheckParameter4) = *v16;
    if ( v23 )
      v25 = HvpGetCellPaged(BugCheckParameter3, v14, (unsigned int *)&v29);
    else
      v25 = HvpGetCellFlat(BugCheckParameter3, v14, &v29);
    if ( *(_WORD *)(v25 + 2) < 0x3F5u )
      goto LABEL_10;
    if ( SubKeyInRoot < (unsigned int)*(unsigned __int16 *)(v12 + 2) - 1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v29);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
      v22 = (unsigned int)(SubKeyInRoot + 1);
LABEL_32:
      v16 = (unsigned int *)(v12 + 4 * (v22 + 1));
      goto LABEL_35;
    }
LABEL_39:
    v9 = CmpSplitLeaf(BugCheckParameter3, (__int64)&v28);
    if ( v9 < 0 )
      goto LABEL_11;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v30);
    v26 = (unsigned int)v28;
    *a2 = v28;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v27 = HvpGetCellFlat(BugCheckParameter3, v26, v30);
    else
      v27 = HvpGetCellPaged(BugCheckParameter3, v26, (unsigned int *)v30);
    v12 = v27;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
    SubKeyInRoot = CmpFindSubKeyInRoot(BugCheckParameter3, v12, (__int64)a3, 0LL, (unsigned int *)&BugCheckParameter4);
    if ( SubKeyInRoot < 0 )
      goto LABEL_63;
  }
  v9 = -1073741670;
LABEL_11:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v29);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
LABEL_13:
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v30);
  }
  return (unsigned int)v9;
}
