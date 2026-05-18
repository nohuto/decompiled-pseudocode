/*
 * XREFs of sub_1800F3B7C @ 0x1800F3B7C
 * Callers:
 *     sub_1800B0EC4 @ 0x1800B0EC4 (sub_1800B0EC4.c)
 * Callees:
 *     sub_180062180 @ 0x180062180 (sub_180062180.c)
 */

_QWORD *__fastcall sub_1800F3B7C(_QWORD *a1)
{
  sub_180062180((__int64)a1);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::RenderStateGeneric::`vftable';
  return a1;
}
