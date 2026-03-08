/*
 * XREFs of CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A226D8
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140614148 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140A1D040 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140A224F4 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140A22670 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpSortedValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx
  __int16 v5; // di
  __int64 Pool; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *EntryAtLayerHeight; // rdi
  __int16 v12; // dx
  __int64 v13; // rdx
  __int64 v14; // rdx
  ULONG_PTR v15; // rcx
  __int64 v16; // r9

  v2 = *a2;
  if ( (__int16)(*a2 + 1) > 2 )
  {
    v5 = v2 - 1;
    Pool = CmpAllocatePool(256LL, 32LL * (__int16)(v2 - 1), 959925571LL);
    *(_QWORD *)(a1 + 80) = Pool;
    if ( !Pool )
      return 3221225626LL;
    if ( v5 > 0 )
    {
      v8 = 0LL;
      v9 = (unsigned __int16)v5;
      do
      {
        v10 = *(_QWORD *)(a1 + 80);
        *(_OWORD *)(v8 + v10) = 0LL;
        *(_OWORD *)(v8 + v10 + 16) = 0LL;
        v8 += 32LL;
        --v9;
      }
      while ( v9 );
    }
  }
  for ( *(_WORD *)(a1 + 8) = v2; v2 >= 0; --v2 )
  {
    EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v2);
    CmpValueEnumStackGetEntryAtLayerHeight(a1, v12);
    v13 = EntryAtLayerHeight[2];
    if ( v13 )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, v13) == 1 )
        return 0LL;
      result = CmpSortedValueEnumStackEntryStart(v16, v15, v14);
      if ( (int)result < 0 )
        return result;
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, EntryAtLayerHeight[2]) )
        return 0LL;
    }
  }
  return 0LL;
}
