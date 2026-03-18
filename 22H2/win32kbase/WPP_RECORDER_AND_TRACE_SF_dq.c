/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C01F29EC
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001C28 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_dq(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
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
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               &WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids,
               31LL,
               (__int64 *)va,
               4LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 31;
    return WppAutoLogTrace(a4, 2LL, 2LL, &WPP_8407c04bf99d3dadbf70c01c79b8bf56_Traceguids, v11, (__int64 *)va, 4LL, va1);
  }
  return result;
}
