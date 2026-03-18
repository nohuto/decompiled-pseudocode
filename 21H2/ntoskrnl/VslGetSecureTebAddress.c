/*
 * XREFs of VslGetSecureTebAddress @ 0x1409322EC
 * Callers:
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslGetSecureTebAddress(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = *(unsigned int *)(a1 + 796);
  v5[2] = a1;
  result = VslpEnterIumSecureMode(2u, 13, 0, (__int64)v5);
  if ( (int)result >= 0 )
    *a2 = v5[2];
  return result;
}
