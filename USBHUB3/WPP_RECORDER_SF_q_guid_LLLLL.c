/*
 * XREFs of WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C003F42C
 * Callers:
 *     HUBACPI_ExecuteDSM @ 0x1C0089994 (HUBACPI_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q_guid_LLLLL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+28h] [rbp-79h]
  int v8[4]; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v9; // [rsp+F0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+4Fh]
  __int64 v11; // [rsp+F8h] [rbp+57h]
  __int64 v12; // [rsp+100h] [rbp+5Fh]
  __int64 v13; // [rsp+108h] [rbp+67h] BYREF
  va_list va1; // [rsp+108h] [rbp+67h]
  __int64 v15; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+110h] [rbp+6Fh]
  __int64 v17; // [rsp+118h] [rbp+77h] BYREF
  va_list va3; // [rsp+118h] [rbp+77h]
  va_list va4; // [rsp+120h] [rbp+7Fh] BYREF

  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, _QWORD);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v15 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v17 = va_arg(va4, _QWORD);
  v8[0] = 1;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, GUID *, __int64, int *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
      13LL,
      (__int64 *)va,
      8LL,
      &GUID_DSM_SDM845_HS_RH_PORT_RESET_WORKAROUND,
      16LL,
      v8,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      4LL,
      va4,
      4LL,
      0LL);
  LOWORD(v7) = 13;
  return WppAutoLogTrace(a1, 2LL, 3LL, &WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids, v7, (__int64 *)va);
}
