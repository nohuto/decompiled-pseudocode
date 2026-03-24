/*
 * XREFs of VslAbortLiveDump @ 0x1404FBD90
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x140898020 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

NTSTATUS VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 58, 0, (__int64)v1);
}
