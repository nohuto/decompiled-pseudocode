/*
 * XREFs of McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer @ 0x1C00383FC
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0009880 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0049A8C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BDEC (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-C9h] BYREF
  va_list v5; // [rsp+40h] [rbp-B9h]
  __int64 v6; // [rsp+48h] [rbp-B1h]
  va_list v7; // [rsp+50h] [rbp-A9h]
  __int64 v8; // [rsp+58h] [rbp-A1h]
  __int64 v9; // [rsp+60h] [rbp-99h]
  int v10; // [rsp+68h] [rbp-91h]
  int v11; // [rsp+6Ch] [rbp-8Dh]
  va_list v12; // [rsp+70h] [rbp-89h]
  __int64 v13; // [rsp+78h] [rbp-81h]
  va_list v14; // [rsp+80h] [rbp-79h]
  __int64 v15; // [rsp+88h] [rbp-71h]
  va_list v16; // [rsp+90h] [rbp-69h]
  __int64 v17; // [rsp+98h] [rbp-61h]
  __int64 v18; // [rsp+A0h] [rbp-59h]
  int v19; // [rsp+A8h] [rbp-51h]
  int v20; // [rsp+ACh] [rbp-4Dh]
  va_list v21; // [rsp+B0h] [rbp-49h]
  __int64 v22; // [rsp+B8h] [rbp-41h]
  __int64 v23; // [rsp+C0h] [rbp-39h]
  int v24; // [rsp+C8h] [rbp-31h]
  int v25; // [rsp+CCh] [rbp-2Dh]
  va_list v26; // [rsp+D0h] [rbp-29h]
  __int64 v27; // [rsp+D8h] [rbp-21h]
  __int64 v28; // [rsp+E0h] [rbp-19h]
  int v29; // [rsp+E8h] [rbp-11h]
  int v30; // [rsp+ECh] [rbp-Dh]
  __int64 v31; // [rsp+128h] [rbp+2Fh] BYREF
  va_list va; // [rsp+128h] [rbp+2Fh]
  __int64 v33; // [rsp+130h] [rbp+37h] BYREF
  va_list va1; // [rsp+130h] [rbp+37h]
  __int64 v35; // [rsp+138h] [rbp+3Fh]
  __int64 v36; // [rsp+140h] [rbp+47h] BYREF
  va_list va2; // [rsp+140h] [rbp+47h]
  __int64 v38; // [rsp+148h] [rbp+4Fh] BYREF
  va_list va3; // [rsp+148h] [rbp+4Fh]
  __int64 v40; // [rsp+150h] [rbp+57h] BYREF
  va_list va4; // [rsp+150h] [rbp+57h]
  __int64 v42; // [rsp+158h] [rbp+5Fh]
  __int64 v43; // [rsp+160h] [rbp+67h] BYREF
  va_list va5; // [rsp+160h] [rbp+67h]
  __int64 v45; // [rsp+168h] [rbp+6Fh]
  __int64 v46; // [rsp+170h] [rbp+77h] BYREF
  va_list va6; // [rsp+170h] [rbp+77h]
  __int64 v48; // [rsp+178h] [rbp+7Fh]
  va_list va7; // [rsp+180h] [rbp+87h] BYREF

  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v31 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v33 = va_arg(va2, _QWORD);
  v35 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v36 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v38 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v40 = va_arg(va5, _QWORD);
  v42 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v43 = va_arg(va6, _QWORD);
  v45 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v46 = va_arg(va7, _QWORD);
  v48 = va_arg(va7, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v11 = 0;
  va_copy(v7, va1);
  v9 = v35;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  v20 = 0;
  v10 = 8 * v33;
  va_copy(v12, va2);
  va_copy(v14, va3);
  va_copy(v16, va4);
  v18 = v42;
  v19 = 8 * v40;
  va_copy(v21, va5);
  v23 = v45;
  v24 = 4 * v43;
  va_copy(v26, va6);
  v28 = v48;
  v29 = 8 * v33;
  v22 = 4LL;
  v25 = 0;
  v27 = 4LL;
  v30 = 0;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &EventVSyncDPCMultiPlane, 0LL, 0xCu, &v4);
}
