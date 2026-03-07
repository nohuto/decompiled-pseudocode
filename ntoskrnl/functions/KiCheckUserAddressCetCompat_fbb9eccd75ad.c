bool __fastcall KiCheckUserAddressCetCompat(__int64 a1, unsigned __int64 a2)
{
  char v4; // bl
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 0;
  v6[0] = 0LL;
  v4 = 1;
  if ( (int)MmGetImageInformation(a2, &v8, v6, &v7) < 0
    || !v8
    || !v6[0]
    || (v7 & 1) == 0 && v8 != *(_QWORD *)(a1 + 1312) )
  {
    return (unsigned __int8)RtlFindDynamicEnforcedAddressInRanges(a1 + 2856, a2) != 0;
  }
  return v4;
}
