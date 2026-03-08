/*
 * XREFs of McTemplateU0qqppxffffffffffffffff_EventWriteTransfer @ 0x180129336
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180032400 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0qqppxffffffffffffffff_EventWriteTransfer(
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
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23)
{
  _BYTE v24[16]; // [rsp+30h] [rbp-D0h] BYREF
  int *v25; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  int *v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  char *v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  char *v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  char *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  char *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  char *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  char *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  char *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  char *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  char *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  char *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  char *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  char *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  char *v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  char *v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  char *v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  char *v59; // [rsp+150h] [rbp+50h]
  __int64 v60; // [rsp+158h] [rbp+58h]
  char *v61; // [rsp+160h] [rbp+60h]
  __int64 v62; // [rsp+168h] [rbp+68h]
  char *v63; // [rsp+170h] [rbp+70h]
  __int64 v64; // [rsp+178h] [rbp+78h]
  char *v65; // [rsp+180h] [rbp+80h]
  __int64 v66; // [rsp+188h] [rbp+88h]
  int v67; // [rsp+1C0h] [rbp+C0h] BYREF
  int v68; // [rsp+1C8h] [rbp+C8h] BYREF

  v68 = a4;
  v67 = a3;
  v26 = 4LL;
  v25 = &v67;
  v28 = 4LL;
  v27 = &v68;
  v30 = 8LL;
  v29 = &a5;
  v32 = 8LL;
  v31 = &a6;
  v33 = &a7;
  v35 = &a8;
  v37 = &a9;
  v39 = &a10;
  v41 = &a11;
  v43 = &a12;
  v45 = &a13;
  v47 = &a14;
  v49 = &a15;
  v51 = &a16;
  v53 = &a17;
  v55 = &a18;
  v57 = &a19;
  v59 = &a20;
  v61 = &a21;
  v63 = &a22;
  v65 = &a23;
  v34 = 8LL;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 4LL;
  v42 = 4LL;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 4LL;
  v62 = 4LL;
  v64 = 4LL;
  v66 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_HIT_TEST_Stop,
           a3,
           22LL,
           v24);
}
