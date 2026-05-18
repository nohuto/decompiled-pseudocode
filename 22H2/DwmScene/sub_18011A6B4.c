/*
 * XREFs of sub_18011A6B4 @ 0x18011A6B4
 * Callers:
 *     sub_180118CE0 @ 0x180118CE0 (sub_180118CE0.c)
 *     sub_18011919C @ 0x18011919C (sub_18011919C.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_1801173CC @ 0x1801173CC (sub_1801173CC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011A6B4(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = (_QWORD *)(a1 + 8);
  v4[2] = 0LL;
  v4[3] = 0LL;
  sub_18001269C(v4, a2 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  sub_1801173CC(a1 + 64, a2 + 64);
  return a1;
}
