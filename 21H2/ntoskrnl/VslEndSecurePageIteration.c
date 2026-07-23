/*
 * XREFs of VslEndSecurePageIteration @ 0x1404FC150
 * Callers:
 *     HvlpEndSecurePageListIteration @ 0x1404FB53C (HvlpEndSecurePageListIteration.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslEndSecurePageIteration(unsigned __int8 a1, _DWORD *a2)
{
  __int64 v3; // rbx
  NTSTATUS result; // eax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a1;
  memset(v5, 0, 0x68uLL);
  v5[1] = v3;
  result = VslpEnterIumSecureMode(2u, 2049, 0, (__int64)v5);
  if ( result >= 0 )
  {
    if ( a2 )
      *a2 = v5[2];
  }
  return result;
}
