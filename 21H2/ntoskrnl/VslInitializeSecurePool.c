/*
 * XREFs of VslInitializeSecurePool @ 0x14054E61C
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslInitializeSecurePool(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  SecurePoolBase = a1;
  v3[2] = 0x8000000000LL;
  v3[1] = a1;
  SecurePoolEnd = a1 + 0x8000000000LL;
  return VslpEnterIumSecureMode(2u, 214, 0, (__int64)v3);
}
