/*
 * XREFs of VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404FC6F0
 * Callers:
 *     <none>
 * Callees:
 *     HvlQueryVsmConnection @ 0x140265408 (HvlQueryVsmConnection.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
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
  v8 = VslpEnterIumSecureMode(2u, 263, 0, (__int64)v10) < 0;
  result = v10[4];
  if ( v8 )
    return -1;
  return result;
}
