/*
 * XREFs of RIMGetPanelId @ 0x1C00A1AB8
 * Callers:
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1C00A1A54 (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     RIMGetDeviceLocationInfo @ 0x1C01928F4 (RIMGetDeviceLocationInfo.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01990C8 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMGetPointerDevicePDO @ 0x1C00A1C34 (RIMGetPointerDevicePDO.c)
 */

__int64 __fastcall RIMGetPanelId(struct _DEVICE_OBJECT *a1, _WORD *a2, ULONG a3)
{
  NTSTATUS DevicePropertyData; // ebx
  int v5; // edx
  int v6; // r8d
  PDEVICE_OBJECT v8; // rcx
  __int16 v9; // r9
  ULONG Type; // [rsp+80h] [rbp+18h] BYREF
  ULONG RequiredSize; // [rsp+88h] [rbp+20h] BYREF

  Type = a3;
  *a2 = 0;
  DevicePropertyData = RIMGetPointerDevicePDO(a1);
  if ( DevicePropertyData >= 0 )
  {
    Type = 0;
    RequiredSize = 114;
    DevicePropertyData = IoGetDevicePropertyData(0LL, &DEVPKEY_Device_PanelId, 0, 0, 0x72u, a2, &RequiredSize, &Type);
    if ( DevicePropertyData == -1073741772 )
    {
      DevicePropertyData = 0;
    }
    else if ( DevicePropertyData >= 0 )
    {
      if ( Type == 18 )
      {
        if ( RequiredSize )
        {
          if ( !a2[((unsigned __int64)RequiredSize >> 1) - 1] )
            goto LABEL_4;
          DevicePropertyData = -1073741823;
          v8 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v5) = 0;
          }
          LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_4;
          v9 = 25;
        }
        else
        {
          DevicePropertyData = -1073741823;
          v8 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v5) = 0;
          }
          LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_4;
          v9 = 24;
        }
      }
      else
      {
        DevicePropertyData = -1073741823;
        v8 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v5) = 0;
        }
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_4;
        v9 = 23;
      }
      WPP_RECORDER_AND_TRACE_SF_(
        v8->AttachedDevice,
        v5,
        v6,
        (_DWORD)gRimLog,
        3,
        1,
        v9,
        (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v5) = 0;
      }
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v5,
          v6,
          (_DWORD)gRimLog,
          3,
          1,
          22,
          (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids,
          DevicePropertyData);
      }
    }
LABEL_4:
    ObfDereferenceObject(0LL);
  }
  return (unsigned int)DevicePropertyData;
}
