/*
 * XREFs of PiDcContainerRequiresConfiguration @ 0x1408793AC
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x1406825AC (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140688AC8 (PiDcHandleCustomDeviceEvent.c)
 *     PiDcHandleDeviceEvent @ 0x1407F8294 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x1407F8364 (PiDcHandleInterfaceEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x1409582A0 (PiDcHandleSystemFirmwareUpdate.c)
 * Callees:
 *     wcscmp @ 0x1403D5DD0 (wcscmp.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiDcContainerRequiresConfiguration(wchar_t *Str2)
{
  int ObjectProperty; // ebx
  int v4; // [rsp+88h] [rbp+10h] BYREF
  int v5; // [rsp+90h] [rbp+18h] BYREF
  int v6; // [rsp+98h] [rbp+20h] BYREF

  ObjectProperty = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
  {
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)Str2,
                       5LL,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                       (__int64)&v4,
                       (__int64)&v5,
                       4,
                       (__int64)&v6,
                       0);
    if ( ObjectProperty < 0 || v4 != 7 || v5 != -1 )
    {
      ObjectProperty = PnpSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)Str2,
                         5u,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                         7,
                         (__int64)&unconfiguredConfigFlags,
                         4u,
                         0);
      if ( ObjectProperty >= 0 )
        ZwUpdateWnfStateData((__int64)&WNF_PNPC_CONTAINER_CONFIG_REQUESTED, 0LL);
    }
  }
  return (unsigned int)ObjectProperty;
}
