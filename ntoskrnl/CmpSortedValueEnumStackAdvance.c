/*
 * XREFs of CmpSortedValueEnumStackAdvance @ 0x140A222F0
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140614148 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x140A22324 (CmpSortedValueEnumStackAdvanceInternal.c)
 */

__int64 __fastcall CmpSortedValueEnumStackAdvance(void *a1)
{
  void *i; // rbx
  __int64 result; // rax

  for ( i = a1; ; a1 = i )
  {
    result = CmpSortedValueEnumStackAdvanceInternal(a1);
    if ( (int)result < 0 )
      break;
    if ( (*(_BYTE *)(*(_QWORD *)i + 16LL) & 2) == 0 )
      return 0LL;
  }
  return result;
}
