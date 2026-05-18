/*
 * XREFs of sub_1800420BC @ 0x1800420BC
 * Callers:
 *     sub_1800210F4 @ 0x1800210F4 (sub_1800210F4.c)
 * Callees:
 *     sub_1800C8860 @ 0x1800C8860 (sub_1800C8860.c)
 */

_QWORD *__fastcall sub_1800420BC(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800C8860(a1);
  *a1 = &Spectre::Engine::D3D11::GeometryShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
