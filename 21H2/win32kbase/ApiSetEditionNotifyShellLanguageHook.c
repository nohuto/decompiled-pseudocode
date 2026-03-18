/*
 * XREFs of ApiSetEditionNotifyShellLanguageHook @ 0x1C004F120
 * Callers:
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C004E28C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C004EC08 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C004FB30 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionNotifyShellLanguageHook(
        __int64 a1,
        __int64 a2,
        __int64 a3))(_QWORD, _QWORD, _QWORD)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  PDEVICE_OBJECT v6; // rcx
  char v7; // bl
  void *v8; // r9
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
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
  v8 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      390,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C029D060;
  if ( qword_1C029D060 )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C029D060(v6, a2, a3, v8);
    if ( (int)result >= 0 )
    {
      result = qword_1C029D068;
      if ( qword_1C029D068 )
        result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C029D068(a1, v4, v3);
    }
  }
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
    v10 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
    LOBYTE(v10) = v7;
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WPP_RECORDER_AND_TRACE_SF_(
                                                             WPP_GLOBAL_Control->AttachedDevice,
                                                             a2,
                                                             (_DWORD)v10,
                                                             WPP_GLOBAL_Control->DeviceExtension,
                                                             5,
                                                             10,
                                                             391,
                                                             (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return result;
}
