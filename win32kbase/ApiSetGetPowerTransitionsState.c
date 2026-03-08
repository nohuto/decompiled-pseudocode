/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x1C00BC570
 * Callers:
 *     RIMGetCurrentPowerInputMode @ 0x1C00BC3E0 (RIMGetCurrentPowerInputMode.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1C01D6304 (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C01D8B9C (rimLidClosedPolicyUpdateStateAndApply.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 (*__fastcall ApiSetGetPowerTransitionsState(void *a1))(void)
{
  char v2; // bl
  char v3; // dl
  char v4; // r8
  __int64 (*result)(void); // rax
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
      78,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  memset(a1, 0, 0x40uLL);
  result = qword_1C02D7420;
  if ( qword_1C02D7420 )
  {
    result = (__int64 (*)(void))qword_1C02D7420();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02D7428;
      if ( qword_1C02D7428 )
        result = (__int64 (*)(void))qword_1C02D7428(a1);
    }
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
    return (__int64 (*)(void))WPP_RECORDER_AND_TRACE_SF_(
                                WPP_GLOBAL_Control->AttachedDevice,
                                v6,
                                v2,
                                WPP_GLOBAL_Control->DeviceExtension,
                                5,
                                10,
                                79,
                                (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  return result;
}
