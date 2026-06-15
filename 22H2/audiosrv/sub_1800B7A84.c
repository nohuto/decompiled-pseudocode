/*
 * XREFs of sub_1800B7A84 @ 0x1800B7A84
 * Callers:
 *     sub_1800B7B04 @ 0x1800B7B04 (sub_1800B7B04.c)
 *     sub_1800B80C0 @ 0x1800B80C0 (sub_1800B80C0.c)
 * Callees:
 *     sub_1800BAA4C @ 0x1800BAA4C (sub_1800BAA4C.c)
 */

__int64 __fastcall sub_1800B7A84(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = 1;
  *a1 = &off_18014A008;
  result = sub_1800BAA4C(a1, 0LL, a3);
  qword_18019E418 = 0LL;
  byte_18019E4CD = 0;
  return result;
}
