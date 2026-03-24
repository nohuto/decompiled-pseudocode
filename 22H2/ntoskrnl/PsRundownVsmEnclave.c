/*
 * XREFs of PsRundownVsmEnclave @ 0x14090E208
 * Callers:
 *     MiCanDeleteEnclave @ 0x1405495A8 (MiCanDeleteEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

NTSTATUS __fastcall PsRundownVsmEnclave(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = *(_QWORD *)(a1 + 24);
  return VslpEnterIumSecureMode(2u, 50, 0, (__int64)v3);
}
