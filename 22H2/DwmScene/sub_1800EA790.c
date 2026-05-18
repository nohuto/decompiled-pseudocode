/*
 * XREFs of sub_1800EA790 @ 0x1800EA790
 * Callers:
 *     sub_180071074 @ 0x180071074 (sub_180071074.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800A30C8 @ 0x1800A30C8 (sub_1800A30C8.c)
 */

__int64 __fastcall sub_1800EA790(__int64 a1)
{
  __int64 result; // rax
  __int64 v3[6]; // [rsp+28h] [rbp-30h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_18001CDF8(v3, (__int64)&qword_18020D418);
  sub_1800A30C8(a1, v3);
  *(_DWORD *)(a1 + 112) = 16;
  *(_QWORD *)a1 = &Spectre::Engine::SymbolShaderExtension::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 116) = 32;
  return result;
}
