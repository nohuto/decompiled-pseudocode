/*
 * XREFs of CmpMarkAllChildrenDirty @ 0x140A2179C
 * Callers:
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A266F0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByNumber @ 0x1407AD320 (CmpFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpMarkAllChildrenDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 CellFlat; // rax
  _DWORD *v5; // r14
  unsigned int v6; // esi
  unsigned int v7; // ebp
  int SubKeyByNumber; // edi
  ULONG_PTR BugCheckParameter4a; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(BugCheckParameter4a) = 0;
  v11 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v11);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3, &v11);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v3, (unsigned int *)&v11);
  v5 = (_DWORD *)CellFlat;
  v6 = 0;
  v7 = *(_DWORD *)(CellFlat + 20) + *(_DWORD *)(CellFlat + 24);
  if ( v7 )
  {
    while ( 1 )
    {
      SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3, v5, v6, &BugCheckParameter4a);
      if ( SubKeyByNumber < 0 )
        break;
      SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, (unsigned int)BugCheckParameter4a, 0);
      if ( SubKeyByNumber < 0 )
        break;
      if ( ++v6 >= v7 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    SubKeyByNumber = 0;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v11);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v11);
  return (unsigned int)SubKeyByNumber;
}
