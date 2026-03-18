/*
 * XREFs of PsRundownVsmEnclave @ 0x1409B4584
 * Callers:
 *     MiCanDeleteEnclave @ 0x1405A862C (MiCanDeleteEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall PsRundownVsmEnclave(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = *(_QWORD *)(a1 + 24);
  return VslpEnterIumSecureMode(2u, 51, 0, (__int64)v3);
}
