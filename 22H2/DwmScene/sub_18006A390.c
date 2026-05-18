/*
 * XREFs of sub_18006A390 @ 0x18006A390
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069F90 @ 0x180069F90 (sub_180069F90.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_18006A390(__int64 a1, char a2)
{
  sub_180069F90(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
