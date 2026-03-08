/*
 * XREFs of ApiSetEditionxxxBroadcastSPIChange @ 0x1C02435D4
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C009C980 (xxxSystemParametersInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionxxxBroadcastSPIChange(unsigned int a1))(_QWORD, _QWORD, _QWORD)
{
  char v2; // bl
  char v3; // dl
  char v4; // r8
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  char v6; // dl

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      434,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  if ( !qword_1C02D6EC0
    || (result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C02D6EC0(), (int)result >= 0) )
  {
    result = qword_1C02D6EC8;
    if ( qword_1C02D6EC8 )
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C02D6EC8(a1, 0LL, 1LL);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v6 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v6 || v2 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WPP_RECORDER_AND_TRACE_SF_(
                                                             WPP_GLOBAL_Control->AttachedDevice,
                                                             v6,
                                                             v2,
                                                             WPP_GLOBAL_Control->DeviceExtension,
                                                             5,
                                                             10,
                                                             435,
                                                             (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  return result;
}
