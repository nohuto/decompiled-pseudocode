/*
 * XREFs of sub_1800564F8 @ 0x1800564F8
 * Callers:
 *     sub_180067AA4 @ 0x180067AA4 (sub_180067AA4.c)
 * Callees:
 *     sub_180056A00 @ 0x180056A00 (sub_180056A00.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800564F8(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)a1 = off_180147858;
  *(_QWORD *)(a1 + 8) = off_180147810;
  *(_QWORD *)(a1 + 16) = off_1801477E8;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  sub_180056A00(a1 + 80);
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 10;
  sub_180056A00(a1 + 168);
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  return a1;
}
