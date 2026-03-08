/*
 * XREFs of McTemplateK0ppqQR2QR2QR2QR2QR2QR2QR2_EtwWriteTransfer @ 0x1C004D89C
 * Callers:
 *     TraceDxgkPatchLocationList @ 0x1C004DA28 (TraceDxgkPatchLocationList.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0ppqQR2QR2QR2QR2QR2QR2QR2_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-B1h] BYREF
  va_list v5; // [rsp+40h] [rbp-A1h]
  __int64 v6; // [rsp+48h] [rbp-99h]
  va_list v7; // [rsp+50h] [rbp-91h]
  __int64 v8; // [rsp+58h] [rbp-89h]
  va_list v9; // [rsp+60h] [rbp-81h]
  __int64 v10; // [rsp+68h] [rbp-79h]
  __int64 v11; // [rsp+70h] [rbp-71h]
  int v12; // [rsp+78h] [rbp-69h]
  int v13; // [rsp+7Ch] [rbp-65h]
  __int64 v14; // [rsp+80h] [rbp-61h]
  int v15; // [rsp+88h] [rbp-59h]
  int v16; // [rsp+8Ch] [rbp-55h]
  __int64 v17; // [rsp+90h] [rbp-51h]
  int v18; // [rsp+98h] [rbp-49h]
  int v19; // [rsp+9Ch] [rbp-45h]
  __int64 v20; // [rsp+A0h] [rbp-41h]
  int v21; // [rsp+A8h] [rbp-39h]
  int v22; // [rsp+ACh] [rbp-35h]
  __int64 v23; // [rsp+B0h] [rbp-31h]
  int v24; // [rsp+B8h] [rbp-29h]
  int v25; // [rsp+BCh] [rbp-25h]
  __int64 v26; // [rsp+C0h] [rbp-21h]
  int v27; // [rsp+C8h] [rbp-19h]
  int v28; // [rsp+CCh] [rbp-15h]
  __int64 v29; // [rsp+D0h] [rbp-11h]
  int v30; // [rsp+D8h] [rbp-9h]
  int v31; // [rsp+DCh] [rbp-5h]
  __int64 v32; // [rsp+118h] [rbp+37h] BYREF
  va_list va; // [rsp+118h] [rbp+37h]
  __int64 v34; // [rsp+120h] [rbp+3Fh] BYREF
  va_list va1; // [rsp+120h] [rbp+3Fh]
  __int64 v36; // [rsp+128h] [rbp+47h] BYREF
  va_list va2; // [rsp+128h] [rbp+47h]
  __int64 v38; // [rsp+130h] [rbp+4Fh]
  __int64 v39; // [rsp+138h] [rbp+57h]
  __int64 v40; // [rsp+140h] [rbp+5Fh]
  __int64 v41; // [rsp+148h] [rbp+67h]
  __int64 v42; // [rsp+150h] [rbp+6Fh]
  __int64 v43; // [rsp+158h] [rbp+77h]
  __int64 v44; // [rsp+160h] [rbp+7Fh]
  va_list va3; // [rsp+168h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v32 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v34 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v36 = va_arg(va3, _QWORD);
  v38 = va_arg(va3, _QWORD);
  v39 = va_arg(va3, _QWORD);
  v40 = va_arg(va3, _QWORD);
  v41 = va_arg(va3, _QWORD);
  v42 = va_arg(va3, _QWORD);
  v43 = va_arg(va3, _QWORD);
  v44 = va_arg(va3, _QWORD);
  v6 = 8LL;
  v13 = 0;
  va_copy(v5, va);
  va_copy(v7, va1);
  va_copy(v9, va2);
  v11 = v38;
  v16 = 0;
  v19 = 0;
  v22 = 0;
  v25 = 0;
  v14 = v39;
  v17 = v40;
  v20 = v41;
  v23 = v42;
  v26 = v43;
  v29 = v44;
  v12 = 4 * v36;
  v15 = 4 * v36;
  v18 = 4 * v36;
  v21 = 4 * v36;
  v24 = 4 * v36;
  v27 = 4 * v36;
  v28 = 0;
  v30 = 4 * v36;
  v31 = 0;
  v8 = 8LL;
  v10 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPatchLocationList, a3, 0xBu, &v4);
}
