NTSTATUS McTemplateK0pqxqqipqx_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-99h] BYREF
  va_list v5; // [rsp+40h] [rbp-89h]
  __int64 v6; // [rsp+48h] [rbp-81h]
  va_list v7; // [rsp+50h] [rbp-79h]
  __int64 v8; // [rsp+58h] [rbp-71h]
  va_list v9; // [rsp+60h] [rbp-69h]
  __int64 v10; // [rsp+68h] [rbp-61h]
  va_list v11; // [rsp+70h] [rbp-59h]
  __int64 v12; // [rsp+78h] [rbp-51h]
  va_list v13; // [rsp+80h] [rbp-49h]
  __int64 v14; // [rsp+88h] [rbp-41h]
  va_list v15; // [rsp+90h] [rbp-39h]
  __int64 v16; // [rsp+98h] [rbp-31h]
  va_list v17; // [rsp+A0h] [rbp-29h]
  __int64 v18; // [rsp+A8h] [rbp-21h]
  va_list v19; // [rsp+B0h] [rbp-19h]
  __int64 v20; // [rsp+B8h] [rbp-11h]
  va_list v21; // [rsp+C0h] [rbp-9h]
  __int64 v22; // [rsp+C8h] [rbp-1h]
  __int64 v23; // [rsp+108h] [rbp+3Fh] BYREF
  va_list va; // [rsp+108h] [rbp+3Fh]
  __int64 v25; // [rsp+110h] [rbp+47h] BYREF
  va_list va1; // [rsp+110h] [rbp+47h]
  __int64 v27; // [rsp+118h] [rbp+4Fh] BYREF
  va_list va2; // [rsp+118h] [rbp+4Fh]
  __int64 v29; // [rsp+120h] [rbp+57h] BYREF
  va_list va3; // [rsp+120h] [rbp+57h]
  __int64 v31; // [rsp+128h] [rbp+5Fh] BYREF
  va_list va4; // [rsp+128h] [rbp+5Fh]
  __int64 v33; // [rsp+130h] [rbp+67h] BYREF
  va_list va5; // [rsp+130h] [rbp+67h]
  __int64 v35; // [rsp+138h] [rbp+6Fh] BYREF
  va_list va6; // [rsp+138h] [rbp+6Fh]
  __int64 v37; // [rsp+140h] [rbp+77h] BYREF
  va_list va7; // [rsp+140h] [rbp+77h]
  va_list va8; // [rsp+148h] [rbp+7Fh] BYREF

  va_start(va8, a3);
  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v25 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v27 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v29 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v31 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v33 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v35 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v37 = va_arg(va8, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 8LL;
  va_copy(v9, va2);
  v12 = 4LL;
  va_copy(v11, va3);
  va_copy(v13, va4);
  va_copy(v15, va5);
  va_copy(v17, va6);
  va_copy(v19, va7);
  va_copy(v21, va8);
  v14 = 4LL;
  v16 = 8LL;
  v18 = 8LL;
  v20 = 4LL;
  v22 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventVSyncDPC, a3, 0xAu, &v4);
}
