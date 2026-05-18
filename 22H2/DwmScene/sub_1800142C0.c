/*
 * XREFs of sub_1800142C0 @ 0x1800142C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009489C @ 0x18009489C (sub_18009489C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800142C0(__int64 a1, char a2)
{
  sub_18009489C();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
