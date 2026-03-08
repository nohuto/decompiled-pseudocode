/*
 * XREFs of InsertChar @ 0x1405AD808
 * Callers:
 *     punycode_decode @ 0x1409BC720 (punycode_decode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InsertChar(unsigned __int16 a1, unsigned __int16 *a2, unsigned __int16 **a3)
{
  unsigned __int16 *i; // r9
  __int64 result; // rax

  for ( i = *a3; --i >= a2; i[1] = result )
    result = *i;
  *a2 = a1;
  ++*a3;
  return result;
}
