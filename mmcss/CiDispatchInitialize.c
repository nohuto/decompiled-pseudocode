NTSTATUS __fastcall CiDispatchInitialize(struct _DRIVER_OBJECT *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  __int64 DeviceCharacteristics; // [rsp+20h] [rbp-28h]

  a1->FastIoDispatch = (PFAST_IO_DISPATCH)&CiFastIoDispatch;
  a1->MajorFunction[0] = (PDRIVER_DISPATCH)CiDispatchCreate;
  a1->MajorFunction[18] = (PDRIVER_DISPATCH)CiDispatchCleanup;
  a1->MajorFunction[2] = (PDRIVER_DISPATCH)CiDispatchClose;
  a1->DriverUnload = (PDRIVER_UNLOAD)CiDriverUnload;
  result = IoCreateDevice(a1, 0, (PUNICODE_STRING)0x1C0010020LL, 0x22u, 0x20000u, 0, &CiDeviceObject);
  v2 = result;
  if ( result >= 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_Zq((__int64)WPP_GLOBAL_Control->AttachedDevice);
    return v2;
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    LODWORD(DeviceCharacteristics) = result;
    WPP_SF_Zd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x14u,
      (__int64)&WPP_69ae99e199ca39a7c7a05b58b80334a5_Traceguids,
      (const wchar_t *)0x1C0010020LL,
      DeviceCharacteristics);
    return v2;
  }
  return result;
}
