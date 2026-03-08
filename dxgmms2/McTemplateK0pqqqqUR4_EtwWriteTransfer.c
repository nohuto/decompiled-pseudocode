/*
 * XREFs of McTemplateK0pqqqqUR4_EtwWriteTransfer @ 0x1C0038D08
 * Callers:
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C0036034 (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pqqqqUR4_EtwWriteTransfer(REGHANDLE *a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-51h] BYREF
  va_list v5; // [rsp+40h] [rbp-41h]
  __int64 v6; // [rsp+48h] [rbp-39h]
  va_list v7; // [rsp+50h] [rbp-31h]
  __int64 v8; // [rsp+58h] [rbp-29h]
  va_list v9; // [rsp+60h] [rbp-21h]
  __int64 v10; // [rsp+68h] [rbp-19h]
  va_list v11; // [rsp+70h] [rbp-11h]
  __int64 v12; // [rsp+78h] [rbp-9h]
  va_list v13; // [rsp+80h] [rbp-1h]
  __int64 v14; // [rsp+88h] [rbp+7h]
  __int64 v15; // [rsp+90h] [rbp+Fh]
  int v16; // [rsp+98h] [rbp+17h]
  int v17; // [rsp+9Ch] [rbp+1Bh]
  __int64 v18; // [rsp+D8h] [rbp+57h] BYREF
  va_list va; // [rsp+D8h] [rbp+57h]
  __int64 v20; // [rsp+E0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+E0h] [rbp+5Fh]
  __int64 v22; // [rsp+E8h] [rbp+67h] BYREF
  va_list va2; // [rsp+E8h] [rbp+67h]
  __int64 v24; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+F0h] [rbp+6Fh]
  __int64 v26; // [rsp+F8h] [rbp+77h] BYREF
  va_list va4; // [rsp+F8h] [rbp+77h]
  __int64 v28; // [rsp+100h] [rbp+7Fh]
  va_list va5; // [rsp+108h] [rbp+87h] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v22 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v24 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v26 = va_arg(va5, _QWORD);
  v28 = va_arg(va5, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v10 = 4LL;
  va_copy(v7, va1);
  v12 = 4LL;
  va_copy(v9, va2);
  va_copy(v11, va3);
  va_copy(v13, va4);
  v15 = v28;
  v16 = v26;
  v14 = 4LL;
  v17 = 0;
  return McGenEventWrite_EtwWriteTransfer(a1, &EventHistoryBuffer, 0LL, 7u, &v4);
}
