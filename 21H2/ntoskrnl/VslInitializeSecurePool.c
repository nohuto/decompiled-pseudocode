/*
 * XREFs of VslInitializeSecurePool @ 0x1404FC91C
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslInitializeSecurePool(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  v3[2] = 0x8000000000LL;
  return VslpEnterIumSecureMode(2u, 214, 0, (__int64)v3);
}
