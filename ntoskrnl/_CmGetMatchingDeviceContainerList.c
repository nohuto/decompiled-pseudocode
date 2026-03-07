__int64 __fastcall CmGetMatchingDeviceContainerList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, __int64, int, _QWORD *); // r15
  int v12; // eax
  unsigned int MatchingDeviceContainerListWorker; // eax
  unsigned int v14; // ebx
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  _QWORD v19[12]; // [rsp+40h] [rbp-61h] BYREF

  memset(v19, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int, _QWORD *))(a1 + 504);
  v19[3] = a3;
  LODWORD(v19[5]) = a5;
  v19[2] = a2;
  v19[4] = a4;
  v19[6] = a6;
  LODWORD(v19[7]) = a7;
  if ( v11 )
  {
    v12 = v11(a1, 0LL, 5LL, 4LL, 1, v19);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(v19[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  MatchingDeviceContainerListWorker = CmGetMatchingDeviceContainerListWorker(a1, v19[2], v19[3], v19[4], v19[5], v19[6]);
  v14 = MatchingDeviceContainerListWorker;
  if ( !v11 )
    return v14;
  LODWORD(v19[0]) = MatchingDeviceContainerListWorker;
  v16 = v11(a1, 0LL, 5LL, 4LL, 2, v19);
  v17 = v16;
  if ( v16 == -1073741822 )
    return v14;
  if ( v16 == -1073741536 )
    return LODWORD(v19[0]);
  v18 = v14;
  if ( v17 )
    return (unsigned int)-1073741595;
  return v18;
}
