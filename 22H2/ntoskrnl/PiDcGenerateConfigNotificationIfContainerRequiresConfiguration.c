/*
 * XREFs of PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140772660
 * Callers:
 *     PiDcHandleContainerEvent @ 0x14075B204 (PiDcHandleContainerEvent.c)
 *     PiDcInit @ 0x140A53024 (PiDcInit.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     _PnpGetObjectProperty @ 0x1406B095C (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x1407420C4 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PiDcGenerateConfigNotificationIfContainerRequiresConfiguration(__int64 a1)
{
  int ObjectProperty; // ebx
  int v3; // eax
  _DWORD v5[4]; // [rsp+60h] [rbp-10h] BYREF
  char v6; // [rsp+A8h] [rbp+38h] BYREF
  int v7; // [rsp+B0h] [rbp+40h] BYREF
  int v8; // [rsp+B8h] [rbp+48h] BYREF

  v7 = 0;
  v8 = 0;
  v5[0] = 0;
  v6 = 0;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     5LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_DeviceContainer_IsConnected,
                     (__int64)&v7,
                     (__int64)&v6,
                     1,
                     (__int64)&v8,
                     0);
  if ( ObjectProperty >= 0 && v6 && v7 == 17 )
  {
    v3 = PnpGetObjectProperty(
           *(__int64 *)&PiPnpRtlCtx,
           a1,
           5LL,
           0LL,
           0LL,
           (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
           (__int64)&v7,
           (__int64)v5,
           4,
           (__int64)&v8,
           0);
    ObjectProperty = v3;
    if ( v3 >= 0 )
    {
      if ( v7 != 7 )
        goto LABEL_10;
      if ( !v5[0] )
        return (unsigned int)ObjectProperty;
    }
    if ( v3 != -1073741275 )
    {
LABEL_9:
      ZwUpdateWnfStateData(&WNF_PNPC_CONTAINER_CONFIG_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
      return (unsigned int)ObjectProperty;
    }
LABEL_10:
    ObjectProperty = PnpSetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a1,
                       5u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                       7,
                       (__int64)&unconfiguredConfigFlags,
                       4u,
                       0);
    if ( ObjectProperty < 0 )
      return (unsigned int)ObjectProperty;
    goto LABEL_9;
  }
  return (unsigned int)ObjectProperty;
}
