/*
 * XREFs of ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02400B0
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C024082C (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxSBTrackInit @ 0x1C0241B74 (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 */

void __fastcall CalcTrackDragRect(struct tagSBTRACK *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  __int64 v8; // rcx
  int v9; // edx
  int v10; // r9d

  v3 = *(_DWORD *)a1 & 2;
  v4 = v3 != 0 ? 4 : 0;
  v5 = -(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFFCuLL;
  DpiForSystem = GetDpiForSystem((__int64)a1, a2);
  DpiDependentMetric = GetDpiDependentMetric(4 - (unsigned int)(v3 != 0), DpiForSystem);
  v8 = *((_QWORD *)a1 + 12);
  v9 = *(_DWORD *)(v8 + 24);
  v10 = 8 * (*(_DWORD *)(v8 + 28) - v9);
  *(_DWORD *)((char *)a1 + v5 + 36) = v9 - v10;
  *(_DWORD *)((char *)a1 + v4 + 32) = *(_DWORD *)(*((_QWORD *)a1 + 12) + 16LL) - 2 * DpiDependentMetric;
  *(_DWORD *)((char *)a1 + v5 + 44) = v10 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 28LL);
  *(_DWORD *)((char *)a1 + v4 + 40) = 2 * DpiDependentMetric + *(_DWORD *)(*((_QWORD *)a1 + 12) + 20LL);
}
