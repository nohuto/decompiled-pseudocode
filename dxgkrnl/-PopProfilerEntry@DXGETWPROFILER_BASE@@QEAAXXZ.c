void __fastcall DXGETWPROFILER_BASE::PopProfilerEntry(DXGETWPROFILER_BASE *this)
{
  __int64 v1; // rbx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    if ( !*(_DWORD *)(v1 + 52) )
    {
      WdLogSingleEntry1(1LL, 189LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v5,
            v4,
            v6,
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
    *((_QWORD *)this + 1) = 0LL;
  }
}
