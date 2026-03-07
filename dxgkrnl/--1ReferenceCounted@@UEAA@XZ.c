void __fastcall ReferenceCounted::~ReferenceCounted(ReferenceCounted *this)
{
  int v2; // edx
  int v3; // r8d

  *(_QWORD *)this = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    WdLogSingleEntry1(2LL, *((int *)this + 2));
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          *((_DWORD *)this + 2),
          v2,
          v3,
          0,
          0,
          -1,
          (__int64)L"Reference counted instance being destroyed still has %I64d outstanding references on it!",
          *((int *)this + 2),
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
