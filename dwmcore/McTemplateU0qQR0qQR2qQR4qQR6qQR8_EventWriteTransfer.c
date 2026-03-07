__int64 __fastcall McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  _BYTE v13[16]; // [rsp+30h] [rbp-A9h] BYREF
  int *v14; // [rsp+40h] [rbp-99h]
  __int64 v15; // [rsp+48h] [rbp-91h]
  __int64 v16; // [rsp+50h] [rbp-89h]
  int v17; // [rsp+58h] [rbp-81h]
  int v18; // [rsp+5Ch] [rbp-7Dh]
  int *v19; // [rsp+60h] [rbp-79h]
  __int64 v20; // [rsp+68h] [rbp-71h]
  __int64 v21; // [rsp+70h] [rbp-69h]
  int v22; // [rsp+78h] [rbp-61h]
  int v23; // [rsp+7Ch] [rbp-5Dh]
  int *v24; // [rsp+80h] [rbp-59h]
  __int64 v25; // [rsp+88h] [rbp-51h]
  __int64 v26; // [rsp+90h] [rbp-49h]
  int v27; // [rsp+98h] [rbp-41h]
  int v28; // [rsp+9Ch] [rbp-3Dh]
  int *v29; // [rsp+A0h] [rbp-39h]
  __int64 v30; // [rsp+A8h] [rbp-31h]
  __int64 v31; // [rsp+B0h] [rbp-29h]
  int v32; // [rsp+B8h] [rbp-21h]
  int v33; // [rsp+BCh] [rbp-1Dh]
  int *v34; // [rsp+C0h] [rbp-19h]
  __int64 v35; // [rsp+C8h] [rbp-11h]
  __int64 v36; // [rsp+D0h] [rbp-9h]
  int v37; // [rsp+D8h] [rbp-1h]
  int v38; // [rsp+DCh] [rbp+3h]
  int v39; // [rsp+110h] [rbp+37h] BYREF

  v39 = a3;
  v16 = a4;
  v18 = 0;
  v14 = &v39;
  v23 = 0;
  v17 = 4 * a3;
  v28 = 0;
  v19 = &a5;
  v21 = a6;
  v22 = 4 * a5;
  v24 = &a7;
  v26 = a8;
  v27 = 4 * a7;
  v29 = &a9;
  v31 = a10;
  v32 = 4 * a9;
  v34 = &a11;
  v36 = a12;
  v37 = 4 * a11;
  v33 = 0;
  v38 = 0;
  v15 = 4LL;
  v20 = 4LL;
  v25 = 4LL;
  v30 = 4LL;
  v35 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_PROCESS_ATTRIBUTION,
           a3,
           11LL,
           v13);
}
