/*
 * XREFs of VslFreeKernelShadowStack @ 0x140942368
 * Callers:
 *     MiDeleteKernelShadowStack @ 0x140644434 (MiDeleteKernelShadowStack.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall VslFreeKernelShadowStack(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2u, 228, 0, (__int64)v3);
}
