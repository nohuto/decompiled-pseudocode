ULONG McTemplateU0ppffffddtt_EventWriteTransfer(__int64 a1, __int64 a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-A9h] BYREF
  va_list v4; // [rsp+40h] [rbp-99h]
  __int64 v5; // [rsp+48h] [rbp-91h]
  va_list v6; // [rsp+50h] [rbp-89h]
  __int64 v7; // [rsp+58h] [rbp-81h]
  va_list v8; // [rsp+60h] [rbp-79h]
  __int64 v9; // [rsp+68h] [rbp-71h]
  va_list v10; // [rsp+70h] [rbp-69h]
  __int64 v11; // [rsp+78h] [rbp-61h]
  va_list v12; // [rsp+80h] [rbp-59h]
  __int64 v13; // [rsp+88h] [rbp-51h]
  va_list v14; // [rsp+90h] [rbp-49h]
  __int64 v15; // [rsp+98h] [rbp-41h]
  va_list v16; // [rsp+A0h] [rbp-39h]
  __int64 v17; // [rsp+A8h] [rbp-31h]
  va_list v18; // [rsp+B0h] [rbp-29h]
  __int64 v19; // [rsp+B8h] [rbp-21h]
  va_list v20; // [rsp+C0h] [rbp-19h]
  __int64 v21; // [rsp+C8h] [rbp-11h]
  va_list v22; // [rsp+D0h] [rbp-9h]
  __int64 v23; // [rsp+D8h] [rbp-1h]
  va_list va; // [rsp+110h] [rbp+37h]
  __int64 v25; // [rsp+110h] [rbp+37h] BYREF
  __int64 v26; // [rsp+118h] [rbp+3Fh] BYREF
  va_list va1; // [rsp+118h] [rbp+3Fh]
  __int64 v28; // [rsp+120h] [rbp+47h] BYREF
  va_list va2; // [rsp+120h] [rbp+47h]
  __int64 v30; // [rsp+128h] [rbp+4Fh] BYREF
  va_list va3; // [rsp+128h] [rbp+4Fh]
  __int64 v32; // [rsp+130h] [rbp+57h] BYREF
  va_list va4; // [rsp+130h] [rbp+57h]
  __int64 v34; // [rsp+138h] [rbp+5Fh] BYREF
  va_list va5; // [rsp+138h] [rbp+5Fh]
  __int64 v36; // [rsp+140h] [rbp+67h] BYREF
  va_list va6; // [rsp+140h] [rbp+67h]
  __int64 v38; // [rsp+148h] [rbp+6Fh] BYREF
  va_list va7; // [rsp+148h] [rbp+6Fh]
  __int64 v40; // [rsp+150h] [rbp+77h] BYREF
  va_list va8; // [rsp+150h] [rbp+77h]
  va_list va9; // [rsp+158h] [rbp+7Fh] BYREF

  va_start(va9, a2);
  va_start(va8, a2);
  va_start(va7, a2);
  va_start(va6, a2);
  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v25 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v28 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v30 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v32 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v34 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v36 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v38 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v40 = va_arg(va9, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 4LL;
  va_copy(v8, va2);
  v11 = 4LL;
  va_copy(v10, va3);
  va_copy(v12, va4);
  va_copy(v14, va5);
  va_copy(v16, va6);
  va_copy(v18, va7);
  va_copy(v20, va8);
  va_copy(v22, va9);
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_CVI_UPDATE,
           v25,
           0xBu,
           &v3);
}
