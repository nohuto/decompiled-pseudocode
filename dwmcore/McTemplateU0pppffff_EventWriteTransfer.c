__int64 McTemplateU0pppffff_EventWriteTransfer(__int64 a1, __int64 a2, ...)
{
  _BYTE v3[16]; // [rsp+30h] [rbp-61h] BYREF
  va_list v4; // [rsp+40h] [rbp-51h]
  __int64 v5; // [rsp+48h] [rbp-49h]
  va_list v6; // [rsp+50h] [rbp-41h]
  __int64 v7; // [rsp+58h] [rbp-39h]
  va_list v8; // [rsp+60h] [rbp-31h]
  __int64 v9; // [rsp+68h] [rbp-29h]
  va_list v10; // [rsp+70h] [rbp-21h]
  __int64 v11; // [rsp+78h] [rbp-19h]
  va_list v12; // [rsp+80h] [rbp-11h]
  __int64 v13; // [rsp+88h] [rbp-9h]
  va_list v14; // [rsp+90h] [rbp-1h]
  __int64 v15; // [rsp+98h] [rbp+7h]
  va_list v16; // [rsp+A0h] [rbp+Fh]
  __int64 v17; // [rsp+A8h] [rbp+17h]
  va_list va; // [rsp+E0h] [rbp+4Fh]
  __int64 v19; // [rsp+E0h] [rbp+4Fh] BYREF
  __int64 v20; // [rsp+E8h] [rbp+57h] BYREF
  va_list va1; // [rsp+E8h] [rbp+57h]
  __int64 v22; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+F0h] [rbp+5Fh]
  __int64 v24; // [rsp+F8h] [rbp+67h] BYREF
  va_list va3; // [rsp+F8h] [rbp+67h]
  __int64 v26; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+100h] [rbp+6Fh]
  __int64 v28; // [rsp+108h] [rbp+77h] BYREF
  va_list va5; // [rsp+108h] [rbp+77h]
  va_list va6; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va6, a2);
  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v22 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v24 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v26 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v28 = va_arg(va6, _QWORD);
  v11 = 4LL;
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 8LL;
  va_copy(v8, va2);
  va_copy(v10, va3);
  va_copy(v12, va4);
  va_copy(v14, va5);
  va_copy(v16, va6);
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_COMPOSITION_SURFACE_DRAW,
           v19,
           8LL,
           v3);
}
