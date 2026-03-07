__int64 __fastcall DXGETWPROFILER_BASE_PopProfilerEntry(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    if ( !*(_DWORD *)(v1 + 52) )
    {
      result = WdLogSingleEntry1(1LL, 189LL);
      if ( bTracingEnabled )
      {
        result = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          result = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                     v6,
                     v5,
                     v7,
                     0,
                     2,
                     -1,
                     (__int64)L"m_ProfilerEntryCount > 0",
                     189LL,
                     0LL,
                     0LL,
                     0LL,
                     0LL);
      }
    }
    if ( (*(_DWORD *)(v1 + 52))-- == 1 )
      *(_DWORD *)(v1 + 56) = -1;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
