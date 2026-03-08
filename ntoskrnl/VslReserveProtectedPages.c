/*
 * XREFs of VslReserveProtectedPages @ 0x140881254
 * Callers:
 *     KeReservePrivilegedPages @ 0x1403D1570 (KeReservePrivilegedPages.c)
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 *     MiFreeKernelPadSections @ 0x140B65494 (MiFreeKernelPadSections.c)
 *     MiBootImageRelocated @ 0x140B97534 (MiBootImageRelocated.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslReserveProtectedPages(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  _QWORD v9[14]; // [rsp+20h] [rbp-88h] BYREF

  v5 = a3;
  v6 = a4;
  memset(v9, 0, 0x68uLL);
  v9[1] = a1;
  v9[2] = a2;
  v9[3] = v5;
  v9[4] = v6;
  return VslpEnterIumSecureMode(2u, 211, 0, (__int64)v9);
}
