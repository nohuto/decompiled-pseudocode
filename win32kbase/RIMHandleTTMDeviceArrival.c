/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1C01E273C
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00BC314 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0088EF0 (RawInputManagerDeviceObjectReference.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00BC2F4 (RimDeviceTypeToRimInputType.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqqdS @ 0x1C01E2B90 (WPP_RECORDER_AND_TRACE_SF_dqqdS.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdSD @ 0x1C01E2D7C (WPP_RECORDER_AND_TRACE_SF_qdSD.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1)
{
  int v2; // edx
  int v3; // r8d
  int v4; // edi
  int v5; // edx
  int v6; // edx
  unsigned int v7; // edi
  int v8; // r8d
  int v9; // edx
  int v10; // r8d

  if ( !*(_BYTE *)SGDGetUserGdiSessionState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 49);
  if ( *(_BYTE *)(a1 + 48) == 3 || (*(_DWORD *)(a1 + 200) & 0x40) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v4 = RawInputManagerDeviceObjectReference(*(void **)(a1 + 32));
    if ( v4 >= 0 )
    {
      v5 = *(unsigned __int8 *)(a1 + 48);
      *(_DWORD *)(a1 + 1312) = 0;
      v7 = RimDeviceTypeToRimInputType(a1, v5);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v6) = 0;
      }
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dqqdS(WPP_GLOBAL_Control->AttachedDevice, v6, v8, (_DWORD)WPP_GLOBAL_Control);
      }
      v4 = TtmNotifyDeviceArrival(2LL, a1, &off_1C0281C60, v7);
      if ( v4 < 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 105);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v9) = 0;
        }
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdSD(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            v10,
            *(unsigned __int8 *)(a1 + 48),
            a1 + 208);
        }
        if ( v4 != -1073741768 )
          *(_DWORD *)(a1 + 1312) = 1;
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v2) = 0;
  }
  if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      (_DWORD)gRimLog,
      4,
      1,
      12,
      (__int64)&WPP_520c372abf713e449e1c94695c528942_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
