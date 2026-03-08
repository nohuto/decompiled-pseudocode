/*
 * XREFs of McTemplateU0qxqN4_EventWriteTransfer @ 0x1801B23DC
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180052E70 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG McTemplateU0qxqN4_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-21h] BYREF
  int *v5; // [rsp+48h] [rbp-11h]
  __int64 v6; // [rsp+50h] [rbp-9h]
  va_list v7; // [rsp+58h] [rbp-1h]
  __int64 v8; // [rsp+60h] [rbp+7h]
  va_list v9; // [rsp+68h] [rbp+Fh]
  __int64 v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  int v12; // [rsp+80h] [rbp+27h]
  int v13; // [rsp+84h] [rbp+2Bh]
  int v14; // [rsp+B8h] [rbp+5Fh] BYREF
  __int64 v15; // [rsp+C0h] [rbp+67h] BYREF
  va_list va; // [rsp+C0h] [rbp+67h]
  __int64 v17; // [rsp+C8h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C8h] [rbp+6Fh]
  __int64 v19; // [rsp+D0h] [rbp+77h]
  __int64 v20; // [rsp+D8h] [rbp+7Fh]
  va_list va2; // [rsp+E0h] [rbp+87h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, _QWORD);
  v20 = va_arg(va2, _QWORD);
  v14 = a3;
  v6 = 4LL;
  v13 = 0;
  v5 = &v14;
  v8 = 8LL;
  va_copy(v7, va);
  v10 = 4LL;
  va_copy(v9, va1);
  v11 = v20;
  v12 = 4 * v19;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &ConfirmFrame, a3, 5u, &v4);
}
