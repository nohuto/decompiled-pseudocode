/*
 * XREFs of sub_1800621B0 @ 0x1800621B0
 * Callers:
 *     sub_180062180 @ 0x180062180 (sub_180062180.c)
 *     sub_180062250 @ 0x180062250 (sub_180062250.c)
 * Callees:
 *     sub_1800CBBE0 @ 0x1800CBBE0 (sub_1800CBBE0.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800621B0(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = a2;
  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 15LL;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 40) = 3;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 48) = a3;
  *(_DWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 64) = 0LL;
  v6 = sub_1800CBBF8(a1);
  sub_1800CBBE0(v6, a3, 2LL, 0LL);
  _InterlockedExchangeAdd(&dword_180219878[v4], 1u);
  v8 = sub_1800CBBF8(v7);
  sub_1800CBBE0(v8, *(unsigned int *)(a1 + 48), 0LL, 1LL);
  return a1;
}
