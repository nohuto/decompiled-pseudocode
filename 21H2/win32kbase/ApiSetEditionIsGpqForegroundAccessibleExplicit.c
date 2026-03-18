/*
 * XREFs of ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C003EB54
 * Callers:
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C0005350 (ProcessKeyboardInjectedInputViaRim.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003DC00 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01D012C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundAccessibleExplicit(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  PDEVICE_OBJECT v8; // rcx
  char v9; // di
  void *v10; // r9
  unsigned int v11; // esi
  void *v13; // r8

  v5 = a3;
  v6 = a2;
  v8 = WPP_GLOBAL_Control;
  v9 = 1;
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
  v10 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      190,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  v11 = 0;
  if ( qword_1C029CEB0 && (int)qword_1C029CEB0(v8, a2, a3, v10) >= 0 && qword_1C029CEB8 )
    v11 = qword_1C029CEB8(a1, v6, v5, a4);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( (_BYTE)a2 || v9 )
  {
    v13 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v13,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      191,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return v11;
}
