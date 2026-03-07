__int64 __fastcall KiIsHyperVCr3RspErrataPresent(__int64 a1)
{
  bool v1; // zf
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_BYTE *)(a1 + 141) == 1;
  v4 = 0LL;
  if ( !v1 )
    return 0LL;
  v2 = 0;
  if ( !HviIsHypervisorVendorMicrosoft() )
    return 0LL;
  v5 = 0LL;
  HviGetHypervisorFeatures(&v5);
  if ( (v5 & 0x100000000000LL) != 0 )
    return 0LL;
  HviGetHypervisorVersion(&v4);
  if ( (unsigned int)v4 >= 0x429D )
    return 0LL;
  if ( (_DWORD)v4 != 14393 )
    return 1LL;
  LOBYTE(v2) = (HIDWORD(v4) & 0xFFFFFFu) < 0x1479;
  return v2;
}
