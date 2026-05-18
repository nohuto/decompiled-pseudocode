/*
 * XREFs of sub_1800E4880 @ 0x1800E4880
 * Callers:
 *     sub_1800E48B0 @ 0x1800E48B0 (sub_1800E48B0.c)
 * Callees:
 *     sub_1800E47BC @ 0x1800E47BC (sub_1800E47BC.c)
 */

__int64 __fastcall sub_1800E4880(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  sub_1800E47BC((__int64)(a1 + 14), a2);
  return sub_1800A36E4(a1);
}
