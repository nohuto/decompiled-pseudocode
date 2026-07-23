/*
 * XREFs of _CmDeleteDeviceRegKey @ 0x14072D41C
 * Callers:
 *     _CmDeleteDeviceWorker @ 0x14072CF38 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072D4FC (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 *     PiCMDeleteDeviceKey @ 0x1408B00C8 (PiCMDeleteDeviceKey.c)
 *     PipResetDevice @ 0x140A91620 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072D4FC (_CmDeleteDeviceRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rsi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  _DWORD v16[22]; // [rsp+40h] [rbp-51h] BYREF

  memset(v16, 0, sizeof(v16));
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  v16[7] = 0;
  v16[5] = a4;
  v16[4] = a3;
  LOBYTE(v16[6]) = 1;
  if ( v8 )
  {
    v9 = v8(a1, a2, 1LL);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return v16[0];
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  v10 = CmDeleteDeviceRegKeyWorker(a1, a2, v16[4], v16[5], v16[6]);
  v11 = v10;
  if ( !v8 )
    return v11;
  v16[0] = v10;
  v13 = v8(a1, a2, 1LL);
  v14 = v13;
  if ( v13 == -1073741822 )
    return v11;
  if ( v13 == -1073741536 )
    return v16[0];
  v15 = v11;
  if ( v14 )
    return (unsigned int)-1073741595;
  return v15;
}
