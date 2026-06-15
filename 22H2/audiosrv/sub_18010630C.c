/*
 * XREFs of sub_18010630C @ 0x18010630C
 * Callers:
 *     sub_180108AAC @ 0x180108AAC (sub_180108AAC.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_180107110 @ 0x180107110 (sub_180107110.c)
 */

__int64 __fastcall sub_18010630C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // esi

  v5 = a3;
  if ( !*(_QWORD *)a1 )
  {
    LOBYTE(a3) = 1;
    if ( !(unsigned __int8)sub_180107110(a1, *(unsigned int *)(a1 + 16), a3) )
      sub_1800B8610(-2147024882);
  }
  return sub_180107670(a1, a2, v5, a4);
}
