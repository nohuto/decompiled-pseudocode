/*
 * XREFs of sub_1800D10D0 @ 0x1800D10D0
 * Callers:
 *     sub_180064E90 @ 0x180064E90 (sub_180064E90.c)
 * Callees:
 *     sub_1800D0E34 @ 0x1800D0E34 (sub_1800D0E34.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800D10D0(_QWORD *a1)
{
  _QWORD *v2; // rcx

  *a1 = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  v2 = a1 + 1;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  a1[4] = 0LL;
  sub_1800D0E34(v2, 0xF0uLL);
  return a1;
}
