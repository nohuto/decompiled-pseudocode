char __fastcall VidSchiSetNodeResettingStateAtISR(LARGE_INTEGER *a1)
{
  LARGE_INTEGER *QuadPart; // rax
  LONGLONG v2; // rdx

  *(_DWORD *)(a1->QuadPart + 16) = 1;
  QuadPart = (LARGE_INTEGER *)a1->QuadPart;
  a1[2] = *(LARGE_INTEGER *)(a1->QuadPart + 64);
  a1[3] = QuadPart[9];
  v2 = a1->QuadPart;
  a1[4] = *(LARGE_INTEGER *)(a1->QuadPart + 152);
  a1[6].HighPart = *(_DWORD *)(v2 + 1408);
  a1[6].LowPart = *(_DWORD *)(a1->QuadPart + 1412);
  a1[1] = KeQueryPerformanceCounter(0LL);
  return 1;
}
