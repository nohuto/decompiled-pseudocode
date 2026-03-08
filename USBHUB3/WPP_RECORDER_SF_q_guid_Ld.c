/*
 * XREFs of WPP_RECORDER_SF_q_guid_Ld @ 0x1C003F5C0
 * Callers:
 *     HUBACPI_ExecuteDSM @ 0x1C0089994 (HUBACPI_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q_guid_Ld(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-58h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v10; // [rsp+B0h] [rbp+38h]
  __int64 v11; // [rsp+B8h] [rbp+40h] BYREF
  va_list va1; // [rsp+B8h] [rbp+40h]
  va_list va2; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, GUID *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
      11LL,
      (__int64 *)va,
      8LL,
      &GUID_DSM_SDM845_HS_RH_PORT_RESET_WORKAROUND,
      16LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v7) = 11;
  return WppAutoLogTrace(a1, 2LL, 3LL, &WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids, v7, (__int64 *)va);
}
