__int64 __fastcall DpiInternal::CalcDpi(DpiInternal *this, int a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  WdLogSingleEntry1(1LL, 54LL);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v3,
        v2,
        v4,
        0LL,
        2,
        -1,
        L"Divide by zero due to 0 physical dimension.",
        54LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return 0LL;
}
