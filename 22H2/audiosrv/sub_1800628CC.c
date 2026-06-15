/*
 * XREFs of sub_1800628CC @ 0x1800628CC
 * Callers:
 *     sub_180062950 @ 0x180062950 (sub_180062950.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800628CC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  InitializeCriticalSectionEx((LPCRITICAL_SECTION)a1, 0, 0);
  *(_DWORD *)(a1 + 40) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 48), 0, 0);
  *(_QWORD *)(a1 + 88) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 100) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = a2;
  return result;
}
