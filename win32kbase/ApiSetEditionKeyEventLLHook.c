/*
 * XREFs of ApiSetEditionKeyEventLLHook @ 0x1C0080144
 * Callers:
 *     xxxKeyEventEx @ 0x1C007F2E0 (xxxKeyEventEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EditionKeyEventLLHook @ 0x1C00802C8 (EditionKeyEventLLHook.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionKeyEventLLHook(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  unsigned __int16 v13; // bp
  unsigned __int16 v14; // r14
  PDEVICE_OBJECT v16; // rcx
  char v17; // bl
  void *v18; // r9
  unsigned int v19; // edi

  v13 = a3;
  v14 = a2;
  v16 = WPP_GLOBAL_Control;
  v17 = 1;
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
  v18 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      400,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  v19 = 0;
  if ( qword_1C02D78D8 && (int)qword_1C02D78D8(v16, a2, a3, v18) >= 0 )
    v19 = EditionKeyEventLLHook(a1, v14, v13, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v17 = 0;
  if ( (_BYTE)a2 || v17 )
  {
    LOBYTE(a3) = v17;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      401,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return v19;
}
