/*
 * XREFs of sub_1801021D4 @ 0x1801021D4
 * Callers:
 *     sub_1800CF05C @ 0x1800CF05C (sub_1800CF05C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1801021D4(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return a1;
}
