__int64 HalpTimerSchedulePeriodicQueries()
{
  ULONG_PTR v0; // rbx
  ULONG_PTR v1; // rdi
  __int64 v2; // r11
  ULONGLONG v3; // r10
  ULONGLONG v4; // rax
  ULONGLONG pullResult; // [rsp+40h] [rbp+8h] BYREF

  pullResult = 0LL;
  v0 = HalpAlwaysOnCounter;
  v1 = HalpPerformanceCounter;
  if ( HalpAlwaysOnCounter )
    v0 = -(__int64)(*(_DWORD *)(HalpAlwaysOnCounter + 220) < 0x40u) & HalpAlwaysOnCounter;
  KeQueryPerformanceCounter(0LL);
  HalpTimerLastDpc = MEMORY[0xFFFFF78000000014];
  if ( RtlULongLongMult(1LL << *(_DWORD *)(v1 + 220), 0xFAuLL, &pullResult) < 0 )
    v3 = 120000LL;
  else
    v3 = pullResult / *(_QWORD *)(v1 + 192);
  pullResult = v3;
  v4 = v3;
  if ( v0 )
  {
    if ( RtlULongLongMult(v2 << *(_DWORD *)(v0 + 220), 0xFAuLL, &pullResult) < 0 )
      v4 = 120000LL;
    else
      v4 = pullResult / *(_QWORD *)(v0 + 192);
  }
  if ( v4 < v3 )
    v3 = v4;
  if ( v3 - 1 > 0x1D4BF )
    LODWORD(v3) = 120000;
  return KiSetTimerEx((__int64)&HalpTimerPeriodicTimer, -10000LL * (int)v3, v3, 0, (__int64)&HalpTimerDpc);
}
