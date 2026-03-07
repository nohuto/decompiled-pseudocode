ULONG McTemplateU0xxxqqqqnnnqqq_EventWriteTransfer(__int64 a1, __int64 a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-D0h] BYREF
  va_list v4; // [rsp+40h] [rbp-C0h]
  __int64 v5; // [rsp+48h] [rbp-B8h]
  va_list v6; // [rsp+50h] [rbp-B0h]
  __int64 v7; // [rsp+58h] [rbp-A8h]
  va_list v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  va_list v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  va_list v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  va_list v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  va_list v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  __int64 v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  __int64 v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  __int64 v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  va_list v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  va_list v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  va_list v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  va_list va; // [rsp+140h] [rbp+40h]
  __int64 v31; // [rsp+140h] [rbp+40h] BYREF
  __int64 v32; // [rsp+148h] [rbp+48h] BYREF
  va_list va1; // [rsp+148h] [rbp+48h]
  __int64 v34; // [rsp+150h] [rbp+50h] BYREF
  va_list va2; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h] BYREF
  va_list va3; // [rsp+158h] [rbp+58h]
  __int64 v38; // [rsp+160h] [rbp+60h] BYREF
  va_list va4; // [rsp+160h] [rbp+60h]
  __int64 v40; // [rsp+168h] [rbp+68h] BYREF
  va_list va5; // [rsp+168h] [rbp+68h]
  __int64 v42; // [rsp+170h] [rbp+70h] BYREF
  va_list va6; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  __int64 v45; // [rsp+180h] [rbp+80h]
  __int64 v46; // [rsp+188h] [rbp+88h]
  __int64 v47; // [rsp+190h] [rbp+90h]
  __int64 v48; // [rsp+198h] [rbp+98h]
  __int64 v49; // [rsp+1A0h] [rbp+A0h]
  __int64 v50; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va7; // [rsp+1A8h] [rbp+A8h]
  __int64 v52; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va8; // [rsp+1B0h] [rbp+B0h]
  va_list va9; // [rsp+1B8h] [rbp+B8h] BYREF

  va_start(va9, a2);
  va_start(va8, a2);
  va_start(va7, a2);
  va_start(va6, a2);
  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v31 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v32 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v34 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v36 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v38 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v40 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v42 = va_arg(va7, _QWORD);
  v44 = va_arg(va7, _QWORD);
  v45 = va_arg(va7, _QWORD);
  v46 = va_arg(va7, _QWORD);
  v47 = va_arg(va7, _QWORD);
  v48 = va_arg(va7, _QWORD);
  v49 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v50 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v52 = va_arg(va9, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 8LL;
  va_copy(v8, va2);
  v11 = 4LL;
  va_copy(v10, va3);
  va_copy(v12, va4);
  va_copy(v14, va5);
  va_copy(v16, va6);
  v18 = v45;
  v20 = v47;
  v22 = v49;
  va_copy(v24, va7);
  va_copy(v26, va8);
  va_copy(v28, va9);
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  v19 = 16LL;
  v21 = 16LL;
  v23 = 16LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Compositor_Context,
           &Present_OverlayPlane,
           v31,
           0xEu,
           &v3);
}
