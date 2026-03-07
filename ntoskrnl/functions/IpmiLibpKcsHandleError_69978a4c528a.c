__int64 __fastcall IpmiLibpKcsHandleError(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  char v13; // [rsp+40h] [rbp+18h] BYREF

  v12 = a1;
  v13 = 0;
  LOBYTE(v12) = 0;
  v3 = 0;
  while ( !(unsigned int)IpmiLibpKcsSpinRegister(a1, a2, 2LL) )
  {
    dword_140C2C7F4 = 4;
    IpmiLibWriteOneByte(a1, 1u, 0x60u);
    v5 = IpmiLibpHandleErrorInterrupt(v4, a2, &v12, &v13);
    if ( v5 != -1073741822 )
    {
      if ( v5 )
        break;
    }
    dword_140C2C7F4 = 5;
    IpmiLibWriteOneByte(a1, 0, 0);
    v7 = IpmiLibpHandleErrorInterrupt(v6, a2, &v12, &v13);
    if ( v7 != -1073741822 )
    {
      if ( v7 )
        break;
    }
    a1 = (unsigned int)(unsigned __int8)v12 - 1;
    if ( (unsigned __int8)v12 == 1 )
      break;
    if ( (unsigned __int8)v12 != 255 )
    {
      if ( (dword_140C2C7C0 & 1) == 0 )
        IpmiLibReadOneByte(a1, 0);
      IpmiLibWriteOneByte(a1, 0, 0x68u);
      dword_140C2C7F4 = 6;
      v9 = IpmiLibpHandleErrorInterrupt(v8, a2, &v12, &v13);
      v10 = v9;
      if ( v9 == -1073741822 )
      {
        v10 = 0;
      }
      else if ( v9 )
      {
        break;
      }
      a1 = (unsigned int)(unsigned __int8)v12 - 1;
      if ( (unsigned __int8)v12 == 1 )
        break;
      if ( (unsigned __int8)v12 != 255 )
        return v10;
    }
    if ( (unsigned __int8)++v3 > 0xAu )
      return 0;
  }
  IpmiLibWriteOneByte(a1, 1u, 0x60u);
  return v10;
}
