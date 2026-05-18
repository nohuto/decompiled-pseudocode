/*
 * XREFs of sub_18002C350 @ 0x18002C350
 * Callers:
 *     sub_18002169C @ 0x18002169C (sub_18002169C.c)
 * Callees:
 *     sub_180062B88 @ 0x180062B88 (sub_180062B88.c)
 */

_QWORD *__fastcall sub_18002C350(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180062B88();
  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  result = a1;
  a1[16] = 0LL;
  return result;
}
