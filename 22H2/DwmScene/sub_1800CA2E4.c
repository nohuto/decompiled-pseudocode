/*
 * XREFs of sub_1800CA2E4 @ 0x1800CA2E4
 * Callers:
 *     sub_1800217E0 @ 0x1800217E0 (sub_1800217E0.c)
 *     sub_1800B1030 @ 0x1800B1030 (sub_1800B1030.c)
 * Callees:
 *     sub_1800C98A8 @ 0x1800C98A8 (sub_1800C98A8.c)
 */

_QWORD *__fastcall sub_1800CA2E4(_QWORD *a1)
{
  sub_1800C98A8(a1, 11LL, 5LL);
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return a1;
}
