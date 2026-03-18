/*
 * XREFs of ?IsNativeOrientationPortrait@@YAHXZ @ 0x1C00D14D4
 * Callers:
 *     ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00D10B0 (-xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 IsNativeOrientationPortrait(void)
{
  unsigned int v0; // ebx
  int v2[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v3[10]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v4[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v5; // [rsp+90h] [rbp-70h]
  int v6; // [rsp+9Ch] [rbp-64h]

  v2[0] = 1;
  v0 = 0;
  if ( (int)DrvQueryDisplayConfig(1073741825LL, v2, v4, 0LL) < 0 )
    return 0LL;
  memset(v3, 0, sizeof(v3));
  v3[1] = v5;
  LODWORD(v3[2]) = v6;
  v3[0] = 0x5000000003LL;
  if ( (int)DrvDisplayConfigGetDeviceInfo(v3) < 0 )
    return 0LL;
  LOBYTE(v0) = LODWORD(v3[3]) > HIDWORD(v3[2]);
  return v0;
}
