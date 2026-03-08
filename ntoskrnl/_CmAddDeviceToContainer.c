/*
 * XREFs of _CmAddDeviceToContainer @ 0x140682764
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x1406825AC (PiDcUpdateDeviceContainerMembership.c)
 *     _CmMoveBaseContainer @ 0x140A618C8 (_CmMoveBaseContainer.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmAddDeviceToContainerWorker @ 0x1406851BC (_CmAddDeviceToContainerWorker.c)
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x14087DBE4 (_PnpObjectRaiseDevicesChangeEvent.c)
 */

__int64 __fastcall CmAddDeviceToContainer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rsi
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  _QWORD v15[11]; // [rsp+40h] [rbp-51h] BYREF

  memset(v15, 0, sizeof(v15));
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  v15[3] = a4;
  v15[2] = a3;
  if ( v9 )
  {
    v10 = v9(a1, a2, 5LL);
    if ( v10 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v10 == -1073741536 )
        goto LABEL_15;
      if ( v10 )
        return (unsigned int)-1073741595;
    }
  }
  v11 = CmAddDeviceToContainerWorker(a1, a2, v15[2], v15[3], (ULONG)&v15[4]);
  v12 = v11;
  if ( !v9 || (LODWORD(v15[0]) = v11, v13 = v9(a1, a2, 5LL), v13 == -1073741822) )
  {
LABEL_9:
    if ( !LOBYTE(v15[4]) )
      PnpObjectRaiseDevicesChangeEvent(a1, a2, 5LL);
    goto LABEL_11;
  }
  if ( v13 != -1073741536 )
  {
    if ( !v13 )
      goto LABEL_9;
    return (unsigned int)-1073741595;
  }
LABEL_15:
  v12 = v15[0];
LABEL_11:
  if ( v12 >= 0 && a5 )
    *a5 = v15[4];
  return (unsigned int)v12;
}
