/*
 * XREFs of McTemplateU0xxxiid_EventWriteTransfer @ 0x18012A9B0
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004E430 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0xxxiid_EventWriteTransfer(__int64 a1, __int64 a2, ...)
{
  _BYTE v3[16]; // [rsp+30h] [rbp-49h] BYREF
  va_list v4; // [rsp+40h] [rbp-39h]
  __int64 v5; // [rsp+48h] [rbp-31h]
  va_list v6; // [rsp+50h] [rbp-29h]
  __int64 v7; // [rsp+58h] [rbp-21h]
  va_list v8; // [rsp+60h] [rbp-19h]
  __int64 v9; // [rsp+68h] [rbp-11h]
  va_list v10; // [rsp+70h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp-1h]
  va_list v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  va_list v14; // [rsp+90h] [rbp+17h]
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  va_list va; // [rsp+D0h] [rbp+57h]
  __int64 v17; // [rsp+D0h] [rbp+57h] BYREF
  __int64 v18; // [rsp+D8h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+5Fh]
  __int64 v20; // [rsp+E0h] [rbp+67h] BYREF
  va_list va2; // [rsp+E0h] [rbp+67h]
  __int64 v22; // [rsp+E8h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+E8h] [rbp+6Fh]
  __int64 v24; // [rsp+F0h] [rbp+77h] BYREF
  va_list va4; // [rsp+F0h] [rbp+77h]
  va_list va5; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v22 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v24 = va_arg(va5, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 8LL;
  va_copy(v8, va2);
  v11 = 8LL;
  va_copy(v10, va3);
  va_copy(v12, va4);
  va_copy(v14, va5);
  v13 = 8LL;
  v15 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_VSYNC_QPC_SMOOTHING,
           v17,
           7LL,
           v3);
}
