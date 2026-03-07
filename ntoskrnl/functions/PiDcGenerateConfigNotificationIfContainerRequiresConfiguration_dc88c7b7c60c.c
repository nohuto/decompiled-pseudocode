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
        goto LABEL_11;
      if ( !v5[0] )
        return (unsigned int)ObjectProperty;
      if ( v7 != 7 )
        goto LABEL_11;
    }
    if ( v3 == -1073741275 )
    {
LABEL_11:
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
    }
    ZwUpdateWnfStateData((__int64)&WNF_PNPC_CONTAINER_CONFIG_REQUESTED, 0LL);
  }
  return (unsigned int)ObjectProperty;
}
