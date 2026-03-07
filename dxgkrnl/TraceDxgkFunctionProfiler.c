char __fastcall TraceDxgkFunctionProfiler(int a1, char a2, __int64 a3)
{
  __int64 v4; // rcx
  char result; // al
  const EVENT_DESCRIPTOR *v6; // rdx
  int v7; // edx

  v4 = 1LL;
  if ( a2 == 1 )
  {
    result = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return result;
    v6 = (const EVENT_DESCRIPTOR *)&EventProfilerEnter;
    return McTemplateK0q_EtwWriteTransfer(v4, v6, a3, a1);
  }
  if ( a2 == 2 )
  {
    result = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return result;
    v6 = (const EVENT_DESCRIPTOR *)&EventProfilerExit;
    return McTemplateK0q_EtwWriteTransfer(v4, v6, a3, a1);
  }
  if ( a2 )
  {
    WdLogSingleEntry1(1LL, 2681LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v4,
          v7,
          a3,
          0,
          2,
          -1,
          (__int64)L"EventType == EVENT_TRACE_TYPE_INFO",
          2681LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  result = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    v6 = (const EVENT_DESCRIPTOR *)&EventProfilerInfo;
    return McTemplateK0q_EtwWriteTransfer(v4, v6, a3, a1);
  }
  return result;
}
