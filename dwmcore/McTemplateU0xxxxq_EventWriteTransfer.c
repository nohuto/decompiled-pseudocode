/*
 * XREFs of McTemplateU0xxxxq_EventWriteTransfer @ 0x18012AA74
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z @ 0x1800509B0 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0xxxxq_EventWriteTransfer(__int64 a1, __int64 a2, ...)
{
  int v3; // [rsp+30h] [rbp-41h] BYREF
  _BYTE v4[16]; // [rsp+40h] [rbp-31h] BYREF
  va_list v5; // [rsp+50h] [rbp-21h]
  __int64 v6; // [rsp+58h] [rbp-19h]
  va_list v7; // [rsp+60h] [rbp-11h]
  __int64 v8; // [rsp+68h] [rbp-9h]
  va_list v9; // [rsp+70h] [rbp-1h]
  __int64 v10; // [rsp+78h] [rbp+7h]
  va_list v11; // [rsp+80h] [rbp+Fh]
  __int64 v12; // [rsp+88h] [rbp+17h]
  int *v13; // [rsp+90h] [rbp+1Fh]
  __int64 v14; // [rsp+98h] [rbp+27h]
  va_list va; // [rsp+D0h] [rbp+5Fh]
  __int64 v16; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v17; // [rsp+D8h] [rbp+67h] BYREF
  va_list va1; // [rsp+D8h] [rbp+67h]
  __int64 v19; // [rsp+E0h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+E0h] [rbp+6Fh]
  va_list va3; // [rsp+E8h] [rbp+77h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  v6 = 8LL;
  v3 = 0;
  va_copy(v5, va);
  v8 = 8LL;
  va_copy(v7, va1);
  v10 = 8LL;
  va_copy(v9, va2);
  v12 = 8LL;
  va_copy(v11, va3);
  v13 = &v3;
  v14 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_PRESENT_Start,
           v16,
           6LL,
           v4);
}
