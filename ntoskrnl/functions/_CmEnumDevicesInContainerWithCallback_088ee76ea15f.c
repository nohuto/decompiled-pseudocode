__int64 __fastcall CmEnumDevicesInContainerWithCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 (__fastcall *v9)(__int64, __int64, __int64, __int64, int, _QWORD *); // r14
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  _QWORD v17[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v17, 0, 0x58uLL);
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 504);
  LODWORD(v17[5]) = 0;
  v17[2] = a3;
  v17[3] = a4;
  v17[4] = a5;
  if ( v9 )
  {
    v10 = v9(a1, a2, 5LL, 15LL, 1, v17);
    if ( v10 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v10 == -1073741536 )
        return LODWORD(v17[0]);
      if ( v10 )
        return (unsigned int)-1073741595;
    }
  }
  v11 = CmEnumDevicesInContainerWithCallbackWorker(a1, a2, v17[2], v17[3], v17[4], v17[5]);
  v12 = v11;
  if ( !v9 )
    return v12;
  LODWORD(v17[0]) = v11;
  v13 = v9(a1, a2, 5LL, 15LL, 2, v17);
  v14 = v13;
  if ( v13 == -1073741822 )
    return v12;
  if ( v13 == -1073741536 )
    return LODWORD(v17[0]);
  v15 = v12;
  if ( v14 )
    return (unsigned int)-1073741595;
  return v15;
}
