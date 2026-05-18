/*
 * XREFs of sub_1800B1870 @ 0x1800B1870
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F4040 @ 0x1800F4040 (sub_1800F4040.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800B1870(__int64 a1, char a2)
{
  sub_1800F4040();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
