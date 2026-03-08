/*
 * XREFs of McTemplateK0pppqqqqpppqqqq_EtwWriteTransfer @ 0x1C0165B28
 * Callers:
 *     EtwTraceWindowRenderingOldToNewRedirectionBitmap @ 0x1C00CD6F0 (EtwTraceWindowRenderingOldToNewRedirectionBitmap.c)
 *     EtwWindowRendering @ 0x1C01987E0 (EtwWindowRendering.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0038218 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pppqqqqpppqqqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
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
  va_list v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  va_list v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  __int64 v33; // [rsp+158h] [rbp+58h] BYREF
  va_list va; // [rsp+158h] [rbp+58h]
  __int64 v35; // [rsp+160h] [rbp+60h] BYREF
  va_list va1; // [rsp+160h] [rbp+60h]
  __int64 v37; // [rsp+168h] [rbp+68h] BYREF
  va_list va2; // [rsp+168h] [rbp+68h]
  __int64 v39; // [rsp+170h] [rbp+70h] BYREF
  va_list va3; // [rsp+170h] [rbp+70h]
  __int64 v41; // [rsp+178h] [rbp+78h] BYREF
  va_list va4; // [rsp+178h] [rbp+78h]
  __int64 v43; // [rsp+180h] [rbp+80h] BYREF
  va_list va5; // [rsp+180h] [rbp+80h]
  __int64 v45; // [rsp+188h] [rbp+88h] BYREF
  va_list va6; // [rsp+188h] [rbp+88h]
  __int64 v47; // [rsp+190h] [rbp+90h] BYREF
  va_list va7; // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+198h] [rbp+98h] BYREF
  va_list va8; // [rsp+198h] [rbp+98h]
  __int64 v51; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va9; // [rsp+1A0h] [rbp+A0h]
  __int64 v53; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va10; // [rsp+1A8h] [rbp+A8h]
  __int64 v55; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va11; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va12; // [rsp+1B8h] [rbp+B8h]
  va_list va13; // [rsp+1C0h] [rbp+C0h] BYREF

  va_start(va13, a3);
  va_start(va12, a3);
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
  v33 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v35 = va_arg(va2, _QWORD);
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
  va_copy(va12, va11);
  v55 = va_arg(va12, _QWORD);
  va_copy(va13, va12);
  v57 = va_arg(va13, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 8LL;
  va_copy(v7, va1);
  v10 = 8LL;
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
  va_copy(v29, va12);
  va_copy(v31, va13);
  v12 = 4LL;
  v14 = 4LL;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 8LL;
  v22 = 8LL;
  v24 = 8LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 0xFu, &v4);
}
