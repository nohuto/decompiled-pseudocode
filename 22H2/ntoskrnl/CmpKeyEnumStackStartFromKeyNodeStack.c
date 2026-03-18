/*
 * XREFs of CmpKeyEnumStackStartFromKeyNodeStack @ 0x140A2444C
 * Callers:
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140A23664 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140A2439C (CmpKeyEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140A23964 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackStart @ 0x140A242EC (CmpKeyEnumStackStart.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKeyNodeStack(unsigned __int16 *a1, __int16 *a2)
{
  __int64 result; // rax

  result = CmpKeyEnumStackStart((__int64)a1, *a2);
  if ( (int)result >= 0 )
  {
    CmpKeyEnumStackBeginEnumerationForKeyNodeStack(a1, (__int64)a2);
    return 0LL;
  }
  return result;
}
