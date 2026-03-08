/*
 * XREFs of VslCreateSecureThread @ 0x14093EDA0
 * Callers:
 *     KeSecureThread @ 0x14056C9E0 (KeSecureThread.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslCreateSecureThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 result; // rax
  _QWORD v12[14]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v12, 0, 0x68uLL);
  v12[1] = *(_QWORD *)(a1 + 992);
  v12[3] = *(_QWORD *)(a3 + 48);
  v12[6] = a5;
  v12[7] = a6;
  v12[2] = a2;
  v12[4] = a3;
  v12[5] = a4;
  result = VslpEnterIumSecureMode(2u, 8, 0, (__int64)v12);
  if ( (int)result >= 0 )
    *a7 = v12[2];
  return result;
}
