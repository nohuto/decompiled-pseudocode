/*
 * XREFs of VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x140548ED0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1402D8618 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma(int a1, char a2, char a3, char a4)
{
  bool v8; // sf
  char result; // al
  _DWORD v10[28]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v10, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return -1;
  v10[2] = a1;
  LOBYTE(v10[3]) = a2;
  BYTE1(v10[3]) = a3;
  BYTE2(v10[3]) = a4;
  v10[4] = 2;
  v8 = (int)VslpEnterIumSecureMode(2u, 263, 0, (__int64)v10) < 0;
  result = v10[4];
  if ( v8 )
    return -1;
  return result;
}
