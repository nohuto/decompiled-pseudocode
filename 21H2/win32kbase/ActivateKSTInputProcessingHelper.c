/*
 * XREFs of ActivateKSTInputProcessingHelper @ 0x1C0054AB4
 * Callers:
 *     UserKSTInitialize @ 0x1C0054360 (UserKSTInitialize.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C0054C14 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C01E7350 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall ActivateKSTInputProcessingHelper(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  char v4; // di
  void *v5; // r9
  IOCPDispatcher *v6; // rbx
  int v7; // edx
  int v8; // ebx
  int v9; // r8d
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  void *v13; // r8
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-38h] BYREF

  v3 = WPP_GLOBAL_Control;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v5 = &WPP_bb145955459d30c8cddbacb454bf0148_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      26,
      20,
      (__int64)&WPP_bb145955459d30c8cddbacb454bf0148_Traceguids);
  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 2LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C028EE70, (unsigned __int8 *)dword_1C02632CB, 0LL, 0LL, a2, &v14);
  if ( !gpKSTIOCPDispatcher )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, a2, a3);
  v6 = gpKSTIOCPDispatcher;
  if ( !qword_1C0288018 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, a2, a3);
  v8 = anonymous_namespace_::InitializeInputSensorPass1Worker(0LL, v6, a3, v5);
  if ( v8 < 0 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v7) = 0;
    }
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 13;
      goto LABEL_44;
    }
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0288018 + 16LL))(qword_1C0288018);
    if ( v8 < 0 )
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
        || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v7) = 0;
      }
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 12;
LABEL_44:
        WPP_RECORDER_AND_TRACE_SF_sd(
          v11->AttachedDevice,
          v7,
          v9,
          v12,
          2,
          3,
          v12,
          (__int64)&WPP_437c9df7cf1c3a305e8fa8e06029d591_Traceguids,
          (__int64)off_1C0288028,
          v8);
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v7 || v4 )
  {
    v13 = &WPP_bb145955459d30c8cddbacb454bf0148_Traceguids;
    LOBYTE(v13) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      (_DWORD)v13,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      26,
      21,
      (__int64)&WPP_bb145955459d30c8cddbacb454bf0148_Traceguids);
  }
  return v8 >= 0;
}
