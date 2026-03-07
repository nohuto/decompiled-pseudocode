__int64 __fastcall CmGetMatchingDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, __int64, int, __int64 *); // r15
  int v12; // ecx
  int v13; // eax
  unsigned int MatchingFilteredDeviceInterfaceList; // ebx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18[12]; // [rsp+50h] [rbp-61h] BYREF

  memset(v18, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int, __int64 *))(a1 + 504);
  v12 = a7;
  v18[3] = a3;
  v18[2] = a2;
  v18[4] = a4;
  LODWORD(v18[5]) = a5;
  v18[6] = a6;
  LODWORD(v18[7]) = a7;
  if ( v11 )
  {
    v13 = v11(a1, 0LL, 3LL, 4LL, 1, v18);
    if ( v13 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return LODWORD(v18[0]);
      if ( v13 )
        return (unsigned int)-1073741595;
    }
    v12 = v18[7];
  }
  if ( (_WORD)v12 )
    MatchingFilteredDeviceInterfaceList = -1073741811;
  else
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            a1,
                                            0LL,
                                            0LL,
                                            0,
                                            v18[2],
                                            v18[3],
                                            v18[4],
                                            v18[5],
                                            v18[6],
                                            v12);
  if ( !v11 )
    return MatchingFilteredDeviceInterfaceList;
  LODWORD(v18[0]) = MatchingFilteredDeviceInterfaceList;
  v16 = v11(a1, 0LL, 3LL, 4LL, 2, v18);
  if ( v16 == -1073741822 )
    return MatchingFilteredDeviceInterfaceList;
  if ( v16 == -1073741536 )
    return LODWORD(v18[0]);
  v17 = MatchingFilteredDeviceInterfaceList;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
