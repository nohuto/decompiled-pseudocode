/*
 * XREFs of McTemplateU0nxxxqqxqqqqqqqqtx_EventWriteTransfer @ 0x180130468
 * Callers:
 *     ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180040960 (-ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0nxxxqqxqqqqqqqqtx_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        __int64 a13,
        char a14,
        char a15,
        char a16,
        __int64 a17,
        char a18,
        char a19)
{
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v24[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  char *v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  char *v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int64 *v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  char *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  char *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  char *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  char *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  char *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  int *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  char *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  char *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  char *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  int *v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  char *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  char *v55; // [rsp+150h] [rbp+50h]
  __int64 v56; // [rsp+158h] [rbp+58h]
  __int64 *v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]

  v25 = a4;
  v23 = 0LL;
  v27 = &a5;
  v21 = 0;
  v29 = &a6;
  v20 = 0;
  v31 = &v22;
  v22 = 0LL;
  v33 = &a8;
  v35 = &a9;
  v37 = &a10;
  v39 = &a11;
  v41 = &a12;
  v43 = &v20;
  v45 = &a14;
  v47 = &a15;
  v49 = &a16;
  v51 = &v21;
  v53 = &a18;
  v55 = &a19;
  v57 = &v23;
  v26 = 8LL;
  v28 = 8LL;
  v30 = 8LL;
  v32 = 8LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 8LL;
  v40 = 4LL;
  v42 = 4LL;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 8LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_SURFACEUPDATE,
           0LL,
           18LL,
           v24);
}
