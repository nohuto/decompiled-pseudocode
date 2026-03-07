NTSTATUS McTemplateK0ppppppppppppq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v5; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-B0h] BYREF
  va_list v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  va_list v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  va_list v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  va_list v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  __int64 *v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  va_list v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  va_list v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  va_list v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  va_list v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  va_list v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  __int64 *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  __int64 *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  va_list v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  __int64 v34; // [rsp+168h] [rbp+68h] BYREF
  va_list va; // [rsp+168h] [rbp+68h]
  __int64 v36; // [rsp+170h] [rbp+70h] BYREF
  va_list va1; // [rsp+170h] [rbp+70h]
  __int64 v38; // [rsp+178h] [rbp+78h] BYREF
  va_list va2; // [rsp+178h] [rbp+78h]
  __int64 v40; // [rsp+180h] [rbp+80h] BYREF
  va_list va3; // [rsp+180h] [rbp+80h]
  __int64 v42; // [rsp+188h] [rbp+88h]
  __int64 v43; // [rsp+190h] [rbp+90h] BYREF
  va_list va4; // [rsp+190h] [rbp+90h]
  __int64 v45; // [rsp+198h] [rbp+98h] BYREF
  va_list va5; // [rsp+198h] [rbp+98h]
  __int64 v47; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va6; // [rsp+1A0h] [rbp+A0h]
  __int64 v49; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va7; // [rsp+1A8h] [rbp+A8h]
  __int64 v51; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va8; // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1B8h] [rbp+B8h]
  __int64 v54; // [rsp+1C0h] [rbp+C0h]
  va_list va9; // [rsp+1C8h] [rbp+C8h] BYREF

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
  v34 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v36 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v38 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v40 = va_arg(va4, _QWORD);
  v42 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v43 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v45 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v47 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v49 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v51 = va_arg(va9, _QWORD);
  v53 = va_arg(va9, _QWORD);
  v54 = va_arg(va9, _QWORD);
  v9 = 8LL;
  v6 = 0LL;
  va_copy(v8, va);
  v5 = 0LL;
  va_copy(v10, va1);
  v4 = 0LL;
  va_copy(v12, va2);
  va_copy(v14, va3);
  v16 = &v4;
  va_copy(v18, va4);
  va_copy(v20, va5);
  va_copy(v22, va6);
  va_copy(v24, va7);
  va_copy(v26, va8);
  v28 = &v5;
  v30 = &v6;
  va_copy(v32, va9);
  v11 = 8LL;
  v13 = 8LL;
  v15 = 8LL;
  v17 = 8LL;
  v19 = 8LL;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 8LL;
  v27 = 8LL;
  v29 = 8LL;
  v31 = 8LL;
  v33 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, 0LL, 0xEu, &v7);
}
