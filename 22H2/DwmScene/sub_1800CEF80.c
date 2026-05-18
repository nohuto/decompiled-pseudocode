/*
 * XREFs of sub_1800CEF80 @ 0x1800CEF80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006CEA4 @ 0x18006CEA4 (sub_18006CEA4.c)
 *     sub_1801021E8 @ 0x1801021E8 (sub_1801021E8.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800CEF80(__int64 a1, char a2)
{
  sub_18006CEA4((__int64 *)(a1 + 16), a1 + 16);
  sub_1801021E8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
