/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C0052D04
 * Callers:
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C0052530 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0088530 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00C4100 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMAddInputOfType @ 0x1C0154D80 (RIMAddInputOfType.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ApiSetIsRemoteConnection @ 0x1C00540CC (ApiSetIsRemoteConnection.c)
 *     DeviceTypeToRimInputType @ 0x1C0054500 (DeviceTypeToRimInputType.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0055848 (RIMChildInputTypeIsVirtualized.c)
 *     RIMRegisterForDeviceClassNotifications @ 0x1C005632C (RIMRegisterForDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(unsigned int *Object)
{
  NTSTATUS v2; // edi
  unsigned int v3; // esi
  _QWORD *v4; // r14
  _QWORD *v5; // rbp
  int v6; // edx
  __int64 v8; // rdx

  v2 = -1073741811;
  if ( (unsigned __int8)RIMChildInputTypeIsVirtualized(Object[21]) )
    return 0LL;
  if ( (unsigned int)ApiSetIsRemoteConnection() || !*((_QWORD *)Object + 15) )
  {
    return 0;
  }
  else
  {
    v3 = 0;
    v4 = Object + 32;
    v5 = Object + 78;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v3) & Object[21]) != 0 )
      {
        if ( *(v5 - 11) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v6, 1, 10, (__int64)&WPP_df94dad8867032b8c081d01056e0c1c5_Traceguids);
          }
        }
        else
        {
          if ( !*v5 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 112LL);
          v2 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v2 >= 0 )
          {
            v2 = RIMRegisterForDeviceClassNotifications(&Object[2 * v3 + 56], v8, *v4, *((_QWORD *)Object + 15));
            if ( v2 < 0 )
              ObfDereferenceObject(Object);
          }
        }
      }
      ++v3;
      ++v5;
      v4 += 4;
    }
    while ( v3 <= 2 );
  }
  return (unsigned int)v2;
}
