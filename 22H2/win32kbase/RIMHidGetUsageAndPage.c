/*
 * XREFs of RIMHidGetUsageAndPage @ 0x1C007FF40
 * Callers:
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005754 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 */

__int64 __fastcall RIMHidGetUsageAndPage(__int64 a1, _WORD *a2, _WORD *a3)
{
  __int64 v5; // rsi
  int DeviceInterfacePropertyData; // ebx
  PDEVICE_OBJECT v9; // r10
  char v10; // dl
  char v11; // r8
  unsigned __int16 v12; // cx
  _DWORD v13[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v14; // [rsp+90h] [rbp+30h] BYREF
  int v15; // [rsp+A8h] [rbp+48h] BYREF

  v13[0] = 5;
  v14 = 0;
  v5 = a1 + 208;
  v15 = 2;
  DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                  a1 + 208,
                                  &DEVPKEY_DeviceInterface_HID_UsageId,
                                  0LL,
                                  0LL,
                                  2,
                                  &v14,
                                  &v15,
                                  v13);
  if ( DeviceInterfacePropertyData < 0 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 41;
LABEL_13:
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)v9->AttachedDevice,
        v10,
        v11,
        (__int64)gRimLog,
        3u,
        1u,
        v12,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        a1,
        DeviceInterfacePropertyData);
    }
  }
  else
  {
    *a2 = v14;
    v14 = 0;
    DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                    v5,
                                    &DEVPKEY_DeviceInterface_HID_UsagePage,
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
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 42;
      goto LABEL_13;
    }
  }
  return (unsigned int)DeviceInterfacePropertyData;
}
