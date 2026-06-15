/*
 * XREFs of sub_1800608A0 @ 0x1800608A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800608DC @ 0x1800608DC (sub_1800608DC.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall sub_1800608A0(__int64 a1, char a2)
{
  sub_1800608DC();
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 48LL);
  return a1;
}
