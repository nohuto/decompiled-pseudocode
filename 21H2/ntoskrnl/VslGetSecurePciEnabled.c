/*
 * XREFs of VslGetSecurePciEnabled @ 0x1403CFDA0
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x1404F4FB0 (HvlGetEnlightenmentInfo.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140265408 (HvlQueryVsmConnection.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

bool VslGetSecurePciEnabled()
{
  bool result; // al
  _DWORD v1[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  result = 0;
  if ( HvlQueryVsmConnection(0LL) )
  {
    v1[4] = 1;
    if ( VslpEnterIumSecureMode(2u, 263, 0, (__int64)v1) >= 0 && (v1[4] & 1) != 0 )
      return 1;
  }
  return result;
}
