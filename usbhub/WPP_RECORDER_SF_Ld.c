/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C005D000
 * Callers:
 *     GetPersistedKeyPath @ 0x1C005C6E4 (GetPersistedKeyPath.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Ld(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  int v8[6]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v8[0] = -1073741670;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, int *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      11LL,
      va,
      4LL,
      v8,
      4LL,
      0LL);
  LOWORD(v7) = 11;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_5169c4c8089132207a438b4341aed5b6_Traceguids, v7, va);
}
