/*
 * XREFs of sub_18000BD50 @ 0x18000BD50
 * Callers:
 *     sub_180071164 @ 0x180071164 (sub_180071164.c)
 *     sub_1800FDA6C @ 0x1800FDA6C (sub_1800FDA6C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 *__fastcall sub_18000BD50(__int64 a1)
{
  __int64 *result; // rax
  __int64 v3; // rdx

  result = (__int64 *)operator new(0x10uLL);
  v3 = qword_18021B2D8;
  qword_18021B2D8 = (__int64)result;
  *result = v3;
  result[1] = a1;
  return result;
}
