/*
 * XREFs of sub_180073800 @ 0x180073800
 * Callers:
 *     <none>
 * Callees:
 *     sub_180047278 @ 0x180047278 (sub_180047278.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall sub_180073800(__int64 a1, char a2)
{
  sub_180047278((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148((void *)a1);
  return a1;
}
