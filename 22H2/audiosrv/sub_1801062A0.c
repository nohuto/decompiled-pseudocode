/*
 * XREFs of sub_1801062A0 @ 0x1801062A0
 * Callers:
 *     sub_1801089FC @ 0x1801089FC (sub_1801089FC.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_180107110 @ 0x180107110 (sub_180107110.c)
 */

__int64 __fastcall sub_1801062A0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // esi

  v5 = a3;
  if ( !*(_QWORD *)a1 )
  {
    LOBYTE(a3) = 1;
    if ( !(unsigned __int8)sub_180107110(a1, *(unsigned int *)(a1 + 16), a3) )
      sub_1800B8610(-2147024882);
  }
  return sub_180107514(a1, a2, v5, a4);
}
