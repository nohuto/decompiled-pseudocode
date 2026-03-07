__int64 __fastcall DxgkDdiQueryMitigatedRanges(_QWORD *a1, int a2, __int64 a3)
{
  __int64 MitigatedRanges; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  unsigned int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h]

  MitigatedRanges = (int)ADAPTER_RENDER::QueryMitigatedRanges(a1[366], a2, (unsigned int *)a3);
  if ( bTracingEnabled )
  {
    v10 = *(_DWORD *)(a3 + 4);
    v9 = *(_DWORD *)a3;
    VgpuTrace(1, MitigatedRanges, a1, L"DxgkDdiQueryMitigatedRanges", (wchar_t *)L"%d %d", v9, v10);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196615,
      *(_DWORD *)a3,
      (__int64)L"Queried %1 ranges to mitigate on BAR %2, returning %3",
      *(unsigned int *)(a3 + 8),
      *(unsigned int *)(a3 + 4),
      MitigatedRanges,
      0LL,
      0LL);
    v6 = 0LL;
    if ( *(_DWORD *)(a3 + 8) )
    {
      v7 = 0LL;
      do
      {
        DxgkLogInternalTriageEvent(
          (__int64)a1,
          196615,
          *(_DWORD *)a3,
          (__int64)L"Mitigating range starting at base page %1 and extending %2 page(s)",
          *(_QWORD *)(*(_QWORD *)(a3 + 16) + v7),
          *(unsigned int *)(*(_QWORD *)(a3 + 16) + v7 + 8),
          0LL,
          0LL,
          0LL);
        v7 += 16LL;
        ++v6;
      }
      while ( v6 < *(unsigned int *)(a3 + 8) );
    }
  }
  return (unsigned int)MitigatedRanges;
}
