__int64 __fastcall UsbhGetHubDeviceInformation(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r15
  __int64 DeviceHandle; // rbp
  unsigned int v7; // esi
  _DWORD *Pool2; // rax
  __int64 v9; // rdi
  int DeviceInformation; // esi
  __int128 v11; // xmm0
  int v12; // r8d
  int v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF

  v14 = 0;
  v4 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      24,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  v7 = 64;
  while ( 1 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v7, 1112885333LL);
    v9 = (__int64)Pool2;
    if ( !Pool2 )
    {
      Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a2, 1212445810LL);
      return 3221225626LL;
    }
    *Pool2 = 0;
    DeviceInformation = Usbh_HubQueryDeviceInformation(a1, DeviceHandle, (_DWORD)Pool2, v7, (__int64)&v14);
    if ( DeviceInformation != -1073741789 )
      break;
    v7 = *(_DWORD *)(v9 + 4);
    ExFreePoolWithTag((PVOID)v9, 0);
  }
  Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a2, 1212445810LL);
  if ( DeviceInformation >= 0 )
  {
    v4[633] = *(_DWORD *)(v9 + 44);
    v4[634] = *(_DWORD *)(v9 + 40);
    v11 = *(_OWORD *)(v9 + 12);
    v13 = 0;
    *(_OWORD *)(v4 + 635) = v11;
    *((_WORD *)v4 + 1278) = *(_WORD *)(v9 + 28);
    Log(a1, 8, 1768842800, v9, (__int64)v4);
    Log(a1, 8, 1768842872, (int)v4[634], (int)v4[633]);
    if ( !(unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v4 + 2540, v12, (unsigned int)&v13, 0LL) )
    {
      DeviceInformation = -1073741811;
      UsbhException(a1, 0, 64, (_DWORD)v4 + 2540, 18, -1073741811, v13, usbfile_hub_c, 4205, 0);
    }
  }
  ExFreePoolWithTag((PVOID)v9, 0);
  Log(a1, 8, 1768842814, DeviceInformation, 0LL);
  return (unsigned int)DeviceInformation;
}
