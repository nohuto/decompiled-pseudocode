/*
 * XREFs of ApiSetResetLastSeenFrameId @ 0x1C020F0D4
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C003BCDC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01C1E20 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01C2E94 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     GetNextFrameId @ 0x1C01E7B50 (GetNextFrameId.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*ApiSetResetLastSeenFrameId())(void)
{
  struct tagDESKTOP *v0; // rdi
  char v1; // bl
  char v2; // dl
  char v3; // r8
  __int64 (*result)(void); // rax
  char v5; // dl

  v0 = grpdeskRitInput;
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
      214,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  result = qword_1C029D200;
  if ( qword_1C029D200 )
  {
    result = (__int64 (*)(void))qword_1C029D200();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C029D208;
      if ( qword_1C029D208 )
        result = (__int64 (*)(void))qword_1C029D208(v0);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v5 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v1 = 0;
  if ( v5 || v1 )
    return (__int64 (*)(void))WPP_RECORDER_AND_TRACE_SF_(
                                WPP_GLOBAL_Control->AttachedDevice,
                                v5,
                                v1,
                                WPP_GLOBAL_Control->DeviceExtension,
                                5,
                                10,
                                215,
                                (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  return result;
}
