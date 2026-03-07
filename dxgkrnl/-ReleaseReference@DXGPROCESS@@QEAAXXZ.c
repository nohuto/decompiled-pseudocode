void __fastcall DXGPROCESS::ReleaseReference(DXGPROCESS *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( *((__int64 *)this + 4) <= 0 )
  {
    WdLogSingleEntry1(1LL, 998LL);
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
          (__int64)L"m_ReferenceCount > 0",
          998LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    if ( this )
      (**(void (__fastcall ***)(DXGPROCESS *, __int64))this)(this, 1LL);
  }
}
