__int64 __fastcall CmGetMatchingFilteredDeviceList(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, __int64, int, _QWORD *); // r13
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int MatchingFilteredDeviceListWorker; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _QWORD v21[12]; // [rsp+60h] [rbp-71h] BYREF

  memset(v21, 0, 0x58uLL);
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int, _QWORD *))(a1 + 504);
  LODWORD(v21[9]) = 0;
  v21[2] = a2;
  LODWORD(v21[3]) = a3;
  v21[4] = a4;
  v21[6] = a6;
  v21[8] = a8;
  v21[5] = a5;
  LODWORD(v21[7]) = a7;
  if ( v12 )
  {
    v13 = v12(a1, 0LL, 1LL, 16LL, 1, v21);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return LODWORD(v21[0]);
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  MatchingFilteredDeviceListWorker = CmGetMatchingFilteredDeviceListWorker(
                                       a1,
                                       v21[2],
                                       v21[3],
                                       v21[4],
                                       v21[5],
                                       v21[6],
                                       v21[7],
                                       v21[8],
                                       v21[9]);
  v14 = MatchingFilteredDeviceListWorker;
  if ( v12 )
  {
    LODWORD(v21[0]) = MatchingFilteredDeviceListWorker;
    v17 = v12(a1, 0LL, 1LL, 16LL, 2, v21);
    v18 = v17;
    if ( v17 != -1073741822 )
    {
      if ( v17 == -1073741536 )
        return LODWORD(v21[0]);
      v19 = v14;
      if ( v18 )
        return (unsigned int)-1073741595;
      return v19;
    }
  }
  return v14;
}
