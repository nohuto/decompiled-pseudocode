NTSTATUS __fastcall McTemplateK0ppqqxdqqqqqqqqDR13DR13DR13DR13qqqqqqqqqqp_EtwWriteTransfer(
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
        char a14,
        char a15,
        char a16,
        int a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32)
{
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v34; // [rsp+40h] [rbp-C0h]
  __int64 v35; // [rsp+48h] [rbp-B8h]
  char *v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  char *v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  char *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  char *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  char *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  char *v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  char *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  char *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  char *v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  char *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  char *v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  char *v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  int *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  __int64 v62; // [rsp+120h] [rbp+20h]
  int v63; // [rsp+128h] [rbp+28h]
  int v64; // [rsp+12Ch] [rbp+2Ch]
  __int64 v65; // [rsp+130h] [rbp+30h]
  int v66; // [rsp+138h] [rbp+38h]
  int v67; // [rsp+13Ch] [rbp+3Ch]
  __int64 v68; // [rsp+140h] [rbp+40h]
  int v69; // [rsp+148h] [rbp+48h]
  int v70; // [rsp+14Ch] [rbp+4Ch]
  __int64 v71; // [rsp+150h] [rbp+50h]
  int v72; // [rsp+158h] [rbp+58h]
  int v73; // [rsp+15Ch] [rbp+5Ch]
  char *v74; // [rsp+160h] [rbp+60h]
  __int64 v75; // [rsp+168h] [rbp+68h]
  char *v76; // [rsp+170h] [rbp+70h]
  __int64 v77; // [rsp+178h] [rbp+78h]
  char *v78; // [rsp+180h] [rbp+80h]
  __int64 v79; // [rsp+188h] [rbp+88h]
  char *v80; // [rsp+190h] [rbp+90h]
  __int64 v81; // [rsp+198h] [rbp+98h]
  char *v82; // [rsp+1A0h] [rbp+A0h]
  __int64 v83; // [rsp+1A8h] [rbp+A8h]
  char *v84; // [rsp+1B0h] [rbp+B0h]
  __int64 v85; // [rsp+1B8h] [rbp+B8h]
  char *v86; // [rsp+1C0h] [rbp+C0h]
  __int64 v87; // [rsp+1C8h] [rbp+C8h]
  char *v88; // [rsp+1D0h] [rbp+D0h]
  __int64 v89; // [rsp+1D8h] [rbp+D8h]
  char *v90; // [rsp+1E0h] [rbp+E0h]
  __int64 v91; // [rsp+1E8h] [rbp+E8h]
  char *v92; // [rsp+1F0h] [rbp+F0h]
  __int64 v93; // [rsp+1F8h] [rbp+F8h]
  char *v94; // [rsp+200h] [rbp+100h]
  __int64 v95; // [rsp+208h] [rbp+108h]
  __int64 v96; // [rsp+248h] [rbp+148h] BYREF

  v96 = a4;
  v35 = 8LL;
  v34 = &v96;
  v37 = 8LL;
  v36 = &a5;
  v38 = &a6;
  v40 = &a7;
  v42 = &a8;
  v44 = &a9;
  v46 = &a10;
  v48 = &a11;
  v50 = &a12;
  v52 = &a13;
  v54 = &a14;
  v56 = &a15;
  v58 = &a16;
  v60 = &a17;
  v62 = a18;
  v39 = 4LL;
  v41 = 4LL;
  v43 = 8LL;
  v45 = 4LL;
  v65 = a19;
  v68 = a20;
  v71 = a21;
  v74 = &a22;
  v76 = &a23;
  v78 = &a24;
  v80 = &a25;
  v82 = &a26;
  v84 = &a27;
  v86 = &a28;
  v47 = 4LL;
  v49 = 4LL;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 4LL;
  v57 = 4LL;
  v59 = 4LL;
  v61 = 4LL;
  v63 = 4 * a17;
  v64 = 0;
  v66 = 4 * a17;
  v67 = 0;
  v69 = 4 * a17;
  v70 = 0;
  v72 = 4 * a17;
  v73 = 0;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 4LL;
  v88 = &a29;
  v89 = 4LL;
  v90 = &a30;
  v91 = 4LL;
  v92 = &a31;
  v93 = 4LL;
  v94 = &a32;
  v95 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(
           (REGHANDLE *)&DxgkControlGuid_Context,
           &EventSubmitPresentHistoryDetailed,
           0LL,
           0x1Eu,
           &v33);
}
