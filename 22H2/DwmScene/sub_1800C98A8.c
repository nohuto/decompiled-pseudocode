/*
 * XREFs of sub_1800C98A8 @ 0x1800C98A8
 * Callers:
 *     sub_1800C9E68 @ 0x1800C9E68 (sub_1800C9E68.c)
 *     sub_1800CA2E4 @ 0x1800CA2E4 (sub_1800CA2E4.c)
 * Callees:
 *     sub_18006215C @ 0x18006215C (sub_18006215C.c)
 */

_QWORD *__fastcall sub_1800C98A8(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  sub_18006215C(a1, a2, a3);
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  return result;
}
