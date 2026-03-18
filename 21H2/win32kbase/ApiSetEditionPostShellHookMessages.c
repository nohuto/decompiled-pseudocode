/*
 * XREFs of ApiSetEditionPostShellHookMessages @ 0x1C020ABD8
 * Callers:
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01656A0 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01657EC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01659A0 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionPostShellHookMessages(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  PDEVICE_OBJECT v7; // rcx
  char v8; // bl
  void *v9; // r9
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  void *v11; // r8

  v5 = a3;
  v6 = a2;
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
      450,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  result = qword_1C029C658;
  if ( qword_1C029C658 )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_1C029C658(v7, a2, a3, v9);
    if ( (int)result >= 0 )
    {
      result = qword_1C029C660;
      if ( qword_1C029C660 )
        result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_1C029C660(11LL, v6, v5, a4);
    }
  }
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
    v11 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
    LOBYTE(v11) = v8;
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WPP_RECORDER_AND_TRACE_SF_(
                                                                     WPP_GLOBAL_Control->AttachedDevice,
                                                                     a2,
                                                                     (_DWORD)v11,
                                                                     WPP_GLOBAL_Control->DeviceExtension,
                                                                     5,
                                                                     10,
                                                                     451,
                                                                     (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return result;
}
