/*
 * XREFs of CmpSyncSubKeysAfterDelete @ 0x140A203EC
 * Callers:
 *     CmpCopySyncTree2 @ 0x140A1E7F8 (CmpCopySyncTree2.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByNumber @ 0x1407AD320 (CmpFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407FE740 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpInitializeKeyNameString @ 0x140A1F2A4 (CmpInitializeKeyNameString.c)
 *     CmpDeleteTree @ 0x140A22F10 (CmpDeleteTree.c)
 */

bool __fastcall CmpSyncSubKeysAfterDelete(ULONG_PTR a1, __int64 a2, ULONG_PTR a3, _DWORD *a4, _WORD *a5)
{
  _BYTE *v5; // r15
  unsigned int v6; // r12d
  ULONG_PTR v9; // rsi
  int SubKeyByNumber; // ebx
  ULONG_PTR CellFlat; // rax
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-20h] BYREF
  int BugCheckParameter4_4; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF

  BugCheckParameter4 = 0;
  v5 = (_BYTE *)(a3 + 140);
  v15 = 0xFFFFFFFFLL;
  v6 = 0;
  v16 = 0LL;
  while ( 1 )
  {
    v9 = 0LL;
    SubKeyByNumber = CmpFindSubKeyByNumber(a3, a4, v6, &BugCheckParameter4);
    if ( SubKeyByNumber < 0 )
      break;
    if ( BugCheckParameter4 == -1 )
      return SubKeyByNumber >= 0;
    v5 = (_BYTE *)(a3 + 140);
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(a3, BugCheckParameter4, &v15);
    else
      CellFlat = HvpGetCellPaged(a3, BugCheckParameter4, (unsigned int *)&v15);
    v9 = CellFlat;
    if ( !CellFlat )
    {
      SubKeyByNumber = -1073741670;
      return SubKeyByNumber >= 0;
    }
    CmpInitializeKeyNameString(CellFlat, (__int64)&v16, a5);
    BugCheckParameter4_4 = 0;
    CmpFindSubKeyByNameWithStatus(a1, a2, (__int64)&v16, &BugCheckParameter4_4);
    if ( BugCheckParameter4_4 == -1 )
    {
      if ( *(_DWORD *)(v9 + 20) + *(_DWORD *)(v9 + 24) )
        CmpDeleteTree(a3, BugCheckParameter4);
      SubKeyByNumber = CmpFreeKeyByCell(a3, BugCheckParameter4, 1);
      if ( SubKeyByNumber < 0 )
        break;
    }
    else
    {
      ++v6;
    }
    if ( (*v5 & 1) != 0 )
      HvpReleaseCellFlat(a3, &v15);
    else
      HvpReleaseCellPaged(a3, (unsigned int *)&v15);
  }
  if ( v9 )
  {
    if ( (*v5 & 1) != 0 )
      HvpReleaseCellFlat(a3, &v15);
    else
      HvpReleaseCellPaged(a3, (unsigned int *)&v15);
  }
  return SubKeyByNumber >= 0;
}
