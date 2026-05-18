/*
 * XREFs of sub_1800C1AF8 @ 0x1800C1AF8
 * Callers:
 *     sub_1800BE6F8 @ 0x1800BE6F8 (sub_1800BE6F8.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 * Callees:
 *     _o_powf @ 0x18011E076 (_o_powf.c)
 */

double __fastcall sub_1800C1AF8(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  o_powf();
  return sub_1800F0038(*a4);
}
