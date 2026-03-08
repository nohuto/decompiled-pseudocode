/*
 * XREFs of ApiSetInkProcessorIsInkDevice @ 0x1C0244F58
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0035100 (RIMCreateHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C01AC4D4 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C01B0738 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01B10CC (RIMVirtCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetInkProcessorIsInkDevice(unsigned __int16 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int16 v4; // bp
  PDEVICE_OBJECT v6; // rcx
  char v7; // bl
  void *v8; // r9
  unsigned int v9; // edi
  void *v10; // r8

  v3 = a3;
  v4 = a2;
  v6 = WPP_GLOBAL_Control;
  v7 = 1;
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
  v8 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      92,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  v9 = 0;
  if ( qword_1C02D74A0 && (int)qword_1C02D74A0(v6, a2, a3, v8) >= 0 && qword_1C02D74A8 )
    v9 = qword_1C02D74A8(a1, v4, v3, 0LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v7 = 0;
  if ( (_BYTE)a2 || v7 )
  {
    v10 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
    LOBYTE(v10) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v10,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      93,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return v9;
}
