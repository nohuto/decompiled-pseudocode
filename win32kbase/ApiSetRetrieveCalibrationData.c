/*
 * XREFs of ApiSetRetrieveCalibrationData @ 0x1C0246200
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01BA8B0 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ApiSetRetrieveCalibrationData(__int64 a1, __int128 *a2, __int64 a3))(_QWORD, _QWORD)
{
  __int128 *v3; // rdi
  PDEVICE_OBJECT v5; // rcx
  char v6; // bl
  void *v7; // r9
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax
  void *v9; // r8
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  v3 = a2;
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
  v7 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      70,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C02D73E0;
  if ( qword_1C02D73E0 )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C02D73E0(v5, a2, a3, v7);
    if ( (int)result >= 0 )
    {
      result = qword_1C02D73E8;
      if ( qword_1C02D73E8 )
      {
        v10 = *v3;
        result = (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C02D73E8(a1, &v10);
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)a2 || v6 )
  {
    v9 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
    LOBYTE(v9) = v6;
    return (__int64 (__fastcall *)(_QWORD, _QWORD))WPP_RECORDER_AND_TRACE_SF_(
                                                     WPP_GLOBAL_Control->AttachedDevice,
                                                     (_DWORD)a2,
                                                     (_DWORD)v9,
                                                     WPP_GLOBAL_Control->DeviceExtension,
                                                     5,
                                                     10,
                                                     71,
                                                     (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return result;
}
