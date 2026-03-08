/*
 * XREFs of McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1403CC200
 * Callers:
 *     CcPostVolumeTelemetry @ 0x1403CB4D0 (CcPostVolumeTelemetry.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
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
        char a31,
        char a32,
        char a33,
        char a34,
        char a35,
        char a36,
        char a37,
        char a38,
        char a39,
        char a40)
{
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h]
  __int64 v43; // [rsp+48h] [rbp-B8h]
  char *v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  char *v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  char *v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  char *v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  char *v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  char *v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  char *v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  char *v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  char *v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  char *v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  char *v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  char *v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  char *v68; // [rsp+110h] [rbp+10h]
  __int64 v69; // [rsp+118h] [rbp+18h]
  char *v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  char *v72; // [rsp+130h] [rbp+30h]
  __int64 v73; // [rsp+138h] [rbp+38h]
  char *v74; // [rsp+140h] [rbp+40h]
  __int64 v75; // [rsp+148h] [rbp+48h]
  char *v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  char *v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+168h] [rbp+68h]
  char *v80; // [rsp+170h] [rbp+70h]
  __int64 v81; // [rsp+178h] [rbp+78h]
  char *v82; // [rsp+180h] [rbp+80h]
  __int64 v83; // [rsp+188h] [rbp+88h]
  char *v84; // [rsp+190h] [rbp+90h]
  __int64 v85; // [rsp+198h] [rbp+98h]
  char *v86; // [rsp+1A0h] [rbp+A0h]
  __int64 v87; // [rsp+1A8h] [rbp+A8h]
  char *v88; // [rsp+1B0h] [rbp+B0h]
  __int64 v89; // [rsp+1B8h] [rbp+B8h]
  char *v90; // [rsp+1C0h] [rbp+C0h]
  __int64 v91; // [rsp+1C8h] [rbp+C8h]
  char *v92; // [rsp+1D0h] [rbp+D0h]
  __int64 v93; // [rsp+1D8h] [rbp+D8h]
  char *v94; // [rsp+1E0h] [rbp+E0h]
  __int64 v95; // [rsp+1E8h] [rbp+E8h]
  char *v96; // [rsp+1F0h] [rbp+F0h]
  __int64 v97; // [rsp+1F8h] [rbp+F8h]
  char *v98; // [rsp+200h] [rbp+100h]
  __int64 v99; // [rsp+208h] [rbp+108h]
  char *v100; // [rsp+210h] [rbp+110h]
  __int64 v101; // [rsp+218h] [rbp+118h]
  char *v102; // [rsp+220h] [rbp+120h]
  __int64 v103; // [rsp+228h] [rbp+128h]
  char *v104; // [rsp+230h] [rbp+130h]
  __int64 v105; // [rsp+238h] [rbp+138h]
  char *v106; // [rsp+240h] [rbp+140h]
  __int64 v107; // [rsp+248h] [rbp+148h]
  char *v108; // [rsp+250h] [rbp+150h]
  __int64 v109; // [rsp+258h] [rbp+158h]
  char *v110; // [rsp+260h] [rbp+160h]
  __int64 v111; // [rsp+268h] [rbp+168h]
  char *v112; // [rsp+270h] [rbp+170h]
  __int64 v113; // [rsp+278h] [rbp+178h]
  char *v114; // [rsp+280h] [rbp+180h]
  __int64 v115; // [rsp+288h] [rbp+188h]

  v42 = a4;
  v44 = &a5;
  v46 = &a6;
  v48 = &a7;
  v50 = &a8;
  v52 = &a9;
  v54 = &a10;
  v56 = &a11;
  v58 = &a12;
  v60 = &a13;
  v62 = &a14;
  v64 = &a15;
  v66 = &a16;
  v68 = &a17;
  v70 = &a18;
  v72 = &a19;
  v74 = &a20;
  v76 = &a21;
  v78 = &a22;
  v80 = &a23;
  v82 = &a24;
  v84 = &a25;
  v86 = &a26;
  v88 = &a27;
  v90 = &a28;
  v92 = &a29;
  v94 = &a30;
  v43 = 16LL;
  v45 = 8LL;
  v47 = 8LL;
  v49 = 8LL;
  v51 = 8LL;
  v53 = 8LL;
  v55 = 8LL;
  v57 = 8LL;
  v59 = 8LL;
  v61 = 8LL;
  v63 = 8LL;
  v65 = 8LL;
  v67 = 8LL;
  v69 = 8LL;
  v71 = 8LL;
  v73 = 8LL;
  v75 = 8LL;
  v77 = 8LL;
  v79 = 8LL;
  v81 = 8LL;
  v83 = 8LL;
  v85 = 8LL;
  v87 = 8LL;
  v89 = 8LL;
  v91 = 8LL;
  v93 = 8LL;
  v95 = 8LL;
  v96 = &a31;
  v97 = 8LL;
  v98 = &a32;
  v99 = 8LL;
  v100 = &a33;
  v101 = 8LL;
  v102 = &a34;
  v103 = 8LL;
  v104 = &a35;
  v106 = &a36;
  v108 = &a37;
  v110 = &a38;
  v112 = &a39;
  v114 = &a40;
  v105 = 8LL;
  v107 = 8LL;
  v109 = 8LL;
  v111 = 8LL;
  v113 = 8LL;
  v115 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(
           MS_KernelCc_Provider_Context,
           (const EVENT_DESCRIPTOR *)CcEvt_CacheVolumePeriodic,
           0LL,
           0x26u,
           &v41);
}
