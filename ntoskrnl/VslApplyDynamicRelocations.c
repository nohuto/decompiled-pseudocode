/*
 * XREFs of VslApplyDynamicRelocations @ 0x140B90128
 * Callers:
 *     MiApplyDynamicRelocations @ 0x140B39134 (MiApplyDynamicRelocations.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslApplyDynamicRelocations(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  v7[1] = a1;
  v7[2] = a2;
  v7[3] = a3;
  return VslpEnterIumSecureMode(2u, 212, 0, (__int64)v7);
}
