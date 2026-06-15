/*
 * XREFs of sub_180071DF0 @ 0x180071DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800BDAAC @ 0x1800BDAAC (sub_1800BDAAC.c)
 */

__int64 __fastcall sub_180071DF0(__int64 a1, char a2)
{
  sub_1800BDAAC(a1 + 24);
  sub_18000F708((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148((void *)a1);
  return a1;
}
