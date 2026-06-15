/*
 * XREFs of sub_18010E230 @ 0x18010E230
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010CE74 @ 0x18010CE74 (sub_18010CE74.c)
 */

__int64 __fastcall sub_18010E230(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5, unsigned int a6)
{
  if ( a6 >= 0x90 && a6 >= (unsigned __int64)(*a5 * a5[18]) + 144 )
    sub_18010CE74(a4, a5);
  return 0LL;
}
