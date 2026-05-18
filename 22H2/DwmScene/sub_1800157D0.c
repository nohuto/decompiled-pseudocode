/*
 * XREFs of sub_1800157D0 @ 0x1800157D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014BC8 @ 0x180014BC8 (sub_180014BC8.c)
 */

__int64 __fastcall sub_1800157D0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  if ( *a2 == 0x4BD1CD637052B94FLL )
  {
    result = a2[1];
    if ( result == 0xDB6D126B7184B2B7uLL )
      return sub_180014BC8(a1 + 16);
  }
  return result;
}
