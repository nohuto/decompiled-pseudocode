/*
 * XREFs of VslVerifyPage @ 0x14054A880
 * Callers:
 *     CcBcbProfiler @ 0x1403DD7C0 (CcBcbProfiler.c)
 *     VslpVerifySessionSpace @ 0x14054ABD0 (VslpVerifySessionSpace.c)
 *     sub_14067C010 @ 0x14067C010 (sub_14067C010.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslVerifyPage(__int64 a1, int a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = a1;
  LODWORD(v5[2]) = (a2 & 1) != 0;
  if ( a2 >= 0 )
    return VslpEnterIumSecureMode(2u, 258, 0, (__int64)v5);
  LODWORD(v5[2]) = ((a2 & 1) != 0) | 2;
  if ( a1 )
    return VslpEnterIumSecureMode(2u, 258, 0, (__int64)v5);
  else
    return 0LL;
}
