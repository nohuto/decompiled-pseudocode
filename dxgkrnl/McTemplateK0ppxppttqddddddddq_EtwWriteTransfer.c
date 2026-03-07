NTSTATUS McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v5; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-C0h] BYREF
  va_list v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  va_list v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  __int64 *v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  va_list v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  va_list v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  int *v17; // [rsp+A0h] [rbp-60h]
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
  va_list v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  va_list v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  va_list v37; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h]
  va_list v39; // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  __int64 v41; // [rsp+198h] [rbp+98h] BYREF
  va_list va; // [rsp+198h] [rbp+98h]
  __int64 v43; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va1; // [rsp+1A0h] [rbp+A0h]
  __int64 v45; // [rsp+1A8h] [rbp+A8h]
  __int64 v46; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va2; // [rsp+1B0h] [rbp+B0h]
  __int64 v48; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va3; // [rsp+1B8h] [rbp+B8h]
  __int64 v50; // [rsp+1C0h] [rbp+C0h]
  __int64 v51; // [rsp+1C8h] [rbp+C8h] BYREF
  va_list va4; // [rsp+1C8h] [rbp+C8h]
  __int64 v53; // [rsp+1D0h] [rbp+D0h] BYREF
  va_list va5; // [rsp+1D0h] [rbp+D0h]
  __int64 v55; // [rsp+1D8h] [rbp+D8h] BYREF
  va_list va6; // [rsp+1D8h] [rbp+D8h]
  __int64 v57; // [rsp+1E0h] [rbp+E0h] BYREF
  va_list va7; // [rsp+1E0h] [rbp+E0h]
  __int64 v59; // [rsp+1E8h] [rbp+E8h] BYREF
  va_list va8; // [rsp+1E8h] [rbp+E8h]
  __int64 v61; // [rsp+1F0h] [rbp+F0h] BYREF
  va_list va9; // [rsp+1F0h] [rbp+F0h]
  __int64 v63; // [rsp+1F8h] [rbp+F8h] BYREF
  va_list va10; // [rsp+1F8h] [rbp+F8h]
  __int64 v65; // [rsp+200h] [rbp+100h] BYREF
  va_list va11; // [rsp+200h] [rbp+100h]
  __int64 v67; // [rsp+208h] [rbp+108h] BYREF
  va_list va12; // [rsp+208h] [rbp+108h]
  __int64 v69; // [rsp+210h] [rbp+110h] BYREF
  va_list va13; // [rsp+210h] [rbp+110h]
  va_list va14; // [rsp+218h] [rbp+118h] BYREF

  va_start(va14, a3);
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
  v41 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v43 = va_arg(va2, _QWORD);
  v45 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v46 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v48 = va_arg(va4, _QWORD);
  v50 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v51 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v53 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v55 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v57 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v59 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v61 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v63 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v65 = va_arg(va12, _QWORD);
  va_copy(va13, va12);
  v67 = va_arg(va13, _QWORD);
  va_copy(va14, va13);
  v69 = va_arg(va14, _QWORD);
  v4 = 1;
  v5 = 0LL;
  va_copy(v7, va);
  v8 = 8LL;
  va_copy(v9, va1);
  v10 = 8LL;
  v11 = &v5;
  v12 = 8LL;
  va_copy(v13, va2);
  va_copy(v15, va3);
  v17 = &v4;
  va_copy(v19, va4);
  va_copy(v21, va5);
  va_copy(v23, va6);
  va_copy(v25, va7);
  va_copy(v27, va8);
  va_copy(v29, va9);
  va_copy(v31, va10);
  va_copy(v33, va11);
  va_copy(v35, va12);
  va_copy(v37, va13);
  va_copy(v39, va14);
  v14 = 8LL;
  v16 = 8LL;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventBlit, a3, 0x12u, &v6);
}
