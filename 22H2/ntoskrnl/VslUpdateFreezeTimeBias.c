/*
 * XREFs of VslUpdateFreezeTimeBias @ 0x14094357C
 * Callers:
 *     PsThawMultiProcess @ 0x1402044E4 (PsThawMultiProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall VslUpdateFreezeTimeBias(__int64 a1, __int64 a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = *(_QWORD *)(a1 + 992);
  v5[2] = a2;
  return VslpEnterIumSecureMode(2u, 64, 0, (__int64)v5);
}
