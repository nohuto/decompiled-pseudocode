/*
 * XREFs of McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer @ 0x1C005DBC0
 * Callers:
 *     DpiReportAdapter @ 0x1C020B4D4 (DpiReportAdapter.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqUR1qqtqqqqqqx_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-D0h] BYREF
  va_list v5; // [rsp+40h] [rbp-C0h]
  __int64 v6; // [rsp+48h] [rbp-B8h]
  va_list v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  __int64 v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+68h] [rbp-98h]
  int v11; // [rsp+6Ch] [rbp-94h]
  va_list v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  va_list v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  va_list v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  va_list v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  va_list v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  va_list v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  va_list v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  va_list v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  va_list v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  va_list v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  __int64 v32; // [rsp+148h] [rbp+48h] BYREF
  va_list va; // [rsp+148h] [rbp+48h]
  __int64 v34; // [rsp+150h] [rbp+50h] BYREF
  va_list va1; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h]
  __int64 v37; // [rsp+160h] [rbp+60h] BYREF
  va_list va2; // [rsp+160h] [rbp+60h]
  __int64 v39; // [rsp+168h] [rbp+68h] BYREF
  va_list va3; // [rsp+168h] [rbp+68h]
  __int64 v41; // [rsp+170h] [rbp+70h] BYREF
  va_list va4; // [rsp+170h] [rbp+70h]
  __int64 v43; // [rsp+178h] [rbp+78h] BYREF
  va_list va5; // [rsp+178h] [rbp+78h]
  __int64 v45; // [rsp+180h] [rbp+80h] BYREF
  va_list va6; // [rsp+180h] [rbp+80h]
  __int64 v47; // [rsp+188h] [rbp+88h] BYREF
  va_list va7; // [rsp+188h] [rbp+88h]
  __int64 v49; // [rsp+190h] [rbp+90h] BYREF
  va_list va8; // [rsp+190h] [rbp+90h]
  __int64 v51; // [rsp+198h] [rbp+98h] BYREF
  va_list va9; // [rsp+198h] [rbp+98h]
  __int64 v53; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va10; // [rsp+1A0h] [rbp+A0h]
  va_list va11; // [rsp+1A8h] [rbp+A8h] BYREF

  va_start(va11, a3);
  va_start(va10, a3);
  va_start(va9, a3);
  va_start(va8, a3);
  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v32 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v34 = va_arg(va2, _QWORD);
  v36 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v37 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v39 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v41 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v43 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v45 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v47 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v49 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v51 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v53 = va_arg(va11, _QWORD);
  v6 = 8LL;
  v11 = 0;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v9 = v36;
  v10 = v34;
  va_copy(v12, va2);
  va_copy(v14, va3);
  va_copy(v16, va4);
  va_copy(v18, va5);
  va_copy(v20, va6);
  va_copy(v22, va7);
  va_copy(v24, va8);
  va_copy(v26, va9);
  va_copy(v28, va10);
  va_copy(v30, va11);
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventDpiReportAdapter, a3, 0xEu, &v4);
}
