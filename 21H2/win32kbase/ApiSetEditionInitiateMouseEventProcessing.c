/*
 * XREFs of ApiSetEditionInitiateMouseEventProcessing @ 0x1C00376A8
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0035E4C (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C00B08DC (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionInitiateMouseEventProcessing(unsigned int a1))(void)
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
      330,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  result = qword_1C029D590;
  if ( qword_1C029D590 )
  {
    result = (__int64 (*)(void))qword_1C029D590();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C029D598;
      if ( qword_1C029D598 )
        result = (__int64 (*)(void))qword_1C029D598(a1);
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
                                331,
                                (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  return result;
}
