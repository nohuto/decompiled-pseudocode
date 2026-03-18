/*
 * XREFs of VslFreeKernelShadowStack @ 0x140932068
 * Callers:
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslFreeKernelShadowStack(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2u, 225, 0, (__int64)v3);
}
