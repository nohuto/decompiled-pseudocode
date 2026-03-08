/*
 * XREFs of VslRegisterSecureSystemDlls @ 0x140549DB8
 * Callers:
 *     PspInitPhase3 @ 0x140B726D0 (PspInitPhase3.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslRegisterSecureSystemDlls(__int64 a1, __int64 a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[3] = 0LL;
  v5[1] = a1;
  v5[2] = a2;
  return VslpEnterIumSecureMode(2u, 4, 0, (__int64)v5);
}
