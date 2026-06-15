/*
 * XREFs of sub_180122350 @ 0x180122350
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_DWORD *__fastcall sub_180122350(_DWORD *a1, char a2)
{
  a1[9] = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
