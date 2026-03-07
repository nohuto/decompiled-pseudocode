void __fastcall PTPTelemetry::Usage::OnEndSession(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  LARGE_INTEGER *v9; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rcx

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  v9 = (LARGE_INTEGER *)v5;
  if ( *(__int64 *)(v5 + 11976) > 0 )
  {
    if ( *(_QWORD *)(v5 + 11984) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v9[1498] = PerformanceCounter;
    }
    v9[1500] = PerformanceCounter;
  }
  v11 = 1000 * a1 % gliQpcFreq.QuadPart;
  v12 = 1000 * a1 / gliQpcFreq.QuadPart;
  v14 = SGDGetUserSessionState(v6, v11, v7, v8);
  v17 = v12 - *(_QWORD *)(v14 + 11816);
  if ( v17 > 0xEA60 )
  {
    PTPTelemetry::Usage::HandlePTPTelemetry(v17, v13, v15, v16);
    *(_QWORD *)(v14 + 11816) = v12;
  }
}
