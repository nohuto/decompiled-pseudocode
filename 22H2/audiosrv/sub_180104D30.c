/*
 * XREFs of sub_180104D30 @ 0x180104D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     ??1_Locimp@locale@std@@MEAA@XZ @ 0x180104CE8 (--1_Locimp@locale@std@@MEAA@XZ.c)
 */

std::locale::_Locimp *__fastcall sub_180104D30(std::locale::_Locimp *a1, char a2)
{
  std::locale::_Locimp::~_Locimp(a1);
  if ( (a2 & 1) != 0 )
    sub_180033A70(a1);
  return a1;
}
