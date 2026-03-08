/*
 * XREFs of ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1C023F138
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0086318 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  unsigned int v6; // esi
  PDEVICE_OBJECT v8; // rcx
  char v9; // bl
  void *v10; // r9
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  void *v12; // r8

  v6 = a2;
  v8 = WPP_GLOBAL_Control;
  v9 = 1;
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
  v10 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      366,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  result = qword_1C02D77F8;
  if ( qword_1C02D77F8 )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_1C02D77F8(v8, a2, a3, v10);
    if ( (int)result >= 0 )
    {
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_1C02D7800;
      if ( qword_1C02D7800 )
        result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_1C02D7800(a1, v6, 0LL, a4, a5);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( (_BYTE)a2 || v9 )
  {
    v12 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
    LOBYTE(v12) = v9;
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WPP_RECORDER_AND_TRACE_SF_(
                                                                     WPP_GLOBAL_Control->AttachedDevice,
                                                                     a2,
                                                                     (_DWORD)v12,
                                                                     WPP_GLOBAL_Control->DeviceExtension,
                                                                     5,
                                                                     10,
                                                                     367,
                                                                     (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return result;
}
