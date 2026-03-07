void __fastcall DXGADAPTER::PushWorkerThreadOfExclusiveOwner(PERESOURCE *this, struct _ERESOURCE *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry1(1LL, 3035LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v5,
          v4,
          v6,
          0,
          2,
          -1,
          (__int64)L"IsCoreResourceExclusiveOwner()",
          3035LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( this[24] )
    WdLogSingleEntry5(0LL, 275LL, 17LL, this, 0LL, 0LL);
  this[24] = this[23];
  this[23] = a2;
}
