/*
 * XREFs of ApiSetEditionxxxReportMouseBreakToAccessibility @ 0x1C0044458
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C0040DAC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionxxxReportMouseBreakToAccessibility(unsigned int a1, __int64 *a2, __int64 a3)
{
  char v3; // bl
  unsigned int v4; // ebp
  unsigned int v5; // edi
  __int64 *v6; // rsi
  PDEVICE_OBJECT v8; // rcx
  void *v9; // r9
  __int64 v10; // xmm0_8
  void *v12; // r8
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]

  v3 = 1;
  v4 = a3;
  v5 = 1;
  v6 = a2;
  v8 = WPP_GLOBAL_Control;
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
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      318,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  if ( qword_1C029D520 && (int)qword_1C029D520(v8, a2, a3, v9) >= 0 )
  {
    v10 = *v6;
    if ( qword_1C029D528 )
    {
      v14 = *((_DWORD *)v6 + 2);
      v13 = v10;
      v5 = qword_1C029D528(a1, &v13, v4);
    }
    else
    {
      v5 = 0;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( (_BYTE)a2 || v3 )
  {
    v12 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
    LOBYTE(v12) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)v12,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      319,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return v5;
}
