char __fastcall KiLogClockIncrementUpdate(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v6; // rbx
  char result; // al

  v6 = 32LL * *(unsigned int *)(a1 + 36496);
  *(_DWORD *)(a1 + 36496) = ((unsigned __int8)*(_DWORD *)(a1 + 36496) + 1) & 0xF;
  *(_DWORD *)(v6 + a1 + 37144) = a4;
  *(_DWORD *)(v6 + a1 + 37148) = a3;
  *(_QWORD *)(v6 + a1 + 37152) = a2;
  *(LARGE_INTEGER *)(v6 + a1 + 37160) = KeQueryPerformanceCounter(0LL);
  result = a5;
  *(_BYTE *)(v6 + a1 + 37168) = a5;
  return result;
}
