/*
 * XREFs of VslInitializeSyscallProviders @ 0x140AF2DE0
 * Callers:
 *     PsInitializeSyscallProviders @ 0x140AF2E54 (PsInitializeSyscallProviders.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 VslInitializeSyscallProviders()
{
  _QWORD v1[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  v1[2] = 32LL;
  v1[1] = &PspServiceDescriptorGroupTable;
  return VslpEnterIumSecureMode(2u, 228, 0, (__int64)v1);
}
