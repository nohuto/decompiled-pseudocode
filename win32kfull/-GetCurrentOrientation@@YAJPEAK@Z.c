__int64 __fastcall GetCurrentOrientation(unsigned int *a1)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-108h] BYREF
  _DWORD v4[3]; // [rsp+24h] [rbp-104h] BYREF
  _BYTE v5[16]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v6[8]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v7; // [rsp+48h] [rbp-E0h]
  unsigned int v8; // [rsp+98h] [rbp-90h]

  result = DrvQueryDisplayConfig(3221225474LL, v4, v5, 0LL, 0);
  if ( (int)result >= 0 )
  {
    result = DrvIsSourceInHardwareClone(v6, v7, &v3);
    if ( (int)result >= 0 )
    {
      if ( v3 )
      {
        return 3223192321LL;
      }
      else
      {
        *a1 = ConvertDisplayConfigRotationToDMDO(v8);
        return 0LL;
      }
    }
  }
  return result;
}
