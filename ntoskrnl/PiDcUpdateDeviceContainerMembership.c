__int64 __fastcall PiDcUpdateDeviceContainerMembership(__int64 a1, int a2, const wchar_t *a3)
{
  int DeviceContainerIdFromBase; // ebx
  int DeviceRegProp; // eax
  __int64 v8; // rax
  _BYTE v10[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Str2[40]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[80]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t v16[40]; // [rsp+100h] [rbp+0h] BYREF

  v10[0] = 0;
  P[0] = 0LL;
  v12 = 0;
  v11 = 0;
  DeviceContainerIdFromBase = PiPnpRtlBeginOperation(P);
  if ( DeviceContainerIdFromBase >= 0 )
  {
    v11 = 78;
    DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, a1, a2, 37, (__int64)&v12, (__int64)Str2, (__int64)&v11, 0);
    DeviceContainerIdFromBase = DeviceRegProp;
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp != -1073741275 )
        goto LABEL_12;
    }
    else if ( wcsicmp(a3, Str2) )
    {
      DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1, Str2, v15);
      if ( DeviceContainerIdFromBase < 0 )
        goto LABEL_12;
      DeviceContainerIdFromBase = CmRemoveDeviceFromContainer(*(_QWORD *)&PiPnpRtlCtx, v15, Str2, a1);
      if ( DeviceContainerIdFromBase < 0 )
        goto LABEL_12;
      PiDcResetChildDeviceContainers(a1, v15);
    }
    DeviceContainerIdFromBase = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1, a3, v16);
    if ( DeviceContainerIdFromBase >= 0 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a3[v8] );
      DeviceContainerIdFromBase = CmSetDeviceRegProp(PiPnpRtlCtx, a1, a2, 37, 1, (__int64)a3, 2 * (int)v8 + 2, 0);
      if ( DeviceContainerIdFromBase >= 0 )
      {
        if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
        {
          DeviceContainerIdFromBase = CmAddDeviceToContainer(PiPnpRtlCtx, (unsigned int)v16, (__int64)v10);
          if ( DeviceContainerIdFromBase >= 0 && !v10[0] )
            PiDcContainerRequiresConfiguration(v16);
        }
      }
    }
  }
LABEL_12:
  if ( P[0] )
    PiPnpRtlEndOperation(P[0]);
  return (unsigned int)DeviceContainerIdFromBase;
}
