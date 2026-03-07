char __fastcall DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>(
        _QWORD *a1)
{
  char result; // al
  int v2; // edx
  int v3; // r8d

  if ( (_QWORD *)*a1 != a1 )
  {
    result = WdLogSingleEntry1(1LL, 783LL);
    if ( bTracingEnabled )
    {
      result = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        return McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                 0,
                 v2,
                 v3,
                 0,
                 2,
                 -1,
                 (__int64)L"IsEmpty()",
                 783LL,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
    }
  }
  return result;
}
