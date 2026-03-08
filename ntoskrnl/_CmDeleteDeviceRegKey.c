/*
 * XREFs of _CmDeleteDeviceRegKey @ 0x140A5F12C
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PiCMDeleteDeviceKey @ 0x140966320 (PiCMDeleteDeviceKey.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A5F264 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140A5F74C (_CmDeleteDeviceWorker.c)
 *     PipResetDevice @ 0x140B91440 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A5F264 (_CmDeleteDeviceRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rsi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
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
  v10 = CmDeleteDeviceRegKeyWorker(a1, v16[6]);
  v11 = v10;
  if ( !v8 )
    return v11;
  v16[0] = v10;
  v12 = v8(a1, a2, 1LL);
  v13 = v12;
  if ( v12 == -1073741822 )
    return v11;
  if ( v12 == -1073741536 )
    return v16[0];
  v14 = v11;
  if ( v13 )
    return (unsigned int)-1073741595;
  return v14;
}
