/*
 * XREFs of VslSecurePoolFree @ 0x14054A314
 * Callers:
 *     ExFreePool2 @ 0x140604AA0 (ExFreePool2.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslSecurePoolFree(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  _QWORD v9[14]; // [rsp+20h] [rbp-88h] BYREF

  v4 = a2;
  memset(v9, 0, 0x68uLL);
  v9[1] = a1;
  v9[2] = a3;
  v9[3] = a4;
  v9[4] = v4;
  return VslpEnterIumSecureMode(2u, 82, 0, (__int64)v9);
}
