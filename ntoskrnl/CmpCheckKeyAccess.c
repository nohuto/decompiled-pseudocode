/*
 * XREFs of CmpCheckKeyAccess @ 0x140A18390
 * Callers:
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140AF2AFC (CmpDoAccessCheckOnSubtree.c)
 * Callees:
 *     CmpCheckSecurityCellAccess @ 0x14074C9BC (CmpCheckSecurityCellAccess.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpCheckKeyAccess(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 CellFlat; // rax
  unsigned int v5; // edi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0xFFFFFFFFLL;
  if ( !BugCheckParameter3 || (unsigned int)(a2 - 1) > 0xFFFFFFFD )
    return 3221225852LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v6);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v6);
  if ( !CellFlat )
    return 3221225626LL;
  v5 = *(_DWORD *)(CellFlat + 44);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v6);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v6);
  return CmpCheckSecurityCellAccess(BugCheckParameter3, v5);
}
