__int64 __fastcall CmCreateDeviceInterface(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rsi
  int v11; // eax
  int DeviceInterfaceWorker; // eax
  int v13; // ebx
  int v14; // eax
  HANDLE v16[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v16, 0, 0x58uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  if ( a3 || (LODWORD(v16[2]) = 1, a4) )
    LODWORD(v16[2]) = a3;
  HIDWORD(v16[4]) = a6;
  if ( v10 )
  {
    v11 = v10(a1, a2, 3LL);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_19;
      if ( v11 )
        goto LABEL_23;
    }
  }
  DeviceInterfaceWorker = CmCreateDeviceInterfaceWorker(
                            a1,
                            a2,
                            v16[2],
                            (unsigned int)&v16[3],
                            (__int64)&v16[4],
                            SWORD2(v16[4]));
  v13 = DeviceInterfaceWorker;
  if ( v10 )
  {
    LODWORD(v16[0]) = DeviceInterfaceWorker;
    v14 = v10(a1, a2, 3LL);
    if ( v14 != -1073741822 )
    {
      if ( v14 != -1073741536 )
      {
        if ( !v14 )
          goto LABEL_11;
LABEL_23:
        v13 = -1073741595;
        goto LABEL_24;
      }
LABEL_19:
      v13 = (int)v16[0];
    }
  }
LABEL_11:
  if ( v13 >= 0 && a4 )
  {
    *a4 = v16[3];
LABEL_14:
    if ( a5 )
      *a5 = v16[4];
    return (unsigned int)v13;
  }
LABEL_24:
  if ( v16[3] )
    ZwClose(v16[3]);
  if ( v13 >= 0 )
    goto LABEL_14;
  return (unsigned int)v13;
}
