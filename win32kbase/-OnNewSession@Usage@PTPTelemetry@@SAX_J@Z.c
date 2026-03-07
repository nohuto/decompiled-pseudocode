void __fastcall PTPTelemetry::Usage::OnNewSession(LARGE_INTEGER a1, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER *v5; // rax
  LARGE_INTEGER *v6; // rdi
  LARGE_INTEGER PerformanceCounter; // rax

  v5 = (LARGE_INTEGER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SGDGetUserSessionState)(
                          (LARGE_INTEGER)a1.QuadPart,
                          a2,
                          a3,
                          a4);
  v6 = v5;
  if ( v5[1496].QuadPart >= a1.QuadPart )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v6[1501].HighPart = 0;
    v6[1499] = PerformanceCounter;
  }
  else
  {
    v5[1496] = KeQueryPerformanceCounter(0LL);
  }
}
