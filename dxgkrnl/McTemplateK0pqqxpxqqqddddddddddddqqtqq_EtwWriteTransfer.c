NTSTATUS __fastcall McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
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
        char a24)
{
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  char *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  char *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  char *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  char *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  int *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  int *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  int *v51; // [rsp+110h] [rbp+10h]
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
  char *v67; // [rsp+190h] [rbp+90h]
  __int64 v68; // [rsp+198h] [rbp+98h]
  char *v69; // [rsp+1A0h] [rbp+A0h]
  __int64 v70; // [rsp+1A8h] [rbp+A8h]
  char *v71; // [rsp+1B0h] [rbp+B0h]
  __int64 v72; // [rsp+1B8h] [rbp+B8h]
  char *v73; // [rsp+1C0h] [rbp+C0h]
  __int64 v74; // [rsp+1C8h] [rbp+C8h]
  char *v75; // [rsp+1D0h] [rbp+D0h]
  __int64 v76; // [rsp+1D8h] [rbp+D8h]
  int *v77; // [rsp+1E0h] [rbp+E0h]
  __int64 v78; // [rsp+1E8h] [rbp+E8h]
  int *v79; // [rsp+1F0h] [rbp+F0h]
  __int64 v80; // [rsp+1F8h] [rbp+F8h]
  int *v81; // [rsp+200h] [rbp+100h]
  __int64 v82; // [rsp+208h] [rbp+108h]
  int *v83; // [rsp+210h] [rbp+110h]
  __int64 v84; // [rsp+218h] [rbp+118h]
  int *v85; // [rsp+220h] [rbp+120h]
  __int64 v86; // [rsp+228h] [rbp+128h]
  __int64 v87; // [rsp+268h] [rbp+168h] BYREF

  v87 = a4;
  v36 = 8LL;
  v32 = 0;
  v35 = &v87;
  v37 = &a5;
  v39 = &a6;
  v41 = &a7;
  v43 = &v33;
  v45 = &a9;
  v47 = &v25;
  v49 = &v26;
  v51 = &v27;
  v53 = &a13;
  v55 = &a14;
  v57 = &a15;
  v59 = &a16;
  v61 = &a17;
  v63 = &a18;
  v65 = &a19;
  v67 = &a20;
  v69 = &a21;
  v71 = &a22;
  v73 = &a23;
  v75 = &a24;
  v77 = &v28;
  v79 = &v29;
  v81 = &v30;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v33 = 0LL;
  v38 = 4LL;
  v40 = 4LL;
  v42 = 8LL;
  v44 = 8LL;
  v46 = 8LL;
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
  v68 = 4LL;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  v83 = &v31;
  v84 = 4LL;
  v85 = &v32;
  v86 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           (REGHANDLE *)&DxgkControlGuid_Context,
           &MMIOFlipMultiPlaneOverlay,
           0LL,
           0x1Bu,
           &v34);
}
