/*
 * XREFs of sub_1801173CC @ 0x1801173CC
 * Callers:
 *     sub_18011A6B4 @ 0x18011A6B4 (sub_18011A6B4.c)
 * Callees:
 *     sub_180084B50 @ 0x180084B50 (sub_180084B50.c)
 *     sub_18011A644 @ 0x18011A644 (sub_18011A644.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1801173CC(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[1] = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = operator new(0xB0uLL);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 8) = v4;
  v7[0] = v4;
  v5 = (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_180084B50((_QWORD *)(a1 + 24), v5, v7);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  sub_18011A644(a1, **(_QWORD **)(a2 + 8), *(_QWORD *)(a2 + 8));
  return a1;
}
