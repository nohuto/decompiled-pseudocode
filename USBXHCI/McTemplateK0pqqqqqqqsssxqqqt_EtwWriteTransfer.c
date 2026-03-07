NTSTATUS McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const char *v3; // r8
  const char *v4; // r9
  const char *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-D0h] BYREF
  va_list v15; // [rsp+48h] [rbp-C0h]
  __int64 v16; // [rsp+50h] [rbp-B8h]
  va_list v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A8h]
  va_list v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  va_list v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  va_list v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  va_list v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  va_list v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  va_list v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  const char *v31; // [rsp+C8h] [rbp-40h]
  int v32; // [rsp+D0h] [rbp-38h]
  int v33; // [rsp+D4h] [rbp-34h]
  const char *v34; // [rsp+D8h] [rbp-30h]
  int v35; // [rsp+E0h] [rbp-28h]
  int v36; // [rsp+E4h] [rbp-24h]
  const char *v37; // [rsp+E8h] [rbp-20h]
  int v38; // [rsp+F0h] [rbp-18h]
  int v39; // [rsp+F4h] [rbp-14h]
  va_list v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  va_list v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  va_list v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  va_list v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  va_list v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  __int64 v50; // [rsp+180h] [rbp+78h] BYREF
  va_list va; // [rsp+180h] [rbp+78h]
  __int64 v52; // [rsp+188h] [rbp+80h] BYREF
  va_list va1; // [rsp+188h] [rbp+80h]
  __int64 v54; // [rsp+190h] [rbp+88h] BYREF
  va_list va2; // [rsp+190h] [rbp+88h]
  __int64 v56; // [rsp+198h] [rbp+90h] BYREF
  va_list va3; // [rsp+198h] [rbp+90h]
  __int64 v58; // [rsp+1A0h] [rbp+98h] BYREF
  va_list va4; // [rsp+1A0h] [rbp+98h]
  __int64 v60; // [rsp+1A8h] [rbp+A0h] BYREF
  va_list va5; // [rsp+1A8h] [rbp+A0h]
  __int64 v62; // [rsp+1B0h] [rbp+A8h] BYREF
  va_list va6; // [rsp+1B0h] [rbp+A8h]
  __int64 v64; // [rsp+1B8h] [rbp+B0h] BYREF
  va_list va7; // [rsp+1B8h] [rbp+B0h]
  const char *v66; // [rsp+1C0h] [rbp+B8h]
  const char *v67; // [rsp+1C8h] [rbp+C0h]
  const char *v68; // [rsp+1D0h] [rbp+C8h]
  __int64 v69; // [rsp+1D8h] [rbp+D0h] BYREF
  va_list va8; // [rsp+1D8h] [rbp+D0h]
  __int64 v71; // [rsp+1E0h] [rbp+D8h] BYREF
  va_list va9; // [rsp+1E0h] [rbp+D8h]
  __int64 v73; // [rsp+1E8h] [rbp+E0h] BYREF
  va_list va10; // [rsp+1E8h] [rbp+E0h]
  __int64 v75; // [rsp+1F0h] [rbp+E8h] BYREF
  va_list va11; // [rsp+1F0h] [rbp+E8h]
  va_list va12; // [rsp+1F8h] [rbp+F0h] BYREF

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
  v50 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v52 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v54 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v56 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v58 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v60 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v62 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v64 = va_arg(va8, _QWORD);
  v66 = va_arg(va8, const char *);
  v67 = va_arg(va8, const char *);
  v68 = va_arg(va8, const char *);
  va_copy(va9, va8);
  v69 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v71 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v73 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v75 = va_arg(va12, _QWORD);
  v3 = v66;
  v4 = v68;
  va_copy(v15, va);
  v6 = v67;
  va_copy(v17, va1);
  va_copy(v19, va2);
  va_copy(v21, va3);
  va_copy(v23, va4);
  va_copy(v25, va5);
  va_copy(v27, va6);
  va_copy(v29, va7);
  v7 = -1LL;
  v16 = 8LL;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  if ( v66 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v66[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5;
  }
  v32 = v9;
  v33 = 0;
  if ( !v66 )
    v3 = "NULL";
  v31 = v3;
  if ( v67 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v67[v10] );
    v11 = (unsigned int)(v10 + 1);
  }
  else
  {
    v11 = 5LL;
  }
  v35 = v11;
  v36 = 0;
  if ( !v67 )
    v6 = "NULL";
  v34 = v6;
  if ( v68 )
  {
    do
      ++v7;
    while ( v68[v7] );
    v12 = v7 + 1;
  }
  else
  {
    v12 = 5;
  }
  v38 = v12;
  v39 = 0;
  va_copy(v40, va8);
  if ( !v68 )
    v4 = "NULL";
  v37 = v4;
  va_copy(v42, va9);
  v41 = 8LL;
  va_copy(v44, va10);
  v43 = 4LL;
  va_copy(v46, va11);
  v45 = 4LL;
  va_copy(v48, va12);
  v47 = 4LL;
  v49 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v11, a2, 0LL, 0x11u, &v14);
}
