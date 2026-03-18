/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qHL @ 0x1C01DB24C
 * Callers:
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C01CD660 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qHL(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+B0h] [rbp+48h] BYREF
  va_list va; // [rsp+B0h] [rbp+48h]
  __int64 v14; // [rsp+B8h] [rbp+50h] BYREF
  va_list va1; // [rsp+B8h] [rbp+50h]
  va_list va2; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               &WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids,
               303LL,
               (__int64 *)va,
               8LL,
               (__int64 *)va1,
               2LL,
               va2,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 303;
    return WppAutoLogTrace(
             a4,
             4LL,
             4LL,
             &WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids,
             v11,
             (__int64 *)va,
             8LL,
             (__int64 *)va1);
  }
  return result;
}
