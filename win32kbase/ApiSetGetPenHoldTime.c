/*
 * XREFs of ApiSetGetPenHoldTime @ 0x1C02448CC
 * Callers:
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C01FC9AC (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetGetPenHoldTime()
{
  unsigned int v0; // edi
  char v1; // bl
  char v2; // dl
  char v3; // r8
  char v4; // dl

  v0 = 0;
  v1 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
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
      10,
      196,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  if ( qword_1C02D79D8 && (int)qword_1C02D79D8() >= 0 && qword_1C02D79E0 )
    v0 = qword_1C02D79E0();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v1 = 0;
  if ( v4 || v1 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v1,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      197,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  return v0;
}
