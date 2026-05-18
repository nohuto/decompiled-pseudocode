/*
 * XREFs of sub_18009B0C8 @ 0x18009B0C8
 * Callers:
 *     sub_1800407CC @ 0x1800407CC (sub_1800407CC.c)
 *     sub_1800F401C @ 0x1800F401C (sub_1800F401C.c)
 * Callees:
 *     sub_180038FA8 @ 0x180038FA8 (sub_180038FA8.c)
 *     sub_180062180 @ 0x180062180 (sub_180062180.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18009B0C8(_QWORD *a1)
{
  sub_180062180((__int64)a1);
  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  sub_180038FA8((__int64)(a1 + 12));
  a1[14] = 0LL;
  a1[15] = 0LL;
  return a1;
}
