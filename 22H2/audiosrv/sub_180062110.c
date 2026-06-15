/*
 * XREFs of sub_180062110 @ 0x180062110
 * Callers:
 *     sub_180061CC0 @ 0x180061CC0 (sub_180061CC0.c)
 * Callees:
 *     sub_180053428 @ 0x180053428 (sub_180053428.c)
 */

__int64 __fastcall sub_180062110(__int64 a1)
{
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  *(_QWORD *)a1 = &off_180148DB0;
  *(_QWORD *)(a1 + 72) = &off_180148D70;
  *(_QWORD *)(a1 + 80) = off_180148D60;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 112), 0, 0);
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_DWORD *)(a1 + 192) = 10;
  sub_180053428(a1 + 208);
  sub_180053428(a1 + 376);
  return a1;
}
