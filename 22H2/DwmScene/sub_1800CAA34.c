/*
 * XREFs of sub_1800CAA34 @ 0x1800CAA34
 * Callers:
 *     sub_180039040 @ 0x180039040 (sub_180039040.c)
 *     sub_1800F3DAC @ 0x1800F3DAC (sub_1800F3DAC.c)
 * Callees:
 *     sub_18006215C @ 0x18006215C (sub_18006215C.c)
 */

_QWORD *__fastcall sub_1800CAA34(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18006215C(a1, 7LL, 3LL);
  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
