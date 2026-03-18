/*
 * XREFs of ApiSetEditionPromotePointer @ 0x1C020AEBC
 * Callers:
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C01D2F20 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionPromotePointer(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ebp
  PDEVICE_OBJECT v7; // rcx
  char v8; // bl
  void *v9; // r9
  void *v10; // r8

  v3 = a3;
  v4 = 0;
  v5 = a2;
  v7 = WPP_GLOBAL_Control;
  v8 = 1;
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
  v9 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      254,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  if ( qword_1C029D350 && (int)qword_1C029D350(v7, a2, a3, v9) >= 0 && qword_1C029D358 )
    v4 = qword_1C029D358(a1, v5, v3);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v8 = 0;
  if ( (_BYTE)a2 || v8 )
  {
    v10 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
    LOBYTE(v10) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v10,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      255,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return v4;
}
