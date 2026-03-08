/*
 * XREFs of VslIsEncryptionKeyAvailable @ 0x14093F824
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

bool VslIsEncryptionKeyAvailable()
{
  _QWORD v1[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return (int)VslpEnterIumSecureMode(2u, 35, 0, (__int64)v1) >= 0 && v1[2] != 0LL;
}
