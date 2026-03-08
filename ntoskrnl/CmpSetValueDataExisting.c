/*
 * XREFs of CmpSetValueDataExisting @ 0x140796AA4
 * Callers:
 *     CmpSetValueKeyExisting @ 0x1406BAE08 (CmpSetValueKeyExisting.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvReallocateCell @ 0x1407A5D90 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x1407A63A8 (HvAllocateCell.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpSetValueDataExisting(
        ULONG_PTR BugCheckParameter3,
        char *Src,
        unsigned int a3,
        int a4,
        ULONG_PTR BugCheckParameter4)
{
  unsigned __int16 v6; // di
  bool v8; // zf
  char *v9; // r12
  __int64 CellPaged; // rax
  __int64 v11; // r15
  __int64 CellFlat; // rax
  __int64 v13; // r14
  unsigned int v14; // esi
  void *v15; // rax
  size_t v16; // r8
  int Cell; // edi
  ULONG_PTR v19; // rdx
  int v20; // eax
  unsigned __int16 v21; // r12
  unsigned __int16 v22; // di
  ULONG_PTR v23; // rdx
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  char *v29; // [rsp+A8h] [rbp+48h]
  int v30; // [rsp+B8h] [rbp+58h]

  v30 = a4;
  v29 = Src;
  v6 = 0;
  v26 = 0xFFFFFFFFLL;
  v27 = 0xFFFFFFFFLL;
  v8 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v9 = Src;
  v24 = 0xFFFFFFFFLL;
  LODWORD(v28) = 0;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4);
  v11 = CellPaged;
  if ( !CellPaged )
    return 3221225626LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(CellPaged + 4));
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v13 = CellFlat;
  if ( !CellFlat )
    goto LABEL_42;
  v14 = (a3 + 16343) / 0x3FD8;
  if ( (unsigned __int16)v14 > *(_WORD *)(v11 + 2) )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v24);
    v19 = *(unsigned int *)(v11 + 4);
    v25 = 0LL;
    v20 = HvReallocateCell(BugCheckParameter3, v19, (__int64)&v28, (__int64)&v25, (__int64)&v24);
    v13 = v25;
    Cell = v20;
    if ( v20 < 0 )
      goto LABEL_19;
    v21 = *(_WORD *)(v11 + 2);
    *(_DWORD *)(v11 + 4) = v28;
    while ( v21 < (unsigned __int16)v14 )
    {
      Cell = HvAllocateCell(BugCheckParameter3, 16344, v30, (unsigned int)v13 + 4 * v21, 0LL, 0LL);
      if ( Cell < 0 )
        goto LABEL_19;
      ++v21;
    }
    v9 = v29;
    v6 = 0;
  }
  else if ( (unsigned __int16)v14 < *(_WORD *)(v11 + 2) )
  {
    v22 = (a3 + 16343) / 0x3FD8;
    do
      HvFreeCell(BugCheckParameter3, *(unsigned int *)(v13 + 4LL * v22++));
    while ( v22 < *(_WORD *)(v11 + 2) );
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v24);
    v23 = *(unsigned int *)(v11 + 4);
    v6 = 0;
    v25 = 0LL;
    HvReallocateCell(BugCheckParameter3, v23, (__int64)&v28, (__int64)&v25, (__int64)&v24);
    v13 = v25;
    *(_DWORD *)(v11 + 4) = v28;
  }
  if ( (_WORD)v14 )
  {
    while ( 1 )
    {
      v15 = (void *)((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
                   ? HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v13 + 4LL * v6))
                   : HvpGetCellPaged(BugCheckParameter3));
      if ( !v15 )
        break;
      v16 = a3;
      if ( a3 > 0x3FD8 )
        v16 = 16344LL;
      memmove(v15, v9, v16);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v26);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v26);
      a3 -= 16344;
      v9 += 16344;
      if ( ++v6 >= (unsigned __int16)v14 )
        goto LABEL_18;
    }
LABEL_42:
    Cell = -1073741670;
    goto LABEL_19;
  }
LABEL_18:
  *(_WORD *)(v11 + 2) = v14;
  Cell = 0;
LABEL_19:
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v24);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v27);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v27);
  return (unsigned int)Cell;
}
