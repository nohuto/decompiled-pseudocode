/*
 * XREFs of CmpValueEnumStackStartFromKeyNodeStack @ 0x140614374
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140614148 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140A22BAC (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpValueEnumStackEntryInitialize @ 0x140614350 (CmpValueEnumStackEntryInitialize.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140A1D040 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140A22670 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  __int64 Pool2; // rax
  __int64 v7; // rsi
  __int16 v8; // di
  __int64 EntryAtLayerHeight; // r15
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // rdx
  __int64 CellFlat; // rax

  v2 = 0;
  if ( *a2 >= 2 )
  {
    LOWORD(v5) = *a2 - 1;
    Pool2 = ExAllocatePool2(256LL, 32LL * (__int16)v5, 808930627LL);
    *(_QWORD *)(a1 + 80) = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v7 = 0LL;
    v5 = (unsigned __int16)v5;
    do
    {
      CmpValueEnumStackEntryInitialize((_OWORD *)(v7 + *(_QWORD *)(a1 + 80)));
      v7 += 32LL;
      --v5;
    }
    while ( v5 );
  }
  v8 = *a2;
  for ( *(_WORD *)(a1 + 12) = *a2; v8 >= 0; --v8 )
  {
    EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v8);
    v11 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a2, v10);
    v12 = v11;
    if ( v11[2] )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v11) == 1 )
        break;
      if ( (*(_BYTE *)(v13 + 2) & 0x40) == 0 && *(_DWORD *)(v13 + 36) )
      {
        *(_QWORD *)EntryAtLayerHeight = v14;
        *(_DWORD *)(EntryAtLayerHeight + 24) = *(_DWORD *)(v13 + 36);
        v15 = *(unsigned int *)(v13 + 40);
        if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v14, v15);
        else
          CellFlat = HvpGetCellPaged(v14);
        *(_QWORD *)(EntryAtLayerHeight + 8) = CellFlat;
      }
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v12) )
        break;
    }
  }
  return v2;
}
