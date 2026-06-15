/*
 * XREFs of sub_1800E15C0 @ 0x1800E15C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     ??1_Locimp@locale@std@@MEAA@XZ @ 0x180104CE8 (--1_Locimp@locale@std@@MEAA@XZ.c)
 */

std::locale::_Locimp *__fastcall sub_1800E15C0(std::locale::_Locimp *a1, char a2)
{
  std::locale::_Locimp::~_Locimp(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
