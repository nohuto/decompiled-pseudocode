/*
 * XREFs of sub_180015380 @ 0x180015380
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800152FC @ 0x1800152FC (sub_1800152FC.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180015380(__int64 a1, char a2)
{
  sub_1800152FC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
