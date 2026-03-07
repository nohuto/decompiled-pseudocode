__int64 __fastcall DxgkDdiQueryMitigatedRangeCount(_QWORD *a1, int a2, unsigned int *a3)
{
  unsigned int *v5; // rsi
  unsigned __int64 i; // rdi
  unsigned int v8; // [rsp+28h] [rbp-30h]

  ADAPTER_RENDER::QueryMitigatedRangeCount(a1[366], a2, a3);
  if ( bTracingEnabled )
  {
    v5 = a3 + 1;
    v8 = *a3;
    VgpuTrace(1, 0, a1, L"DxgkDdiQueryMitigatedRangeCount", (wchar_t *)L"%d %d", v8, a3 + 1);
    for ( i = 0LL; i < 6; ++i )
      DxgkLogInternalTriageEvent(
        (__int64)a1,
        196614,
        *a3,
        (__int64)L"BAR %1 requests to have %2 mitigated ranges",
        i,
        *v5++,
        0LL,
        0LL,
        0LL);
  }
  return 0LL;
}
