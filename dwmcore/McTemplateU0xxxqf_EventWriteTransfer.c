__int64 McTemplateU0xxxqf_EventWriteTransfer(__int64 a1, __int64 a2, ...)
{
  _BYTE v3[16]; // [rsp+30h] [rbp-31h] BYREF
  va_list v4; // [rsp+40h] [rbp-21h]
  __int64 v5; // [rsp+48h] [rbp-19h]
  va_list v6; // [rsp+50h] [rbp-11h]
  __int64 v7; // [rsp+58h] [rbp-9h]
  va_list v8; // [rsp+60h] [rbp-1h]
  __int64 v9; // [rsp+68h] [rbp+7h]
  va_list v10; // [rsp+70h] [rbp+Fh]
  __int64 v11; // [rsp+78h] [rbp+17h]
  va_list v12; // [rsp+80h] [rbp+1Fh]
  __int64 v13; // [rsp+88h] [rbp+27h]
  va_list va; // [rsp+C0h] [rbp+5Fh]
  __int64 v15; // [rsp+C0h] [rbp+5Fh] BYREF
  __int64 v16; // [rsp+C8h] [rbp+67h] BYREF
  va_list va1; // [rsp+C8h] [rbp+67h]
  __int64 v18; // [rsp+D0h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+D0h] [rbp+6Fh]
  __int64 v20; // [rsp+D8h] [rbp+77h] BYREF
  va_list va3; // [rsp+D8h] [rbp+77h]
  va_list va4; // [rsp+E0h] [rbp+7Fh] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v20 = va_arg(va4, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 8LL;
  va_copy(v8, va2);
  v11 = 4LL;
  va_copy(v10, va3);
  va_copy(v12, va4);
  v13 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_DCOMPEVENT_ANIMATION_UPDATE_VALUE,
           v15,
           6LL,
           v3);
}
