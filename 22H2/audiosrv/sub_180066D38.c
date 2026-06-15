/*
 * XREFs of sub_180066D38 @ 0x180066D38
 * Callers:
 *     sub_180066BC0 @ 0x180066BC0 (sub_180066BC0.c)
 *     sub_180105764 @ 0x180105764 (sub_180105764.c)
 * Callees:
 *     sub_180066DA4 @ 0x180066DA4 (sub_180066DA4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180066D38(__int64 a1)
{
  *(_QWORD *)a1 = off_180149720;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = &off_180149718;
  *(_QWORD *)(a1 + 48) = &xmmword_18015B730;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 8) = off_1801496E8;
  sub_180066DA4(a1 + 72);
  return a1;
}
