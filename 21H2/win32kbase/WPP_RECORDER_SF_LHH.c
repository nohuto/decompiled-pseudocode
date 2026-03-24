/*
 * XREFs of WPP_RECORDER_SF_LHH @ 0x1C01A14E4
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01894F0 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_LHH(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  struct RECORDER_LOG__ *v5; // rbx
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v5 = gBaseLog;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids,
      326LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      2LL,
      va2,
      2LL,
      0LL);
  LOWORD(v7) = 326;
  return WppAutoLogTrace(
           v5,
           2LL,
           7LL,
           &WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           2LL,
           va2,
           2LL,
           0LL);
}
