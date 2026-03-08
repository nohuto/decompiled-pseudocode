/*
 * XREFs of CmpFreeValueData @ 0x1406BAAE0
 * Callers:
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpFreeValue @ 0x1406BAA4C (CmpFreeValue.c)
 *     CmpSetValueKeyExisting @ 0x1406BAE08 (CmpSetValueKeyExisting.c)
 *     CmpCopyValue @ 0x1408A6FF4 (CmpCopyValue.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

char __fastcall CmpFreeValueData(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  unsigned int v4; // r14d
  bool v6; // zf
  __int64 CellPaged; // rax
  unsigned __int16 v8; // di
  __int64 v9; // rsi
  ULONG_PTR v10; // rdx
  __int64 CellFlat; // rax
  __int64 v12; // r15
  ULONG_PTR v13; // rdx
  _DWORD v14[4]; // [rsp+20h] [rbp-10h] BYREF
  int v15; // [rsp+78h] [rbp+48h] BYREF
  int v16; // [rsp+7Ch] [rbp+4Ch]

  v4 = a2;
  if ( a3 >= 0x80000000 || (_DWORD)a2 == -1 )
    return 1;
  if ( *(_DWORD *)(BugCheckParameter3 + 220) < 4u || a3 - 16345 > 0x7FFFC026 )
  {
LABEL_6:
    HvFreeCell(BugCheckParameter3, v4);
    return 1;
  }
  v15 = -1;
  v6 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v16 = 0;
  v14[0] = -1;
  v14[1] = 0;
  if ( v6 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2);
  v8 = 0;
  v9 = CellPaged;
  if ( CellPaged )
  {
    v10 = *(unsigned int *)(CellPaged + 4);
    if ( (_DWORD)v10 != -1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v10);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3);
      v12 = CellFlat;
      if ( !CellFlat )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v15);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v15);
        return 0;
      }
      while ( v8 < *(_WORD *)(v9 + 2) )
      {
        v13 = *(unsigned int *)(v12 + 4LL * v8);
        if ( (_DWORD)v13 != -1 )
          HvFreeCell(BugCheckParameter3, v13);
        ++v8;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v14);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v14);
      HvFreeCell(BugCheckParameter3, *(unsigned int *)(v9 + 4));
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v15);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v15);
    goto LABEL_6;
  }
  return 0;
}
