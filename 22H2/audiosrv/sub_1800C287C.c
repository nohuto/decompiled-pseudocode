/*
 * XREFs of sub_1800C287C @ 0x1800C287C
 * Callers:
 *     sub_18006034C @ 0x18006034C (sub_18006034C.c)
 * Callees:
 *     sub_180060AE0 @ 0x180060AE0 (sub_180060AE0.c)
 */

__int64 __fastcall sub_1800C287C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_180060AE0(a1, a2);
  *(_QWORD *)a1 = &off_180154E48;
  *(_QWORD *)(a1 + 248) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 256), 0, 0);
  *(_QWORD *)(a1 + 304) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 296) = 1;
  *(_BYTE *)(a1 + 300) = 0;
  return result;
}
