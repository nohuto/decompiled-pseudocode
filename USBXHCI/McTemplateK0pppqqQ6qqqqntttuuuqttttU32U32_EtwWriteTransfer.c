/*
 * XREFs of McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x1C004B0B8
 * Callers:
 *     Etw_DeviceRundown @ 0x1C000FFA0 (Etw_DeviceRundown.c)
 *     Etw_DeviceUpdate @ 0x1C001D724 (Etw_DeviceUpdate.c)
 *     Etw_DeviceCreate @ 0x1C001E5C8 (Etw_DeviceCreate.c)
 *     Etw_DeviceDelete @ 0x1C004AAF0 (Etw_DeviceDelete.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0022498 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        char a11,
        char a12,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+48h] [rbp-B8h]
  char *v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  char *v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  char *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  char *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  char *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  char *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  char *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  va_list v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  __int64 v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  va_list v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  va_list v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  va_list v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  va_list v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  va_list v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  va_list v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  va_list v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]
  va_list v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  va_list v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  va_list v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  va_list v56; // [rsp+190h] [rbp+90h]
  __int64 v57; // [rsp+198h] [rbp+98h]
  __int64 v58; // [rsp+1A0h] [rbp+A0h]
  __int64 v59; // [rsp+1A8h] [rbp+A8h]
  __int64 v60; // [rsp+1B0h] [rbp+B0h]
  __int64 v61; // [rsp+1B8h] [rbp+B8h]
  __int64 v62; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v63; // [rsp+240h] [rbp+140h] BYREF
  va_list va; // [rsp+240h] [rbp+140h]
  __int64 v65; // [rsp+248h] [rbp+148h]
  __int64 v66; // [rsp+250h] [rbp+150h]
  __int64 v67; // [rsp+258h] [rbp+158h] BYREF
  va_list va1; // [rsp+258h] [rbp+158h]
  __int64 v69; // [rsp+260h] [rbp+160h] BYREF
  va_list va2; // [rsp+260h] [rbp+160h]
  __int64 v71; // [rsp+268h] [rbp+168h] BYREF
  va_list va3; // [rsp+268h] [rbp+168h]
  __int64 v73; // [rsp+270h] [rbp+170h] BYREF
  va_list va4; // [rsp+270h] [rbp+170h]
  __int64 v75; // [rsp+278h] [rbp+178h] BYREF
  va_list va5; // [rsp+278h] [rbp+178h]
  __int64 v77; // [rsp+280h] [rbp+180h] BYREF
  va_list va6; // [rsp+280h] [rbp+180h]
  __int64 v79; // [rsp+288h] [rbp+188h] BYREF
  va_list va7; // [rsp+288h] [rbp+188h]
  __int64 v81; // [rsp+290h] [rbp+190h] BYREF
  va_list va8; // [rsp+290h] [rbp+190h]
  __int64 v83; // [rsp+298h] [rbp+198h] BYREF
  va_list va9; // [rsp+298h] [rbp+198h]
  __int64 v85; // [rsp+2A0h] [rbp+1A0h] BYREF
  va_list va10; // [rsp+2A0h] [rbp+1A0h]
  __int64 v87; // [rsp+2A8h] [rbp+1A8h] BYREF
  va_list va11; // [rsp+2A8h] [rbp+1A8h]
  __int64 v89; // [rsp+2B0h] [rbp+1B0h]
  __int64 v90; // [rsp+2B8h] [rbp+1B8h]
  va_list va12; // [rsp+2C0h] [rbp+1C0h] BYREF

  va_start(va12, a12);
  va_start(va11, a12);
  va_start(va10, a12);
  va_start(va9, a12);
  va_start(va8, a12);
  va_start(va7, a12);
  va_start(va6, a12);
  va_start(va5, a12);
  va_start(va4, a12);
  va_start(va3, a12);
  va_start(va2, a12);
  va_start(va1, a12);
  va_start(va, a12);
  v63 = va_arg(va1, _QWORD);
  v65 = va_arg(va1, _QWORD);
  v66 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v67 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v69 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v71 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v73 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v75 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v77 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v79 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v81 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v83 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v85 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v87 = va_arg(va12, _QWORD);
  v89 = va_arg(va12, _QWORD);
  v90 = va_arg(va12, _QWORD);
  v62 = a4;
  v15 = 8LL;
  v14 = &v62;
  v17 = 8LL;
  v16 = &a5;
  v18 = &a6;
  v20 = &a7;
  v22 = &a8;
  v24 = a9;
  v26 = &a10;
  v28 = &a11;
  v30 = &a12;
  va_copy(v32, va);
  v34 = v66;
  va_copy(v36, va1);
  va_copy(v38, va2);
  va_copy(v40, va3);
  va_copy(v42, va4);
  va_copy(v44, va5);
  va_copy(v46, va6);
  va_copy(v48, va7);
  va_copy(v50, va8);
  va_copy(v52, va9);
  va_copy(v54, va10);
  va_copy(v56, va11);
  v58 = v89;
  v60 = v90;
  v19 = 8LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 24LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 18LL;
  v37 = 4LL;
  v39 = 4LL;
  v41 = 4LL;
  v43 = 1LL;
  v45 = 1LL;
  v47 = 1LL;
  v49 = 4LL;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 4LL;
  v57 = 4LL;
  v59 = 32LL;
  v61 = 32LL;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 0x19u, &v13);
}
