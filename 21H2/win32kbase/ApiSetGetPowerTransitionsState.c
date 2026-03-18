/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x1C00A2238
 * Callers:
 *     RIMGetCurrentPowerInputMode @ 0x1C00A21D8 (RIMGetCurrentPowerInputMode.c)
 *     rimApplyPointerDevicePolicies @ 0x1C00E70E4 (rimApplyPointerDevicePolicies.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C01B11E4 (rimLidClosedPolicyUpdateStateAndApply.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
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
      88,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  memset(a1, 0, 0x40uLL);
  result = qword_1C029CC38;
  if ( qword_1C029CC38 )
  {
    result = (__int64 (*)(void))qword_1C029CC38();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C029CC40;
      if ( qword_1C029CC40 )
        result = (__int64 (*)(void))qword_1C029CC40(a1);
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
                                89,
                                (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  return result;
}
