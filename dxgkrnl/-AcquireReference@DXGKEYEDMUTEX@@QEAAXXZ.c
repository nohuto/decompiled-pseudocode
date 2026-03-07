void __fastcall DXGKEYEDMUTEX::AcquireReference(DXGKEYEDMUTEX *this)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d

  if ( _InterlockedIncrement64((volatile signed __int64 *)this + 3) <= 0 )
  {
    WdLogSingleEntry1(1LL, 731LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v2,
          v1,
          v3,
          0LL,
          2,
          -1,
          L"NewReferenceCount > 0",
          731LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
