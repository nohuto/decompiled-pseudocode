/*
 * XREFs of CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140A20C04
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x140A1D6E8 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140A216EC (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140A1D040 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyEnumStackEntryBegin @ 0x140A20F7C (CmpKeyEnumStackEntryBegin.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140A213F8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackBeginEnumerationForKeyNodeStack(unsigned __int16 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // bx
  __int64 *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // edi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = *a1;
  if ( (*a1 & 0x8000u) == 0 )
  {
    do
    {
      CmpKeyNodeStackGetEntryAtLayerHeight(a2, v3);
      CmpKeyEnumStackGetEntryAtLayerHeight(a1);
      v7 = v6[2];
      if ( v7 )
      {
        result = CmpGetEffectiveKeyNodeSemantics(*v6, v7);
        v10 = result;
        if ( (_DWORD)result == 1 )
          return result;
        result = CmpKeyEnumStackEntryBegin(v9, v8);
        if ( (v10 & 0xFFFFFFFD) != 0 )
          return result;
        result = v3;
      }
      else
      {
        result = v3;
      }
      v3 = result - 1;
    }
    while ( (__int16)(result - 1) >= 0 );
  }
  return result;
}
