/*
 * XREFs of VslCollectLiveDumpInSk @ 0x14054884C
 * Callers:
 *     HvlCollectLivedump @ 0x140545434 (HvlCollectLivedump.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslCollectLiveDumpInSk(char a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = (-(__int64)((a1 & 2) != 0) & 0xFFFFFFFFFFFFFFEBuLL) + 24;
  return VslpEnterIumSecureMode(2u, 251, 0, (__int64)v3);
}
