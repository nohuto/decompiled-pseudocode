/*
 * XREFs of sub_180057B1C @ 0x180057B1C
 * Callers:
 *     sub_1800667A8 @ 0x1800667A8 (sub_1800667A8.c)
 * Callees:
 *     sub_180056A00 @ 0x180056A00 (sub_180056A00.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006A1BC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180057B1C(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = 1;
  *(_QWORD *)a1 = off_180147978;
  *(_QWORD *)(a1 + 8) = off_1801478E8;
  *(_QWORD *)(a1 + 16) = off_1801478C0;
  *(_QWORD *)(a1 + 24) = off_180147898;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 1065353216;
  *(_DWORD *)(a1 + 76) = 2;
  sub_180056A00(a1 + 80);
  `eh vector constructor iterator'(
    (void *)(a1 + 120),
    8uLL,
    2uLL,
    (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
    (void (*)(void *))sub_18000FFC0);
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  return a1;
}
