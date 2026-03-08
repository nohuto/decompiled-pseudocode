/*
 * XREFs of ?IsNativeOrientationPortrait@@YAHXZ @ 0x1C00F8248
 * Callers:
 *     ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00F8410 (-xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 IsNativeOrientationPortrait(void)
{
  unsigned int v0; // ebx
  int v2[4]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v3[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v4; // [rsp+38h] [rbp-C8h]
  int v5; // [rsp+40h] [rbp-C0h]
  unsigned int v6; // [rsp+44h] [rbp-BCh]
  unsigned int v7; // [rsp+48h] [rbp-B8h]
  _BYTE v8[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v9; // [rsp+90h] [rbp-70h]
  int v10; // [rsp+9Ch] [rbp-64h]

  v2[0] = 1;
  v0 = 0;
  if ( (int)((__int64 (__fastcall *)(__int64, int *, _BYTE *, _QWORD))DrvQueryDisplayConfig)(1073741825LL, v2, v8, 0LL) < 0 )
    return 0LL;
  memset_0(v3, 0, 0x50uLL);
  v4 = v9;
  v5 = v10;
  v3[0] = 3;
  v3[1] = 80;
  if ( (int)DrvDisplayConfigGetDeviceInfo(v3) < 0 )
    return 0LL;
  LOBYTE(v0) = v7 > v6;
  return v0;
}
