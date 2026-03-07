ULONG __fastcall McTemplateU0ntqtxxxxxxx_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
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
        char a14)
{
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v16; // [rsp+40h] [rbp-B9h]
  __int64 v17; // [rsp+48h] [rbp-B1h]
  char *v18; // [rsp+50h] [rbp-A9h]
  __int64 v19; // [rsp+58h] [rbp-A1h]
  char *v20; // [rsp+60h] [rbp-99h]
  __int64 v21; // [rsp+68h] [rbp-91h]
  char *v22; // [rsp+70h] [rbp-89h]
  __int64 v23; // [rsp+78h] [rbp-81h]
  char *v24; // [rsp+80h] [rbp-79h]
  __int64 v25; // [rsp+88h] [rbp-71h]
  char *v26; // [rsp+90h] [rbp-69h]
  __int64 v27; // [rsp+98h] [rbp-61h]
  char *v28; // [rsp+A0h] [rbp-59h]
  __int64 v29; // [rsp+A8h] [rbp-51h]
  char *v30; // [rsp+B0h] [rbp-49h]
  __int64 v31; // [rsp+B8h] [rbp-41h]
  char *v32; // [rsp+C0h] [rbp-39h]
  __int64 v33; // [rsp+C8h] [rbp-31h]
  char *v34; // [rsp+D0h] [rbp-29h]
  __int64 v35; // [rsp+D8h] [rbp-21h]
  char *v36; // [rsp+E0h] [rbp-19h]
  __int64 v37; // [rsp+E8h] [rbp-11h]

  v16 = a4;
  v18 = &a5;
  v17 = 28LL;
  v20 = &a6;
  v19 = 4LL;
  v22 = &a7;
  v21 = 4LL;
  v24 = &a8;
  v26 = &a9;
  v28 = &a10;
  v30 = &a11;
  v32 = &a12;
  v34 = &a13;
  v36 = &a14;
  v23 = 4LL;
  v25 = 8LL;
  v27 = 8LL;
  v29 = 8LL;
  v31 = 8LL;
  v33 = 8LL;
  v35 = 8LL;
  v37 = 8LL;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Compositor_Context,
           &TargetStats_Ready,
           a3,
           0xCu,
           &v15);
}
