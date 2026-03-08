/*
 * XREFs of VslMakeProtectedPageWritable @ 0x140549888
 * Callers:
 *     KeSetPagePrivilege @ 0x1403CF124 (KeSetPagePrivilege.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1402D8618 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslMakeProtectedPageWritable(__int64 a1, __int128 *a2)
{
  __int128 v5; // xmm0
  _OWORD v6[7]; // [rsp+20h] [rbp-88h] BYREF

  memset(v6, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 0LL;
  v5 = *a2;
  *((_QWORD *)&v6[0] + 1) = a1;
  v6[1] = v5;
  return VslpEnterIumSecureMode(2u, 247, 0, (__int64)v6);
}
