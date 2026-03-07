__int64 __fastcall DxgkDdiGetMmioRanges(_QWORD *a1, int a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  __int64 MmioRanges; // rbp
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]

  v5 = 0LL;
  MmioRanges = (int)ADAPTER_RENDER::GetMmioRanges(a1[366], a2, (unsigned int *)a3);
  if ( bTracingEnabled )
  {
    v11 = *(_DWORD *)(a3 + 4);
    v10 = *(_DWORD *)a3;
    VgpuTrace(1, MmioRanges, a1, L"DxgkDdiGetMmioRanges", (wchar_t *)L"%d %d", v10, v11);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196617,
      *(_DWORD *)a3,
      (__int64)L"Queried %1 MMIO ranges on BAR %2, returning %3",
      *(unsigned int *)(a3 + 8),
      *(unsigned int *)(a3 + 4),
      MmioRanges,
      0LL,
      0LL);
    if ( *(_DWORD *)(a3 + 8) )
    {
      v7 = 0LL;
      do
      {
        v8 = *(_QWORD *)(a3 + 16);
        DxgkLogInternalTriageEvent(
          (__int64)a1,
          196617,
          *(_DWORD *)a3,
          (__int64)L"MMIO range starting at base page %1 (with physical page %2 and resource %3) has intercept flags %4 (r"
                    "ead 0x1, write 0x2) and extending %5 page(s)",
          *(_QWORD *)(v7 + v8),
          *(_QWORD *)(v7 + v8 + 8),
          *(unsigned __int8 *)(v7 + v8 + 16),
          *(unsigned __int8 *)(v7 + v8 + 17) | (unsigned __int64)(*(_BYTE *)(v7 + v8 + 18) != 0 ? 2 : 0),
          *(unsigned int *)(v7 + v8 + 20));
        v7 += 24LL;
        ++v5;
      }
      while ( v5 < *(unsigned int *)(a3 + 8) );
    }
  }
  return (unsigned int)MmioRanges;
}
