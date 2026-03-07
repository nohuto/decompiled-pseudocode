void __fastcall DXGADAPTER::PopWorkerThreadOfExclusiveOwner(PERESOURCE *this)
{
  struct _ERESOURCE *v2; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry1(1LL, 3056LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v4,
          v3,
          v5,
          0,
          2,
          -1,
          (__int64)L"IsCoreResourceExclusiveOwner()",
          3056LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( !this[23] )
    WdLogSingleEntry5(0LL, 275LL, 17LL, this, 0LL, 0LL);
  v2 = this[24];
  this[24] = 0LL;
  this[23] = v2;
}
