/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C0044B20
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C005E080 (RIMRegisterForInputWithCallbacks.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C00D0660 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00D3390 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMAddInputOfType @ 0x1C01816C0 (RIMAddInputOfType.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DeviceTypeToRimInputType @ 0x1C0044E70 (DeviceTypeToRimInputType.c)
 *     ApiSetIsRemoteConnection @ 0x1C0047B78 (ApiSetIsRemoteConnection.c)
 *     RIMRegisterForDeviceClassNotifications @ 0x1C00C08A0 (RIMRegisterForDeviceClassNotifications.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C00C1E80 (RIMChildInputTypeIsVirtualized.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(unsigned int *Object)
{
  NTSTATUS v2; // edi
  __int64 v3; // rsi
  _QWORD *v4; // r14
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rdx

  v2 = -1073741811;
  if ( (unsigned __int8)RIMChildInputTypeIsVirtualized(Object[21]) )
    return 0LL;
  if ( (unsigned int)ApiSetIsRemoteConnection() || !*((_QWORD *)Object + 15) )
  {
    return 0;
  }
  else
  {
    v3 = 0LL;
    v4 = Object + 32;
    v5 = Object + 78;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType((unsigned int)v3) & Object[21]) != 0 )
      {
        if ( *(v5 - 11) )
        {
          LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v6,
              v8,
              (_DWORD)gRimLog,
              3,
              1,
              10,
              (__int64)&WPP_e6afa386b7683a2c6333e851e06c64d1_Traceguids);
          }
        }
        else
        {
          if ( !*v5 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
          v2 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v2 >= 0 )
          {
            v2 = RIMRegisterForDeviceClassNotifications(&Object[2 * v3 + 56], v10, *v4, *((_QWORD *)Object + 15));
            if ( v2 < 0 )
              ObfDereferenceObject(Object);
          }
        }
      }
      v3 = (unsigned int)(v3 + 1);
      ++v5;
      v4 += 4;
    }
    while ( (unsigned int)v3 <= 2 );
  }
  return (unsigned int)v2;
}
