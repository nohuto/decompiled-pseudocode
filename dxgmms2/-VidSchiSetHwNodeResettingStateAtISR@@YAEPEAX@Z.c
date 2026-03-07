unsigned __int8 __fastcall VidSchiSetHwNodeResettingStateAtISR(LARGE_INTEGER *a1)
{
  LONGLONG QuadPart; // rdx

  QuadPart = a1->QuadPart;
  a1[2].LowPart = *(_DWORD *)(a1->QuadPart + 1712);
  a1[2].HighPart = *(_DWORD *)(QuadPart + 1720);
  a1[1] = KeQueryPerformanceCounter(0LL);
  return 1;
}
