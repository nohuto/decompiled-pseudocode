/*
 * XREFs of VslExchangeEntropy @ 0x1403C0E80
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslExchangeEntropy(void *a1)
{
  int v2; // ebx
  _BYTE v4[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  memmove(&v4[16], a1, 0x40uLL);
  v2 = VslpEnterIumSecureMode(2u, 34, 0, (__int64)v4);
  if ( v2 >= 0 )
    memmove(a1, &v4[16], 0x40uLL);
  return (unsigned int)v2;
}
