/*
 * XREFs of ApiSetProcessHidRawInput @ 0x1C01D02A0
 * Callers:
 *     rimProcessHidInput @ 0x1C017573C (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01785C4 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     IsProcessHidRawInputSupported @ 0x1C00B6828 (IsProcessHidRawInputSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ApiSetProcessHidRawInput(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      86,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  result = (__int64 (__fastcall *)(_QWORD))IsProcessHidRawInputSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C0258010;
    if ( qword_1C0258010 )
      result = (__int64 (__fastcall *)(_QWORD))qword_1C0258010(a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (__int64 (__fastcall *)(_QWORD))WPP_RECORDER_SF_(
                                               WPP_GLOBAL_Control->DeviceExtension,
                                               5,
                                               10,
                                               87,
                                               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return result;
}
