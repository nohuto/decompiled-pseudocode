_DWORD *__fastcall UsbhGetDeviceInformationEx(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v6; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v8; // rdi
  int DeviceInformation; // eax
  __int64 v10; // rbx
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x28u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  v6 = 64;
  do
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v6, 1112885333LL);
    v8 = Pool2;
    if ( !Pool2 )
    {
      *a2 = -1073741670;
      return 0LL;
    }
    *Pool2 = 0;
    DeviceInformation = Usbh_HubQueryDeviceInformation(a1, a3, (__int64)Pool2, v6, (__int64)&v12);
    v10 = DeviceInformation;
    if ( (DeviceInformation & 0xC0000000) == 0xC0000000 )
    {
      if ( DeviceInformation == -1073741789 )
        v6 = v8[1];
      ExFreePoolWithTag(v8, 0);
      v8 = 0LL;
    }
  }
  while ( (_DWORD)v10 == -1073741789 );
  Log(a1, 32, 1734633848, a3, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        2u,
        0x29u,
        (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
        v10);
  }
  *a2 = v10;
  return v8;
}
