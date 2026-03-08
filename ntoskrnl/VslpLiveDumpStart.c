/*
 * XREFs of VslpLiveDumpStart @ 0x14054AA98
 * Callers:
 *     VslSetupLiveDumpBufferInSk @ 0x14054A4B4 (VslSetupLiveDumpBufferInSk.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslpLiveDumpStart(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  v4 = a3;
  v5 = a1;
  memset(v7, 0, 0x68uLL);
  v7[1] = v5;
  v7[2] = v3;
  v7[3] = v4;
  return VslpEnterIumSecureMode(2u, 56, 0, (__int64)v7);
}
