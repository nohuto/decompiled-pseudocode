/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C0131A10
 * Callers:
 *     NtMapVisualRelativePoints @ 0x1C0131660 (NtMapVisualRelativePoints.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C0195710 (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_ii(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               a8,
               a7,
               (__int64 *)va,
               8LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, a5, a6, a8, v11, (__int64 *)va, 8LL, va1);
  }
  return result;
}
