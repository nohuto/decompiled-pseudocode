void __fastcall DXGSESSIONDATA::DecrementDesktopVidPnCount(DXGSESSIONDATA *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( *((int *)this + 4630) <= 0 )
  {
    WdLogSingleEntry1(1LL, 417LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v3,
          v2,
          v4,
          0,
          2,
          -1,
          (__int64)L"m_DesktopVidPnCount > 0",
          417LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 4630);
}
