__int64 __fastcall CLegacyRotationMgr::QueryDockedOrientationRegistrySetting(
        CLegacyRotationMgr *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 result; // rax
  char v6; // cl
  int v7; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v8; // [rsp+24h] [rbp-DCh] BYREF
  int v9; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[12]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v12; // [rsp+4Ch] [rbp-B4h]
  int v13; // [rsp+80h] [rbp-80h]

  v9 = 1;
  result = DrvQueryDisplayConfig(3221225490LL, &v9, v10, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v13 == 0x80000000 || v13 == 11 || v13 == 13 )
    {
      v8 = 0;
      v7 = 0;
      result = DrvGetMonitorOrientation(v11, v12, &v8, &v7);
      if ( (int)result >= 0 )
      {
        v6 = v7 - v8;
        *a2 = v8;
        *a3 = v6 & 3;
        return 0LL;
      }
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
