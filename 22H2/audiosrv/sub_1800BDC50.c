/*
 * XREFs of sub_1800BDC50 @ 0x1800BDC50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BDEB0 @ 0x1800BDEB0 (sub_1800BDEB0.c)
 */

__int64 sub_1800BDC50()
{
  __int64 result; // rax

  result = sub_1800BDEB0();
  if ( (int)result < 0 )
    return 0LL;
  return result;
}
