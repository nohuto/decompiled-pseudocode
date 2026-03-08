/*
 * XREFs of HvpFindFreeCellInBin @ 0x1407A6930
 * Callers:
 *     HvpFindFreeCell @ 0x1407A6710 (HvpFindFreeCell.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall HvpFindFreeCellInBin(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        unsigned int *a5,
        __int64 *a6)
{
  unsigned int *v6; // r10
  unsigned __int64 v7; // r11
  unsigned int v9; // eax
  __int64 result; // rax
  unsigned int v11; // ebx
  __int64 CellFlat; // rax

  v6 = a4 + 8;
  v7 = (unsigned __int64)a4 + (unsigned int)a4[2];
  if ( (unsigned __int64)(a4 + 8) >= v7 )
    return 3221226021LL;
  while ( 1 )
  {
    v9 = *v6;
    if ( (*v6 & 0x80000000) == 0 )
      break;
    v9 = -v9;
LABEL_4:
    v6 = (unsigned int *)((char *)v6 + v9);
    if ( (unsigned __int64)v6 >= v7 )
      return 3221226021LL;
  }
  v11 = a4[1] + (_DWORD)v6 + (a3 << 31) - (_DWORD)a4;
  if ( a2 > v9 )
    goto LABEL_4;
  result = HvpMarkCellDirty(BugCheckParameter3, v11);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v11);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    if ( CellFlat )
      CellFlat -= 4LL;
    *a6 = CellFlat;
    result = 0LL;
    *a5 = v11;
  }
  return result;
}
