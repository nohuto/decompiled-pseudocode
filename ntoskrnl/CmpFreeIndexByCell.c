/*
 * XREFs of CmpFreeIndexByCell @ 0x140A207B4
 * Callers:
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A25254 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

signed __int32 __fastcall CmpFreeIndexByCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebp
  _WORD *CellFlat; // rax
  _WORD *v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v2 = BugCheckParameter3;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3, &v8);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter2, BugCheckParameter3, (unsigned int *)&v8);
  v5 = CellFlat;
  if ( *CellFlat == 26994 )
  {
    v6 = 0LL;
    if ( CellFlat[1] )
    {
      do
      {
        HvFreeCell(BugCheckParameter2, *(unsigned int *)&v5[2 * v6 + 2]);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < (unsigned __int16)v5[1] );
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v8);
  return HvFreeCell(BugCheckParameter2, v2);
}
