/*
 * XREFs of CmpValueEnumStackInitialize @ 0x140A22A88
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140614148 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A10EC4 (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpValueEnumStackEntryInitialize @ 0x140614350 (CmpValueEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackInitialize(_DWORD *a1)
{
  __int64 v2; // rdi
  _OWORD *v3; // rbx
  __int64 result; // rax

  memset(a1 + 1, 0, 0x54uLL);
  *a1 = -1;
  v2 = 2LL;
  v3 = a1 + 4;
  do
  {
    result = CmpValueEnumStackEntryInitialize(v3);
    v3 += 2;
    --v2;
  }
  while ( v2 );
  return result;
}
