/*
 * XREFs of VslMakeProtectedPageExecutable @ 0x1405497EC
 * Callers:
 *     KeSetPagePrivilege @ 0x1403CF124 (KeSetPagePrivilege.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslMakeProtectedPageExecutable(__int64 a1, __int128 *a2, int a3)
{
  __int128 v6; // xmm0
  _OWORD v8[7]; // [rsp+20h] [rbp-88h] BYREF

  memset(v8, 0, 0x68uLL);
  v6 = *a2;
  *((_QWORD *)&v8[0] + 1) = a1;
  v8[1] = v6;
  LODWORD(v8[2]) = a3 != 0;
  return VslpEnterIumSecureMode(2u, 248, 0, (__int64)v8);
}
