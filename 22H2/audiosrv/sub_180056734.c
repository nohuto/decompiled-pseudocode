/*
 * XREFs of sub_180056734 @ 0x180056734
 * Callers:
 *     sub_180056634 @ 0x180056634 (sub_180056634.c)
 * Callees:
 *     sub_180056A00 @ 0x180056A00 (sub_180056A00.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180056734(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = off_1801472E8;
  *(_QWORD *)(a1 + 8) = off_1801472C0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 10;
  sub_180056A00(a1 + 72);
  return a1;
}
