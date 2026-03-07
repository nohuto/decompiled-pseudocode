__int64 __fastcall McTemplateU0xdddddddd_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  _BYTE v12[16]; // [rsp+30h] [rbp-91h] BYREF
  __int64 *v13; // [rsp+40h] [rbp-81h]
  __int64 v14; // [rsp+48h] [rbp-79h]
  int *v15; // [rsp+50h] [rbp-71h]
  __int64 v16; // [rsp+58h] [rbp-69h]
  char *v17; // [rsp+60h] [rbp-61h]
  __int64 v18; // [rsp+68h] [rbp-59h]
  char *v19; // [rsp+70h] [rbp-51h]
  __int64 v20; // [rsp+78h] [rbp-49h]
  char *v21; // [rsp+80h] [rbp-41h]
  __int64 v22; // [rsp+88h] [rbp-39h]
  char *v23; // [rsp+90h] [rbp-31h]
  __int64 v24; // [rsp+98h] [rbp-29h]
  char *v25; // [rsp+A0h] [rbp-21h]
  __int64 v26; // [rsp+A8h] [rbp-19h]
  char *v27; // [rsp+B0h] [rbp-11h]
  __int64 v28; // [rsp+B8h] [rbp-9h]
  char *v29; // [rsp+C0h] [rbp-1h]
  __int64 v30; // [rsp+C8h] [rbp+7h]
  __int64 v31; // [rsp+100h] [rbp+3Fh] BYREF
  int v32; // [rsp+108h] [rbp+47h] BYREF

  v32 = a4;
  v31 = a3;
  v14 = 8LL;
  v13 = &v31;
  v16 = 4LL;
  v15 = &v32;
  v18 = 4LL;
  v17 = &a5;
  v20 = 4LL;
  v19 = &a6;
  v21 = &a7;
  v23 = &a8;
  v25 = &a9;
  v27 = &a10;
  v29 = &a11;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_DISPLAYSURFACE_SWAPCHAINCANDIDATE,
           a3,
           10LL,
           v12);
}
