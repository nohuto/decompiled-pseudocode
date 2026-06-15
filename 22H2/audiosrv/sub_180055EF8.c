/*
 * XREFs of sub_180055EF8 @ 0x180055EF8
 * Callers:
 *     sub_180060AE0 @ 0x180060AE0 (sub_180060AE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180055EF8(__int64 a1)
{
  *(_QWORD *)a1 = &off_180147540;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 32), 0, 0);
  return a1;
}
