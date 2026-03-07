__int64 __fastcall RIMHidGetVendorAndProductID(__int64 a1, _WORD *a2, _WORD *a3)
{
  char v3; // r14
  __int64 v5; // rsi
  int v7; // edx
  int DeviceInterfacePropertyData; // ebx
  int v9; // r8d
  PDEVICE_OBJECT v11; // r10
  __int16 v12; // cx
  _DWORD v13[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v14; // [rsp+90h] [rbp+30h] BYREF
  int v15; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a1;
  v13[0] = 5;
  v14 = 0;
  v5 = a1 + 208;
  v15 = 2;
  DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                  a1 + 208,
                                  &DEVPKEY_DeviceInterface_HID_VendorId,
                                  0LL,
                                  0LL,
                                  2,
                                  &v14,
                                  &v15,
                                  v13);
  if ( DeviceInterfacePropertyData < 0 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v7) = 0;
    }
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 43;
LABEL_13:
      WPP_RECORDER_AND_TRACE_SF_qd(
        v11->AttachedDevice,
        v7,
        v9,
        (_DWORD)gRimLog,
        3,
        1,
        v12,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v3,
        DeviceInterfacePropertyData);
    }
  }
  else
  {
    *a2 = v14;
    v14 = 0;
    DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                    v5,
                                    &DEVPKEY_DeviceInterface_HID_ProductId,
                                    0LL,
                                    0LL,
                                    v15,
                                    &v14,
                                    &v15,
                                    v13);
    if ( DeviceInterfacePropertyData >= 0 )
    {
      *a3 = v14;
      return (unsigned int)DeviceInterfacePropertyData;
    }
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v7) = 0;
    }
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 44;
      goto LABEL_13;
    }
  }
  return (unsigned int)DeviceInterfacePropertyData;
}
