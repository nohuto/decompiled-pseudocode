/*
 * XREFs of VslEnableKernelCfgTarget @ 0x14093F234
 * Callers:
 *     MiMarkKernelCfgTarget @ 0x14035D3FC (MiMarkKernelCfgTarget.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslEnableKernelCfgTarget(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2u, 218, 0, (__int64)v3);
}
