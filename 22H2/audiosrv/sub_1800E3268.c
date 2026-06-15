/*
 * XREFs of sub_1800E3268 @ 0x1800E3268
 * Callers:
 *     sub_1800E31E8 @ 0x1800E31E8 (sub_1800E31E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E3268(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &off_180148300;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 96), 0, 0);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 152), 0, 0);
  result = a1;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  return result;
}
