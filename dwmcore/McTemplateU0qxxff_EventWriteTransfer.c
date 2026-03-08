/*
 * XREFs of McTemplateU0qxxff_EventWriteTransfer @ 0x18012D336
 * Callers:
 *     ?CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z @ 0x18004D9D8 (-CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0qxxff_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-41h] BYREF
  _BYTE v5[16]; // [rsp+40h] [rbp-31h] BYREF
  int *v6; // [rsp+50h] [rbp-21h]
  __int64 v7; // [rsp+58h] [rbp-19h]
  va_list v8; // [rsp+60h] [rbp-11h]
  __int64 v9; // [rsp+68h] [rbp-9h]
  va_list v10; // [rsp+70h] [rbp-1h]
  __int64 v11; // [rsp+78h] [rbp+7h]
  va_list v12; // [rsp+80h] [rbp+Fh]
  __int64 v13; // [rsp+88h] [rbp+17h]
  va_list v14; // [rsp+90h] [rbp+1Fh]
  __int64 v15; // [rsp+98h] [rbp+27h]
  __int64 v16; // [rsp+D8h] [rbp+67h] BYREF
  va_list va; // [rsp+D8h] [rbp+67h]
  __int64 v18; // [rsp+E0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+E0h] [rbp+6Fh]
  __int64 v20; // [rsp+E8h] [rbp+77h] BYREF
  va_list va2; // [rsp+E8h] [rbp+77h]
  va_list va3; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  v7 = 4LL;
  v4 = 0;
  v6 = &v4;
  v9 = 8LL;
  va_copy(v8, va);
  v11 = 8LL;
  va_copy(v10, va1);
  v13 = 4LL;
  va_copy(v12, va2);
  va_copy(v14, va3);
  v15 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_NEW_EFFECTIVE_REFRESH_PERIOD_DELTAS,
           0LL,
           6LL,
           v5);
}
