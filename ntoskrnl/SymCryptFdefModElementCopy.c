/*
 * XREFs of SymCryptFdefModElementCopy @ 0x1403FE608
 * Callers:
 *     SymCryptModElementCopy @ 0x1403F3AD4 (SymCryptModElementCopy.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void *__fastcall SymCryptFdefModElementCopy(__int64 a1, const void *a2, void *a3)
{
  void *result; // rax

  result = a3;
  if ( a2 != a3 )
    return memmove(a3, a2, *(unsigned int *)(a1 + 16));
  return result;
}
