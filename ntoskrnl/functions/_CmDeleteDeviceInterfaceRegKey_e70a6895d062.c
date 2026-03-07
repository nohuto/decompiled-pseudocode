__int64 __fastcall CmDeleteDeviceInterfaceRegKey(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rdi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v16; // [rsp+20h] [rbp-61h]
  _DWORD v17[22]; // [rsp+40h] [rbp-41h] BYREF

  memset(v17, 0, sizeof(v17));
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  v17[5] = 0;
  v17[7] = 0;
  LOBYTE(v17[6]) = a5;
  v17[4] = a3;
  if ( v8 )
  {
    v16 = 1;
    v9 = v8(a1, a2, 3LL);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return v17[0];
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  LOBYTE(v16) = v17[6];
  v10 = CmDeleteDeviceInterfaceRegKeyWorker(a1, a2, v17[4], v17[5], v16);
  v11 = v10;
  if ( !v8 )
    return v11;
  v17[0] = v10;
  v12 = v8(a1, a2, 3LL);
  v13 = v12;
  if ( v12 == -1073741822 )
    return v11;
  if ( v12 == -1073741536 )
    return v17[0];
  v14 = v11;
  if ( v13 )
    return (unsigned int)-1073741595;
  return v14;
}
