/*
 * XREFs of ApiSetEditionSendIMENotification @ 0x1C020B5D8
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C004FB30 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

PDEVICE_OBJECT *__fastcall ApiSetEditionSendIMENotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // esi
  __int64 v7; // rbp
  PDEVICE_OBJECT v9; // rcx
  char v10; // bl
  void *v11; // r9
  PDEVICE_OBJECT *result; // rax
  void *v13; // r8

  v6 = a3;
  v7 = a2;
  v9 = WPP_GLOBAL_Control;
  v10 = 1;
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
  v11 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      398,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  if ( qword_1C029D0A0 && (int)qword_1C029D0A0(v9, a2, a3, v11) >= 0 && qword_1C029D0A8 )
    qword_1C029D0A8(a1, v7, v6, a4, a5);
  result = &WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)a2 || v10 )
  {
    v13 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
    LOBYTE(v13) = v10;
    return (PDEVICE_OBJECT *)WPP_RECORDER_AND_TRACE_SF_(
                               WPP_GLOBAL_Control->AttachedDevice,
                               a2,
                               (_DWORD)v13,
                               WPP_GLOBAL_Control->DeviceExtension,
                               5,
                               10,
                               399,
                               (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return result;
}
