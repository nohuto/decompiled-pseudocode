__int64 __fastcall CmGetMatchingDeviceList(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, __int64, int, _QWORD *); // r15
  int v12; // eax
  unsigned int MatchingDeviceListForSubkey; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  _QWORD v17[12]; // [rsp+40h] [rbp-61h] BYREF

  memset(v17, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int, _QWORD *))(a1 + 504);
  v17[3] = a3;
  LODWORD(v17[5]) = a5;
  v17[2] = a2;
  v17[4] = a4;
  v17[6] = a6;
  LODWORD(v17[7]) = a7;
  if ( v11 )
  {
    v12 = v11(a1, 0LL, 1LL, 4LL, 1, v17);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(v17[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  if ( LOWORD(v17[7]) )
    MatchingDeviceListForSubkey = -1073741811;
  else
    MatchingDeviceListForSubkey = CmGetMatchingDeviceListForSubkey(a1, 0LL, 0LL, v17[2], v17[3], v17[4], v17[5], v17[6]);
  if ( !v11 )
    return MatchingDeviceListForSubkey;
  LODWORD(v17[0]) = MatchingDeviceListForSubkey;
  v15 = v11(a1, 0LL, 1LL, 4LL, 2, v17);
  if ( v15 == -1073741822 )
    return MatchingDeviceListForSubkey;
  if ( v15 == -1073741536 )
    return LODWORD(v17[0]);
  v16 = MatchingDeviceListForSubkey;
  if ( v15 )
    return (unsigned int)-1073741595;
  return v16;
}
