signed __int64 __fastcall TraceLoggingPTPAAPKeyPress(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  LARGE_INTEGER v6; // r15
  __int64 v7; // rsi
  signed __int64 result; // rax
  LONGLONG v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rbx
  signed __int64 v12; // r12
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1;
  v2 = SGDGetUserSessionState(a1);
  v4 = SGDGetUserSessionState(v3);
  PerformanceFrequency.QuadPart = 0LL;
  v5 = v4 + 11968;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 16480), 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8), 0LL, 0LL);
  if ( v1 && v7 > 0 && result > v7 )
  {
    v9 = v6.QuadPart - _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 32), 0LL, 0LL);
    v10 = 1000 * (result - v7) / PerformanceFrequency.QuadPart;
    v11 = 1000 * v9 / PerformanceFrequency.QuadPart;
    if ( !*(_QWORD *)(v5 + 24) )
      *(_DWORD *)(v5 + 44) = *(_DWORD *)(v5 + 40);
    result = 500LL;
    if ( v10 < 500 || v11 < 500 )
    {
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 0LL);
      TraceLoggingPTPKeyToGestureTiming(
        *(_QWORD *)(v2 + 16472),
        v7,
        (const struct tagTPTELEMTIMINGS *)v5,
        v6.QuadPart,
        PerformanceFrequency.QuadPart);
      if ( v10 < 500 && *(_DWORD *)(v5 + 40) || v11 < 500 && *(_DWORD *)(v5 + 44) )
        TraceLoggingPTPKeyToAATimeDeltas(
          1000 * (v12 - v7) / PerformanceFrequency.QuadPart,
          v10,
          v11,
          1000 * (v6.QuadPart - v7) / PerformanceFrequency.QuadPart,
          *(_DWORD *)(v5 + 40),
          *(_DWORD *)(v5 + 44));
      result = (signed __int64)memset_0((void *)v5, 0, 0x54uLL);
      *(_DWORD *)(v5 + 80) = -1;
    }
  }
  return result;
}
