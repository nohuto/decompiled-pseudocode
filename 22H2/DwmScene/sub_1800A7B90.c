/*
 * XREFs of sub_1800A7B90 @ 0x1800A7B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A7698 @ 0x1800A7698 (sub_1800A7698.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800A7B90(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800A7698(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
