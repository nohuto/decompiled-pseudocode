/*
 * XREFs of ApiSetEditionGetProcessWindowStationEntryPoint @ 0x1C00AD448
 * Callers:
 *     NtUserGetProcessWindowStation @ 0x1C00AD420 (NtUserGetProcessWindowStation.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C00AD53C (IsEditionGetProcessWindowStationEntryPointSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionGetProcessWindowStationEntryPoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_QWORD)
{
  PDEVICE_OBJECT v5; // rcx
  char v6; // bl
  __int64 (__fastcall *result)(_QWORD); // rax
  int v8; // edx
  int v9; // r8d

  v5 = WPP_GLOBAL_Control;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      454,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  result = (__int64 (__fastcall *)(_QWORD))IsEditionGetProcessWindowStationEntryPointSupported(v5, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    result = qword_1C02D6508;
    if ( qword_1C02D6508 )
      result = (__int64 (__fastcall *)(_QWORD))qword_1C02D6508(a1);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)v8 || v6 )
  {
    LOBYTE(v9) = v6;
    return (__int64 (__fastcall *)(_QWORD))WPP_RECORDER_AND_TRACE_SF_(
                                             WPP_GLOBAL_Control->AttachedDevice,
                                             v8,
                                             v9,
                                             WPP_GLOBAL_Control->DeviceExtension,
                                             5,
                                             10,
                                             455,
                                             (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return result;
}
