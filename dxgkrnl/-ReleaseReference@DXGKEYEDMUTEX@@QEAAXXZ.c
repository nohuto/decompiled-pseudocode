void __fastcall DXGKEYEDMUTEX::ReleaseReference(DXGKEYEDMUTEX *this)
{
  __int64 v1; // rax
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  v1 = _InterlockedDecrement64((volatile signed __int64 *)this + 3);
  if ( v1 )
  {
    if ( v1 < 0 )
    {
      WdLogSingleEntry1(1LL, 747LL);
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
            L"NewReferenceCount >= 0",
            747LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  else
  {
    DXGGLOBAL::DestroyKeyedMutex(*((DXGGLOBAL **)this + 2), this);
  }
}
