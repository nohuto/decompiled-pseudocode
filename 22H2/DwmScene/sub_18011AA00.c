/*
 * XREFs of sub_18011AA00 @ 0x18011AA00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011A90C @ 0x18011A90C (sub_18011A90C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_18011AA00(__int64 a1, char a2)
{
  sub_18011A90C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
