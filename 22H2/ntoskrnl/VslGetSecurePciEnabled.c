/*
 * XREFs of VslGetSecurePciEnabled @ 0x1403B5EB0
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x140544060 (HvlGetEnlightenmentInfo.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14033FE98 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

char VslGetSecurePciEnabled()
{
  _DWORD v1[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  if ( HvlQueryVsmConnection(0LL) && (v1[4] = 1, (int)VslpEnterIumSecureMode(2u, 263, 0, (__int64)v1) >= 0) )
    return v1[4] & 1;
  else
    return 0;
}
