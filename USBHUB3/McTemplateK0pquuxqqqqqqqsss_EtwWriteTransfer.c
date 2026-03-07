NTSTATUS McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  __int64 v3; // rcx
  __int64 v6; // rdx
  int v7; // edx
  const char *v8; // r8
  const char *v9; // rax
  __int64 v10; // rdx
  int v11; // edx
  const char *v12; // rax
  __int64 v13; // rcx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-D0h] BYREF
  va_list v16; // [rsp+40h] [rbp-C0h]
  __int64 v17; // [rsp+48h] [rbp-B8h]
  va_list v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  va_list v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  va_list v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  va_list v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  va_list v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  va_list v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  va_list v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  va_list v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  va_list v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  va_list v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  va_list v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  const char *v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+108h] [rbp+8h]
  int v42; // [rsp+10Ch] [rbp+Ch]
  const char *v43; // [rsp+110h] [rbp+10h]
  int v44; // [rsp+118h] [rbp+18h]
  int v45; // [rsp+11Ch] [rbp+1Ch]
  const char *v46; // [rsp+120h] [rbp+20h]
  int v47; // [rsp+128h] [rbp+28h]
  int v48; // [rsp+12Ch] [rbp+2Ch]
  __int64 v49; // [rsp+168h] [rbp+68h] BYREF
  va_list va; // [rsp+168h] [rbp+68h]
  __int64 v51; // [rsp+170h] [rbp+70h] BYREF
  va_list va1; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h] BYREF
  va_list va2; // [rsp+178h] [rbp+78h]
  __int64 v55; // [rsp+180h] [rbp+80h] BYREF
  va_list va3; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h] BYREF
  va_list va4; // [rsp+188h] [rbp+88h]
  __int64 v59; // [rsp+190h] [rbp+90h] BYREF
  va_list va5; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h] BYREF
  va_list va6; // [rsp+198h] [rbp+98h]
  __int64 v63; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va7; // [rsp+1A0h] [rbp+A0h]
  __int64 v65; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va8; // [rsp+1A8h] [rbp+A8h]
  __int64 v67; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va9; // [rsp+1B0h] [rbp+B0h]
  __int64 v69; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va10; // [rsp+1B8h] [rbp+B8h]
  __int64 v71; // [rsp+1C0h] [rbp+C0h] BYREF
  va_list va11; // [rsp+1C0h] [rbp+C0h]
  const char *v73; // [rsp+1C8h] [rbp+C8h]
  const char *v74; // [rsp+1D0h] [rbp+D0h]
  const char *v75; // [rsp+1D8h] [rbp+D8h]
  va_list va12; // [rsp+1E0h] [rbp+E0h] BYREF

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
  v49 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v51 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v53 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v55 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v57 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v59 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v61 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v63 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v65 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v67 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v69 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v71 = va_arg(va12, _QWORD);
  v73 = va_arg(va12, const char *);
  v74 = va_arg(va12, const char *);
  v75 = va_arg(va12, const char *);
  va_copy(v16, va);
  v17 = 8LL;
  va_copy(v18, va1);
  v3 = -1LL;
  v19 = 4LL;
  va_copy(v20, va2);
  va_copy(v22, va3);
  va_copy(v24, va4);
  va_copy(v26, va5);
  va_copy(v28, va6);
  va_copy(v30, va7);
  va_copy(v32, va8);
  va_copy(v34, va9);
  va_copy(v36, va10);
  va_copy(v38, va11);
  v21 = 1LL;
  v23 = 1LL;
  v25 = 8LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 4LL;
  if ( v73 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v73[v6] );
    v7 = v6 + 1;
  }
  else
  {
    v7 = 5;
  }
  v41 = v7;
  v8 = "NULL";
  v42 = 0;
  v9 = "NULL";
  if ( v73 )
    v9 = v73;
  v40 = v9;
  if ( v74 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v74[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v11 = 5;
  }
  v44 = v11;
  v12 = "NULL";
  v45 = 0;
  if ( v74 )
    v12 = v74;
  v43 = v12;
  if ( v75 )
  {
    do
      ++v3;
    while ( v75[v3] );
    v13 = (unsigned int)(v3 + 1);
  }
  else
  {
    v13 = 5LL;
  }
  v47 = v13;
  v48 = 0;
  if ( v75 )
    v8 = v75;
  v46 = v8;
  return McGenEventWrite_EtwWriteTransfer(v13, a2, a3, 0x10u, &v15);
}
