/*
 * XREFs of sub_1800E67E8 @ 0x1800E67E8
 * Callers:
 *     sub_180070DD0 @ 0x180070DD0 (sub_180070DD0.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800A30C8 @ 0x1800A30C8 (sub_1800A30C8.c)
 */

_QWORD *__fastcall sub_1800E67E8(_QWORD *a1)
{
  __int64 v3[6]; // [rsp+28h] [rbp-30h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_18001CDF8(v3, (__int64)aFont);
  sub_1800A30C8((__int64)a1, v3);
  *a1 = &Spectre::Engine::FontShaderExtension::`vftable';
  return a1;
}
