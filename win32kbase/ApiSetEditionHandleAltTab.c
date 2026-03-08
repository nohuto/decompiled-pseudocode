/*
 * XREFs of ApiSetEditionHandleAltTab @ 0x1C00CBA50
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

PDEVICE_OBJECT *__fastcall ApiSetEditionHandleAltTab(
        char a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int16 a8)
{
  unsigned __int16 v9; // si
  unsigned __int16 v10; // bp
  PDEVICE_OBJECT v12; // rcx
  char v13; // bl
  void *v14; // r9
  __int64 v15; // rcx
  PDEVICE_OBJECT *result; // rax
  void *v17; // r8
  int v18; // [rsp+38h] [rbp-30h]

  v9 = a3;
  v10 = a2;
  v12 = WPP_GLOBAL_Control;
  v13 = 1;
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
  v14 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      406,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  if ( qword_1C02D7908 && (int)qword_1C02D7908(v12, a2, a3, v14) >= 0 && qword_1C02D7910 )
  {
    LOWORD(v18) = a8;
    v15 = a5;
    LOBYTE(v15) = a1;
    qword_1C02D7910(v15, v10, v9, a4, a5, a6, a7, v18);
  }
  result = &WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v13 = 0;
  if ( (_BYTE)a2 || v13 )
  {
    v17 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
    LOBYTE(v17) = v13;
    return (PDEVICE_OBJECT *)WPP_RECORDER_AND_TRACE_SF_(
                               WPP_GLOBAL_Control->AttachedDevice,
                               a2,
                               (_DWORD)v17,
                               WPP_GLOBAL_Control->DeviceExtension,
                               5,
                               10,
                               407,
                               (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return result;
}
