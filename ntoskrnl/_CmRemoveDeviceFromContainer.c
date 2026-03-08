/*
 * XREFs of _CmRemoveDeviceFromContainer @ 0x140A619AC
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x1406825AC (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcResetChildDeviceContainers @ 0x140958510 (PiDcResetChildDeviceContainers.c)
 *     _CmDeleteDeviceWorker @ 0x140A5F74C (_CmDeleteDeviceWorker.c)
 *     _CmMoveBaseContainer @ 0x140A618C8 (_CmMoveBaseContainer.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x14087DBE4 (_PnpObjectRaiseDevicesChangeEvent.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140A61AEC (_CmRemoveDeviceFromContainerWorker.c)
 */

__int64 __fastcall CmRemoveDeviceFromContainer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rsi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  _QWORD v14[12]; // [rsp+40h] [rbp-51h] BYREF

  memset(v14, 0, 0x58uLL);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  v14[3] = a4;
  v14[2] = a3;
  if ( v8 )
  {
    v9 = v8(a1, a2, 5LL);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return LODWORD(v14[0]);
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  v10 = CmRemoveDeviceFromContainerWorker(a1, a2, v14[2], v14[3], &v14[4]);
  v11 = v10;
  if ( v8 )
  {
    LODWORD(v14[0]) = v10;
    v12 = v8(a1, a2, 5LL);
    if ( v12 != -1073741822 )
    {
      if ( v12 != -1073741536 )
      {
        if ( !v12 )
          goto LABEL_8;
        return (unsigned int)-1073741595;
      }
      return LODWORD(v14[0]);
    }
  }
LABEL_8:
  if ( !LOBYTE(v14[4]) )
    PnpObjectRaiseDevicesChangeEvent(a1, a2, 5LL);
  return v11;
}
