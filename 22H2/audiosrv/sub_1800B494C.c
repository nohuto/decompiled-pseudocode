/*
 * XREFs of sub_1800B494C @ 0x1800B494C
 * Callers:
 *     sub_1800B49B0 @ 0x1800B49B0 (sub_1800B49B0.c)
 * Callees:
 *     sub_1800B6060 @ 0x1800B6060 (sub_1800B6060.c)
 */

__int64 __fastcall sub_1800B494C(_QWORD *a1)
{
  sub_1800B6060(a1 + 23);
  sub_1800B6060(a1 + 21);
  *a1 = &off_180149EB8;
  return o___std_exception_destroy((__int64)(a1 + 1));
}
