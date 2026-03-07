void __fastcall DXGPROCESS::AcquireReference(DXGPROCESS *this)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d

  _InterlockedIncrement64((volatile signed __int64 *)this + 4);
  if ( *((__int64 *)this + 4) <= 0 )
  {
    WdLogSingleEntry1(1LL, 985LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v2,
          v1,
          v3,
          0,
          2,
          -1,
          (__int64)L"m_ReferenceCount > 0",
          985LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
