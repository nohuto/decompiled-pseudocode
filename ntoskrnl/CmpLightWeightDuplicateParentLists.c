/*
 * XREFs of CmpLightWeightDuplicateParentLists @ 0x140A25F50
 * Callers:
 *     CmpLightWeightCreateModificationData @ 0x140A25D48 (CmpLightWeightCreateModificationData.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpDuplicateIndex @ 0x140A20550 (CmpDuplicateIndex.c)
 *     CmpMarkEntireIndexDirty @ 0x140A21868 (CmpMarkEntireIndexDirty.c)
 */

__int64 __fastcall CmpLightWeightDuplicateParentLists(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3)
{
  unsigned int v5; // edi
  __int64 CellFlat; // rax
  int v7; // edi
  int v8; // ebp
  _DWORD *v9; // rsi
  __int64 v10; // r14
  unsigned int v11; // r15d
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v5 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v13);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5, &v13);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v5, (unsigned int *)&v13);
  if ( CellFlat )
  {
    v8 = 0;
    v9 = (_DWORD *)(CellFlat + 20);
    v10 = a3 - CellFlat;
    do
    {
      v11 = v9[2];
      if ( v11 != -1 )
      {
        v7 = CmpMarkEntireIndexDirty(BugCheckParameter3, v11);
        if ( v7 < 0 )
          goto LABEL_13;
        v7 = CmpDuplicateIndex(BugCheckParameter3, v11, v8, (unsigned int *)(a3 + 4 * (v8 + 3LL)));
        if ( v7 < 0 )
          goto LABEL_13;
        *(_DWORD *)((char *)v9 + v10 - 16) = *v9;
      }
      ++v8;
      ++v9;
    }
    while ( v8 < 2 );
    v7 = 0;
LABEL_13:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
