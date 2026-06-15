/*
 * XREFs of sub_1800E3438 @ 0x1800E3438
 * Callers:
 *     sub_18002F090 @ 0x18002F090 (sub_18002F090.c)
 * Callees:
 *     sub_180033D50 @ 0x180033D50 (sub_180033D50.c)
 */

__int64 __fastcall sub_1800E3438(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_180033D50(result);
  }
  return result;
}
