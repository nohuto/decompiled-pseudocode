/*
 * XREFs of ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C00445A0
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

PDEVICE_OBJECT *__fastcall ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  PDEVICE_OBJECT v9; // rcx
  char v10; // si
  void *v11; // r9
  _QWORD *v12; // r14
  __int64 v13; // r8
  __int64 v14; // rcx
  PDEVICE_OBJECT *result; // rax
  void *v16; // r8
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF

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
      338,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  v12 = a5;
  *a5 = v6;
  if ( qword_1C029D5E0 && (int)qword_1C029D5E0(v9, a2, a3, v11) >= 0 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&a5, a2, v13);
    v14 = 0LL;
    v17 = 0LL;
    if ( qword_1C029D5E8 )
    {
      qword_1C029D5E8(a1, v7, v6, a4, &v17);
      v14 = v17;
    }
    *v12 = v14;
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&a5);
  }
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
    v16 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
    LOBYTE(v16) = v10;
    return (PDEVICE_OBJECT *)WPP_RECORDER_AND_TRACE_SF_(
                               WPP_GLOBAL_Control->AttachedDevice,
                               a2,
                               (_DWORD)v16,
                               WPP_GLOBAL_Control->DeviceExtension,
                               5,
                               10,
                               339,
                               (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return result;
}
