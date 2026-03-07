ULONG McTemplateU0xxxtxxxxxxxxqN16_EventWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v16; // [rsp+40h] [rbp-C0h]
  __int64 v17; // [rsp+48h] [rbp-B8h]
  __int64 *v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  char *v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  char *v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  char *v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  char *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  char *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  char *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  char *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  char *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  char *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  char *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  va_list v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  __int64 v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  __int64 v44; // [rsp+150h] [rbp+50h] BYREF
  __int64 v45; // [rsp+158h] [rbp+58h] BYREF
  __int64 v46; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va; // [rsp+1B0h] [rbp+B0h]
  __int64 v48; // [rsp+1B8h] [rbp+B8h]
  __int64 v49; // [rsp+1C0h] [rbp+C0h]
  va_list va1; // [rsp+1C8h] [rbp+C8h] BYREF

  va_start(va1, a14);
  va_start(va, a14);
  v46 = va_arg(va1, _QWORD);
  v48 = va_arg(va1, _QWORD);
  v49 = va_arg(va1, _QWORD);
  v45 = a4;
  v44 = a3;
  v17 = 8LL;
  v16 = &v44;
  v19 = 8LL;
  v18 = &v45;
  v21 = 8LL;
  v20 = &a5;
  v23 = 4LL;
  v22 = &a6;
  v24 = &a7;
  v26 = &a8;
  v28 = &a9;
  v30 = &a10;
  v32 = &a11;
  v34 = &a12;
  v36 = &a13;
  v38 = &a14;
  va_copy(v40, va);
  v42 = v49;
  v25 = 8LL;
  v27 = 8LL;
  v29 = 8LL;
  v31 = 8LL;
  v33 = 8LL;
  v35 = 8LL;
  v37 = 8LL;
  v39 = 8LL;
  v41 = 4LL;
  v43 = 128LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_GLITCH,
           a3,
           0xFu,
           &v15);
}
