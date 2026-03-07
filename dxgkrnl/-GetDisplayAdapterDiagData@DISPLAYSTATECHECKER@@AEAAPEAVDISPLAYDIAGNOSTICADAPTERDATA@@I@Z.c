struct DISPLAYDIAGNOSTICADAPTERDATA *__fastcall DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(
        DISPLAYSTATECHECKER *this,
        unsigned int a2)
{
  int v3; // edx
  int v4; // r8d

  if ( a2 < 4 )
    return (DISPLAYSTATECHECKER *)((char *)this + 3512 * a2 + 40);
  WdLogSingleEntry1(1LL, 619LL);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        0,
        v3,
        v4,
        0LL,
        2,
        -1,
        L"GetDisplayAdapterDiagData() called with invalid index",
        619LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return 0LL;
}
