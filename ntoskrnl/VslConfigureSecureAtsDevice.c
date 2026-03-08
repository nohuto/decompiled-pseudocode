/*
 * XREFs of VslConfigureSecureAtsDevice @ 0x14040A03C
 * Callers:
 *     ExpAtsConfigureSecureDevice @ 0x14040D320 (ExpAtsConfigureSecureDevice.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslConfigureSecureAtsDevice(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // xmm0_8
  _QWORD v6[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v6, 0, 0x68uLL);
  v4 = *a1;
  LODWORD(v6[2]) = *((_DWORD *)a1 + 2);
  *(_QWORD *)((char *)&v6[2] + 4) = *a2;
  v6[1] = v4;
  return VslpEnterIumSecureMode(2u, 270, 0, (__int64)v6);
}
