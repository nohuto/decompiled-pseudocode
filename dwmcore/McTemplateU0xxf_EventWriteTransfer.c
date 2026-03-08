/*
 * XREFs of McTemplateU0xxf_EventWriteTransfer @ 0x18012D2A4
 * Callers:
 *     ?TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ @ 0x1800512B0 (-TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0xxf_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+30h] [rbp-11h] BYREF
  _BYTE v5[16]; // [rsp+40h] [rbp-1h] BYREF
  __int64 *v6; // [rsp+50h] [rbp+Fh]
  __int64 v7; // [rsp+58h] [rbp+17h]
  va_list v8; // [rsp+60h] [rbp+1Fh]
  __int64 v9; // [rsp+68h] [rbp+27h]
  va_list v10; // [rsp+70h] [rbp+2Fh]
  __int64 v11; // [rsp+78h] [rbp+37h]
  __int64 v12; // [rsp+B8h] [rbp+77h] BYREF
  va_list va; // [rsp+B8h] [rbp+77h]
  va_list va1; // [rsp+C0h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  v4 = 1LL;
  v6 = &v4;
  v7 = 8LL;
  va_copy(v8, va);
  v9 = 8LL;
  va_copy(v10, va1);
  v11 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_PRESENT_STATS_DELTAS,
           a3,
           4LL,
           v5);
}
