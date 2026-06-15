/*
 * XREFs of sub_1800516F0 @ 0x1800516F0
 * Callers:
 *     sub_180036070 @ 0x180036070 (sub_180036070.c)
 *     sub_180036CE0 @ 0x180036CE0 (sub_180036CE0.c)
 *     sub_180051570 @ 0x180051570 (sub_180051570.c)
 *     sub_1800E5560 @ 0x1800E5560 (sub_1800E5560.c)
 *     sub_1800EC7A0 @ 0x1800EC7A0 (sub_1800EC7A0.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

__int64 __fastcall sub_1800516F0(__int64 a1, char a2)
{
  *(_QWORD *)a1 = &off_180148570;
  *(_DWORD *)(a1 + 16) = -1073741823;
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 32LL);
  return a1;
}
