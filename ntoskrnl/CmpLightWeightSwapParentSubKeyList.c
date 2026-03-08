/*
 * XREFs of CmpLightWeightSwapParentSubKeyList @ 0x140A27238
 * Callers:
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A25314 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A254B8 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140A25828 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpLightWeightSwapParentSubKeyList(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  __int64 CellFlat; // rax
  int *v6; // r9
  __int64 v7; // rdi
  __int64 v8; // r11
  int v9; // ecx
  int v10; // edx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(a1, a2, &v12);
  else
    CellFlat = HvpGetCellPaged(a1, a2, (unsigned int *)&v12);
  v6 = (int *)(CellFlat + 20);
  v7 = a3 - CellFlat;
  v8 = 2LL;
  do
  {
    v9 = v6[2];
    v10 = *v6;
    v6[2] = *(int *)((char *)v6 + v7 - 8);
    *v6 = *(int *)((char *)v6 + v7 - 16);
    *(int *)((char *)v6 + v7 - 8) = v9;
    *(int *)((char *)v6++ + v7 - 16) = v10;
    --v8;
  }
  while ( v8 );
  if ( !(*(_DWORD *)(CellFlat + 20) + *(_DWORD *)(CellFlat + 24)) )
  {
    *(_WORD *)(CellFlat + 52) = 0;
    *(_DWORD *)(CellFlat + 56) = 0;
  }
  if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(a1, &v12);
  else
    return HvpReleaseCellPaged(a1, (unsigned int *)&v12);
}
