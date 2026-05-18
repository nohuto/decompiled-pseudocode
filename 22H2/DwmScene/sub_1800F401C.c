/*
 * XREFs of sub_1800F401C @ 0x1800F401C
 * Callers:
 *     sub_1800B0F30 @ 0x1800B0F30 (sub_1800B0F30.c)
 * Callees:
 *     sub_18009B0C8 @ 0x18009B0C8 (sub_18009B0C8.c)
 */

_QWORD *__fastcall sub_1800F401C(_QWORD *a1)
{
  sub_18009B0C8(a1);
  *a1 = &Spectre::Engine::SamplerGeneric::`vftable';
  return a1;
}
