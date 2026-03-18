/*
 * XREFs of ActivateKSTInputProcessingHelper @ 0x1C00843D0
 * Callers:
 *     UserKSTInitialize @ 0x1C0084060 (UserKSTInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     InitializeSensorExplicitly @ 0x1C00844F4 (InitializeSensorExplicitly.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 ActivateKSTInputProcessingHelper()
{
  unsigned int v0; // ebx
  char v1; // di
  char v2; // dl
  char v3; // r8
  int v4; // esi
  char v5; // dl
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+48h] [rbp-40h] BYREF

  v0 = 0;
  v1 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v3 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v3 = 0;
  }
  if ( v2 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      20,
      (__int64)&WPP_f24dfba830553ecb8fc554e2a66e2779_Traceguids);
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0289810, (unsigned __int8 *)dword_1C025E31B, 0LL, 0LL, 2u, &v7);
  if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 263LL);
  v4 = InitializeSensorExplicitly();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v5 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v1 = 0;
  if ( v5 || v1 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v1,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      21,
      (__int64)&WPP_f24dfba830553ecb8fc554e2a66e2779_Traceguids);
  LOBYTE(v0) = v4 >= 0;
  return v0;
}
