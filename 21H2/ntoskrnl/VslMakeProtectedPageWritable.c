/*
 * XREFs of VslMakeProtectedPageWritable @ 0x14054EC88
 * Callers:
 *     KeSetPagePrivilege @ 0x14039FDB0 (KeSetPagePrivilege.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140294D28 (HvlQueryVsmConnection.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
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
