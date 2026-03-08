/*
 * XREFs of CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x140A1D8C8
 * Callers:
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140A1DBC4 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 * Callees:
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorBeginForKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx
  __int64 i; // rbp
  __int64 EntryAtLayerHeight; // rsi
  __int16 v7; // dx
  __int64 v8; // rax
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rcx
  unsigned int *v11; // r8
  __int64 CellFlat; // rax
  __int64 result; // rax

  v2 = *a2;
  for ( i = a1 + 16; v2 >= 0; --v2 )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(i, v2);
    v8 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v7);
    v9 = *(unsigned int *)(v8 + 8);
    if ( (_DWORD)v9 != -1 )
    {
      v10 = *(_QWORD *)v8;
      v11 = (unsigned int *)(EntryAtLayerHeight + 24);
      *(_QWORD *)EntryAtLayerHeight = *(_QWORD *)v8;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v9;
      if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v10, v9, v11);
      else
        CellFlat = HvpGetCellPaged(v10, v9, v11);
      *(_QWORD *)(EntryAtLayerHeight + 16) = CellFlat;
    }
  }
  result = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(result + 16) = i;
  *(_QWORD *)(result + 8) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
