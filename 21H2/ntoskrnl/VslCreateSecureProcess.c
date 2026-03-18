/*
 * XREFs of VslCreateSecureProcess @ 0x140931900
 * Callers:
 *     KeInitializeProcess @ 0x14070A268 (KeInitializeProcess.c)
 *     VslCreateEnclave @ 0x1409317A0 (VslCreateEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslCreateSecureProcess(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  v7[1] = a1;
  v7[2] = a2;
  result = VslpEnterIumSecureMode(2u, 6, 0, (__int64)v7);
  if ( (int)result >= 0 )
    *a3 = v7[2];
  return result;
}
