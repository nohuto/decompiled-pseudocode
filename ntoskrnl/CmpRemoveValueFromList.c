/*
 * XREFs of CmpRemoveValueFromList @ 0x1406BB75C
 * Callers:
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A264CC (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvReallocateCell @ 0x1407A5D90 (HvReallocateCell.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpRemoveValueFromList(ULONG_PTR BugCheckParameter3, unsigned int a2, unsigned int *a3)
{
  __int64 v5; // r14
  ULONG_PTR v6; // rdx
  unsigned int v7; // esi
  __int64 CellFlat; // rax
  _DWORD *v9; // rdx
  ULONG_PTR v10; // rdx
  __int64 result; // rax
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  LODWORD(v13) = 0;
  v5 = a2;
  v6 = a3[1];
  v7 = *a3 - 1;
  if ( *a3 == 1 )
  {
    HvFreeCell(BugCheckParameter3, v6);
    a3[1] = -1;
  }
  else
  {
    v14 = 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v6);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    if ( (unsigned int)v5 < v7 )
    {
      v9 = (_DWORD *)(CellFlat + 4 * v5);
      do
      {
        v5 = (unsigned int)(v5 + 1);
        *v9++ = *(_DWORD *)(CellFlat + 4 * v5);
      }
      while ( (unsigned int)v5 < v7 );
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v14);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v14);
    v10 = a3[1];
    v12 = 0LL;
    HvReallocateCell(BugCheckParameter3, v10, (__int64)&v13, (__int64)&v12, (__int64)&v14);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v14);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v14);
    a3[1] = v13;
  }
  result = 0LL;
  *a3 = v7;
  return result;
}
