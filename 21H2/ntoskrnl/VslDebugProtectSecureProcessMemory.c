/*
 * XREFs of VslDebugProtectSecureProcessMemory @ 0x14088F498
 * Callers:
 *     MiProtectEnclavePages @ 0x14054AD70 (MiProtectEnclavePages.c)
 *     NtProtectVirtualMemory @ 0x1406E85A0 (NtProtectVirtualMemory.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslDebugProtectSecureProcessMemory(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int a5,
        _DWORD *a6)
{
  NTSTATUS result; // eax
  _QWORD v11[14]; // [rsp+20h] [rbp-98h] BYREF

  memset(v11, 0, 0x68uLL);
  v11[1] = *(_QWORD *)(a1 + 992);
  v11[3] = *a3;
  v11[4] = *a4;
  v11[5] = a5;
  v11[2] = a2;
  result = VslpEnterIumSecureMode(2u, 38, 0, (__int64)v11);
  if ( result >= 0 )
  {
    *a3 = v11[3];
    *a4 = v11[4];
    *a6 = v11[5];
  }
  return result;
}
