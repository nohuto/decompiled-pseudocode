/*
 * XREFs of sub_1801021E8 @ 0x1801021E8
 * Callers:
 *     sub_1800CEF80 @ 0x1800CEF80 (sub_1800CEF80.c)
 *     sub_180127F14 @ 0x180127F14 (sub_180127F14.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1801021E8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ShaderDatabase::`vftable';
  *a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return result;
}
