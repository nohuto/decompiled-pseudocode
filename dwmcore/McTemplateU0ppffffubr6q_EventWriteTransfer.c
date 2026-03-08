/*
 * XREFs of McTemplateU0ppffffubr6q_EventWriteTransfer @ 0x18012AF08
 * Callers:
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x18000D500 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0ppffffubr6q_EventWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        ...)
{
  char v8; // [rsp+30h] [rbp-A1h] BYREF
  _BYTE v9[16]; // [rsp+40h] [rbp-91h] BYREF
  __int64 *v10; // [rsp+50h] [rbp-81h]
  __int64 v11; // [rsp+58h] [rbp-79h]
  __int64 *v12; // [rsp+60h] [rbp-71h]
  __int64 v13; // [rsp+68h] [rbp-69h]
  char *v14; // [rsp+70h] [rbp-61h]
  __int64 v15; // [rsp+78h] [rbp-59h]
  char *v16; // [rsp+80h] [rbp-51h]
  __int64 v17; // [rsp+88h] [rbp-49h]
  char *v18; // [rsp+90h] [rbp-41h]
  __int64 v19; // [rsp+98h] [rbp-39h]
  va_list v20; // [rsp+A0h] [rbp-31h]
  __int64 v21; // [rsp+A8h] [rbp-29h]
  char *v22; // [rsp+B0h] [rbp-21h]
  __int64 v23; // [rsp+B8h] [rbp-19h]
  __int64 v24; // [rsp+C0h] [rbp-11h]
  __int64 v25; // [rsp+C8h] [rbp-9h]
  va_list v26; // [rsp+D0h] [rbp-1h]
  __int64 v27; // [rsp+D8h] [rbp+7h]
  __int64 v28; // [rsp+110h] [rbp+3Fh] BYREF
  __int64 v29; // [rsp+118h] [rbp+47h] BYREF
  __int64 v30; // [rsp+138h] [rbp+67h] BYREF
  va_list va; // [rsp+138h] [rbp+67h]
  __int64 v32; // [rsp+140h] [rbp+6Fh]
  __int64 v33; // [rsp+148h] [rbp+77h]
  va_list va1; // [rsp+150h] [rbp+7Fh] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v30 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v29 = a4;
  v28 = a3;
  v8 = 68;
  v10 = &v28;
  v11 = 8LL;
  v12 = &v29;
  v13 = 8LL;
  v14 = &a5;
  v15 = 4LL;
  v16 = &a6;
  v18 = &a7;
  va_copy(v20, va);
  v22 = &v8;
  v24 = v33;
  va_copy(v26, va1);
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 1LL;
  v25 = 68LL;
  v27 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_DRAWING_CONTEXT_STATE,
           a3,
           10LL,
           v9);
}
