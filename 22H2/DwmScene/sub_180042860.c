/*
 * XREFs of sub_180042860 @ 0x180042860
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C8ABC @ 0x1800C8ABC (sub_1800C8ABC.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180042860(__int64 a1, char a2)
{
  sub_1800C8ABC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
