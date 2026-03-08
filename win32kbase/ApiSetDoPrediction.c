/*
 * XREFs of ApiSetDoPrediction @ 0x1C023BFD0
 * Callers:
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C01D93A8 (rimPredictionPolicyUpdateStateAndApply.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

PDEVICE_OBJECT *__fastcall ApiSetDoPrediction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  PDEVICE_OBJECT v11; // rcx
  char v12; // si
  void *v13; // r9
  PDEVICE_OBJECT *result; // rax
  void *v15; // r8

  v8 = a3;
  v9 = a2;
  v11 = WPP_GLOBAL_Control;
  v12 = 1;
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
  v13 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      64,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  if ( qword_1C02D73B0 && (int)qword_1C02D73B0(v11, a2, a3, v13) >= 0 )
  {
    if ( qword_1C02D73B8 )
      qword_1C02D73B8(a1, v9, v8, a4, a5, a6, a7);
  }
  else
  {
    *a6 = v9;
    *a7 = v8;
  }
  result = &WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( (_BYTE)a2 || v12 )
  {
    v15 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
    LOBYTE(v15) = v12;
    return (PDEVICE_OBJECT *)WPP_RECORDER_AND_TRACE_SF_(
                               WPP_GLOBAL_Control->AttachedDevice,
                               a2,
                               (_DWORD)v15,
                               WPP_GLOBAL_Control->DeviceExtension,
                               5,
                               10,
                               65,
                               (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return result;
}
