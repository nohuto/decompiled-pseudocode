/*
 * XREFs of McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C0047864
 * Callers:
 *     TraceDxgkContext @ 0x1C0025AE0 (TraceDxgkContext.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C01B5FEC (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8C74 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C02DFB44 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-D0h] BYREF
  va_list v5; // [rsp+40h] [rbp-C0h]
  __int64 v6; // [rsp+48h] [rbp-B8h]
  va_list v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  va_list v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  va_list v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  va_list v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  va_list v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  va_list v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  va_list v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  va_list v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  va_list v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  va_list v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  va_list v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  __int64 v29; // [rsp+138h] [rbp+38h] BYREF
  va_list va; // [rsp+138h] [rbp+38h]
  __int64 v31; // [rsp+140h] [rbp+40h] BYREF
  va_list va1; // [rsp+140h] [rbp+40h]
  __int64 v33; // [rsp+148h] [rbp+48h] BYREF
  va_list va2; // [rsp+148h] [rbp+48h]
  __int64 v35; // [rsp+150h] [rbp+50h] BYREF
  va_list va3; // [rsp+150h] [rbp+50h]
  __int64 v37; // [rsp+158h] [rbp+58h] BYREF
  va_list va4; // [rsp+158h] [rbp+58h]
  __int64 v39; // [rsp+160h] [rbp+60h] BYREF
  va_list va5; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h] BYREF
  va_list va6; // [rsp+168h] [rbp+68h]
  __int64 v43; // [rsp+170h] [rbp+70h] BYREF
  va_list va7; // [rsp+170h] [rbp+70h]
  __int64 v45; // [rsp+178h] [rbp+78h] BYREF
  va_list va8; // [rsp+178h] [rbp+78h]
  __int64 v47; // [rsp+180h] [rbp+80h] BYREF
  va_list va9; // [rsp+180h] [rbp+80h]
  __int64 v49; // [rsp+188h] [rbp+88h] BYREF
  va_list va10; // [rsp+188h] [rbp+88h]
  va_list va11; // [rsp+190h] [rbp+90h] BYREF

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
  v29 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v31 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v33 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v35 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v37 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v39 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v41 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v43 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v45 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v47 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v49 = va_arg(va11, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 4LL;
  va_copy(v9, va2);
  va_copy(v11, va3);
  va_copy(v13, va4);
  va_copy(v15, va5);
  va_copy(v17, va6);
  va_copy(v19, va7);
  va_copy(v21, va8);
  va_copy(v23, va9);
  va_copy(v25, va10);
  va_copy(v27, va11);
  v12 = 4LL;
  v14 = 4LL;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 8LL;
  v26 = 8LL;
  v28 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 0xDu, &v4);
}
