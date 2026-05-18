/*
 * XREFs of sub_1800231C0 @ 0x1800231C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180041088 @ 0x180041088 (sub_180041088.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800231C0(__int64 a1, char a2)
{
  sub_180041088();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
