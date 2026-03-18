/*
 * XREFs of VslEnableKernelCfgTarget @ 0x140942254
 * Callers:
 *     MiMarkKernelCfgTarget @ 0x1402F7A50 (MiMarkKernelCfgTarget.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall VslEnableKernelCfgTarget(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2u, 218, 0, (__int64)v3);
}
