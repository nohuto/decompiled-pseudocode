char __fastcall DxgkLogTriageEvent(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  char result; // al

  if ( bTracingEnabled )
  {
    result = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      return McTemplateK0zqqzxxxxx_EtwWriteTransfer(
               -(int)a1,
               a2,
               a3,
               a1 != 0 ? a1 + 324 : 0,
               a2,
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9);
  }
  return result;
}
