__int64 __fastcall IpmiLibpKcsReceiveResponseFromBmc(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  int v4; // r14d
  unsigned __int16 v8; // di
  unsigned int Interrupt; // eax
  unsigned int v10; // r9d
  unsigned __int8 OneByte; // al
  __int64 v12; // rcx
  char v13; // r9
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = a1;
  v4 = *a3;
  LOWORD(v15) = 0;
  v8 = 0;
  while ( 1 )
  {
    while ( (dword_140C2C7C0 & 1) != 0 )
    {
      Interrupt = IpmiLibpHandleReadInterrupt(a1, a4, a2, (unsigned __int16)v4, (__int64)&v15);
      v10 = Interrupt;
      if ( Interrupt != 261 )
      {
        if ( !Interrupt )
        {
          dword_140C2C7F4 = 7;
          if ( (unsigned __int16)v15 >= 3u )
          {
            *a3 = v15;
            return v10;
          }
        }
        goto LABEL_17;
      }
      v8 = v15;
    }
    if ( (unsigned int)IpmiLibpKcsSpinRegister(a1, a4, 2LL) )
      goto LABEL_17;
    OneByte = IpmiLibReadOneByte(a1, 1u);
    LOBYTE(a1) = OneByte >> 6;
    if ( (OneByte & 0x80u) != 0 )
      goto LABEL_17;
    if ( (OneByte & 0x40) == 0 )
      break;
    if ( (unsigned int)IpmiLibpKcsSpinRegister(a1, a4, 1LL) )
      goto LABEL_17;
    IpmiLibReadOneByte(a1, 0);
    IpmiLibWriteOneByte(v12, 0, 0x68u);
    a1 = v8;
    if ( v8 <= v4 - 1 )
    {
      a1 = v8++;
      LOWORD(v15) = v8;
      *(_BYTE *)(a1 + a2) = v13;
    }
  }
  if ( !(unsigned int)IpmiLibpKcsSpinRegister(a1, a4, 1LL) )
  {
    IpmiLibReadOneByte(a1, 0);
    dword_140C2C7F4 = 7;
    if ( v8 >= 3u )
    {
      *a3 = v8;
      return 0;
    }
  }
LABEL_17:
  *a3 = 0;
  IpmiLibWriteOneByte(a1, 1u, 0x60u);
  return v10;
}
