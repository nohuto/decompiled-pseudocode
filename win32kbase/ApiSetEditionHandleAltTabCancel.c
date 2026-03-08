/*
 * XREFs of ApiSetEditionHandleAltTabCancel @ 0x1C00BA778
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C008097C (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsEditionHandleAltTabCancelSupported @ 0x1C00BA8BC (IsEditionHandleAltTabCancelSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionHandleAltTabCancel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        int a6,
        int a7)
{
  __int64 v8; // r14
  unsigned int v9; // r15d
  PDEVICE_OBJECT v11; // rcx
  char v12; // di
  void *v13; // r9
  unsigned int v14; // esi
  int v15; // edx
  void *v17; // r8
  int v18; // [rsp+20h] [rbp-48h]

  v8 = a3;
  v9 = a2;
  v11 = WPP_GLOBAL_Control;
  v12 = 1;
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
  v13 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      404,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  v14 = 0;
  if ( (int)IsEditionHandleAltTabCancelSupported(v11, a2, a3, v13) >= 0 && qword_1C02D7900 )
  {
    LOBYTE(v18) = a5;
    v14 = qword_1C02D7900(a1, v9, v8, a4, v18, a6, a7);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v15) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( (_BYTE)v15 || v12 )
  {
    v17 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
    LOBYTE(v17) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v15,
      (_DWORD)v17,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      405,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return v14;
}
