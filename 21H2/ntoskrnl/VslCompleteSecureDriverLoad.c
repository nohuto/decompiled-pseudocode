/*
 * XREFs of VslCompleteSecureDriverLoad @ 0x14077D5C4
 * Callers:
 *     MiFinalizeDriverCfgState @ 0x14075CA78 (MiFinalizeDriverCfgState.c)
 *     MiMarkKernelImageCfgBits @ 0x140773364 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslCompleteSecureDriverLoad(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v4 = a3;
  memset(v7, 0, 0x68uLL);
  v7[4] = 0LL;
  v7[1] = a1;
  v7[2] = a2;
  v7[3] = v4;
  return VslpEnterIumSecureMode(2u, 216, 0, (__int64)v7);
}
