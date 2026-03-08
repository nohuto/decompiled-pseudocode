/*
 * XREFs of CmpMarkKeyParentDirty @ 0x140A1F320
 * Callers:
 *     CmpCopySyncTree2 @ 0x140A1E7F8 (CmpCopySyncTree2.c)
 * Callees:
 *     CmpMarkIndexDirty @ 0x1406BA4F0 (CmpMarkIndexDirty.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpMarkKeyParentDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  unsigned int v2; // edi
  __int64 CellFlat; // rax
  int v5; // edi
  unsigned int v6; // ebp
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v2 = a2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v8);
  if ( (*(_BYTE *)(CellFlat + 2) & 4) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v6 = *(_DWORD *)(CellFlat + 16);
    v5 = CmpMarkIndexDirty(BugCheckParameter3, v6, v2);
    if ( v5 >= 0 )
    {
      v5 = HvpMarkCellDirty(BugCheckParameter3, v6, 0);
      if ( v5 >= 0 )
        v5 = 0;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v8);
  return (unsigned int)v5;
}
