/*
 * XREFs of _CmDeleteDeviceInterface @ 0x140A5E93C
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x1406C8CF0 (_PnpDispatchDeviceInterface.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 *     PnpDeleteDeviceInterfaces @ 0x1409534E4 (PnpDeleteDeviceInterfaces.c)
 *     PiCMUnregisterDeviceInterface @ 0x140967D60 (PiCMUnregisterDeviceInterface.c)
 *     _CmDeleteDeviceWorker @ 0x140A5F74C (_CmDeleteDeviceWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x140A5EEA4 (_CmDeleteDeviceInterfaceWorker.c)
 */

__int64 __fastcall CmDeleteDeviceInterface(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD v14[22]; // [rsp+40h] [rbp-88h] BYREF

  memset(v14, 0, sizeof(v14));
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  v14[4] = a3;
  if ( v6 )
  {
    v7 = v6(a1, a2, 3LL);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v14[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = CmDeleteDeviceInterfaceWorker(a1, a2, v14[4]);
  v9 = v8;
  if ( !v6 )
    return v9;
  v14[0] = v8;
  v10 = v6(a1, a2, 3LL);
  v11 = v10;
  if ( v10 == -1073741822 )
    return v9;
  if ( v10 == -1073741536 )
    return v14[0];
  v12 = v9;
  if ( v11 )
    return (unsigned int)-1073741595;
  return v12;
}
