/*
 * XREFs of sub_18000C1E0 @ 0x18000C1E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C10C @ 0x18000C10C (sub_18000C10C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_18000C1E0(__int64 a1, char a2)
{
  sub_18000C10C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
