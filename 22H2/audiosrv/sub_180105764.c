/*
 * XREFs of sub_180105764 @ 0x180105764
 * Callers:
 *     sub_1801051F8 @ 0x1801051F8 (sub_1801051F8.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_180066D38 @ 0x180066D38 (sub_180066D38.c)
 *     sub_180105694 @ 0x180105694 (sub_180105694.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180105764(__int64 a1)
{
  _QWORD *v2; // rax

  sub_180105694(a1);
  *(_QWORD *)a1 = &off_1801559E0;
  *(_QWORD *)(a1 + 8) = off_1801559C0;
  *(_QWORD *)(a1 + 16) = off_180155910;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 80), 0, 0);
  *(_OWORD *)(a1 + 120) = 0LL;
  *(_OWORD *)(a1 + 136) = xmmword_18015B730;
  *(_DWORD *)(a1 + 152) = 4;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  v2 = sub_180008EAC(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)(a1 + 160) = v2;
  *(_DWORD *)(a1 + 176) = 0;
  sub_180066D38(a1 + 184);
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_WORD *)(a1 + 376) = 0;
  return a1;
}
