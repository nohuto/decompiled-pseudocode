/*
 * XREFs of ApiSetEditionxxxBroadcastSPIChange @ 0x1C01CE598
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C000CD30 (xxxSystemParametersInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionxxxBroadcastSPIChange(unsigned int a1))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      446,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C0256908 )
    result = (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0256908();
  else
    result = 0LL;
  if ( (int)result >= 0 )
  {
    result = qword_1C0256910;
    if ( qword_1C0256910 )
      result = (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0256910(a1, 0LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (__int64 (__fastcall *)(_QWORD, _QWORD))WPP_RECORDER_SF_(
                                                       WPP_GLOBAL_Control->DeviceExtension,
                                                       5,
                                                       10,
                                                       447,
                                                       (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return result;
}
