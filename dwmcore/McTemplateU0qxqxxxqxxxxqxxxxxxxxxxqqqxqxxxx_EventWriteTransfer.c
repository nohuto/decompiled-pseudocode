__int64 __fastcall McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
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
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        __int64 a31,
        __int64 a32,
        __int64 a33)
{
  int v34; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v36[16]; // [rsp+40h] [rbp-C0h] BYREF
  int *v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int64 *v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  char *v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  char *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  char *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  char *v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  int *v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  char *v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  char *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  char *v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  char *v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  char *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  char *v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  char *v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  char *v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  char *v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  char *v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  char *v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  char *v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]
  char *v75; // [rsp+180h] [rbp+80h]
  __int64 v76; // [rsp+188h] [rbp+88h]
  char *v77; // [rsp+190h] [rbp+90h]
  __int64 v78; // [rsp+198h] [rbp+98h]
  char *v79; // [rsp+1A0h] [rbp+A0h]
  __int64 v80; // [rsp+1A8h] [rbp+A8h]
  char *v81; // [rsp+1B0h] [rbp+B0h]
  __int64 v82; // [rsp+1B8h] [rbp+B8h]
  char *v83; // [rsp+1C0h] [rbp+C0h]
  __int64 v84; // [rsp+1C8h] [rbp+C8h]
  char *v85; // [rsp+1D0h] [rbp+D0h]
  __int64 v86; // [rsp+1D8h] [rbp+D8h]
  char *v87; // [rsp+1E0h] [rbp+E0h]
  __int64 v88; // [rsp+1E8h] [rbp+E8h]
  char *v89; // [rsp+1F0h] [rbp+F0h]
  __int64 v90; // [rsp+1F8h] [rbp+F8h]
  char *v91; // [rsp+200h] [rbp+100h]
  __int64 v92; // [rsp+208h] [rbp+108h]
  __int64 *v93; // [rsp+210h] [rbp+110h]
  __int64 v94; // [rsp+218h] [rbp+118h]
  __int64 *v95; // [rsp+220h] [rbp+120h]
  __int64 v96; // [rsp+228h] [rbp+128h]
  __int64 *v97; // [rsp+230h] [rbp+130h]
  __int64 v98; // [rsp+238h] [rbp+138h]
  int v99; // [rsp+270h] [rbp+170h] BYREF
  __int64 v100; // [rsp+278h] [rbp+178h] BYREF

  v100 = a4;
  v99 = a3;
  v34 = 1;
  v37 = &v99;
  a33 = 0LL;
  v39 = &v100;
  v41 = &a5;
  v43 = &a6;
  v45 = &a7;
  v47 = &a8;
  v49 = &v34;
  v51 = &a10;
  v53 = &a11;
  v55 = &a12;
  v57 = &a13;
  v59 = &a14;
  v61 = &a15;
  v63 = &a16;
  v65 = &a17;
  v67 = &a18;
  v69 = &a19;
  v71 = &a20;
  v73 = &a21;
  v75 = &a22;
  v77 = &a23;
  v79 = &a24;
  v81 = &a25;
  v83 = &a26;
  v85 = &a27;
  a32 = 0LL;
  v35 = 0LL;
  v38 = 4LL;
  v40 = 8LL;
  v42 = 4LL;
  v44 = 8LL;
  v46 = 8LL;
  v48 = 8LL;
  v50 = 4LL;
  v52 = 8LL;
  v54 = 8LL;
  v56 = 8LL;
  v58 = 8LL;
  v60 = 4LL;
  v62 = 8LL;
  v64 = 8LL;
  v66 = 8LL;
  v68 = 8LL;
  v70 = 8LL;
  v72 = 8LL;
  v74 = 8LL;
  v76 = 8LL;
  v78 = 8LL;
  v80 = 8LL;
  v82 = 4LL;
  v84 = 4LL;
  v86 = 4LL;
  v87 = &a28;
  v88 = 8LL;
  v89 = &a29;
  v90 = 4LL;
  v91 = &a30;
  v92 = 8LL;
  v93 = &v35;
  v95 = &a32;
  v97 = &a33;
  v94 = 8LL;
  v96 = 8LL;
  v98 = 8LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_FRAMEINFO,
           0LL,
           32LL,
           v36);
}
