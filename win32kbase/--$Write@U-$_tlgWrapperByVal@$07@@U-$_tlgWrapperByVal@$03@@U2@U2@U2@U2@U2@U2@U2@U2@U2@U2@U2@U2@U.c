/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444444444444444444444444444444@Z @ 0x1C019FA40
 * Callers:
 *     ?RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C019FEE8 (-RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        __int64 a42,
        __int64 a43,
        __int64 a44)
{
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h]
  __int64 v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+68h] [rbp-98h]
  __int64 v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  __int64 v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  __int64 v62; // [rsp+D0h] [rbp-30h]
  __int64 v63; // [rsp+D8h] [rbp-28h]
  __int64 v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  __int64 v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  __int64 v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  __int64 v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  __int64 v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  __int64 v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  __int64 v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  __int64 v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  __int64 v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  __int64 v82; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  __int64 v84; // [rsp+180h] [rbp+80h]
  __int64 v85; // [rsp+188h] [rbp+88h]
  __int64 v86; // [rsp+190h] [rbp+90h]
  __int64 v87; // [rsp+198h] [rbp+98h]
  __int64 v88; // [rsp+1A0h] [rbp+A0h]
  __int64 v89; // [rsp+1A8h] [rbp+A8h]
  __int64 v90; // [rsp+1B0h] [rbp+B0h]
  __int64 v91; // [rsp+1B8h] [rbp+B8h]
  __int64 v92; // [rsp+1C0h] [rbp+C0h]
  __int64 v93; // [rsp+1C8h] [rbp+C8h]
  __int64 v94; // [rsp+1D0h] [rbp+D0h]
  __int64 v95; // [rsp+1D8h] [rbp+D8h]
  __int64 v96; // [rsp+1E0h] [rbp+E0h]
  __int64 v97; // [rsp+1E8h] [rbp+E8h]
  __int64 v98; // [rsp+1F0h] [rbp+F0h]
  __int64 v99; // [rsp+1F8h] [rbp+F8h]
  __int64 v100; // [rsp+200h] [rbp+100h]
  __int64 v101; // [rsp+208h] [rbp+108h]
  __int64 v102; // [rsp+210h] [rbp+110h]
  __int64 v103; // [rsp+218h] [rbp+118h]
  __int64 v104; // [rsp+220h] [rbp+120h]
  __int64 v105; // [rsp+228h] [rbp+128h]
  __int64 v106; // [rsp+230h] [rbp+130h]
  __int64 v107; // [rsp+238h] [rbp+138h]
  __int64 v108; // [rsp+240h] [rbp+140h]
  __int64 v109; // [rsp+248h] [rbp+148h]
  __int64 v110; // [rsp+250h] [rbp+150h]
  __int64 v111; // [rsp+258h] [rbp+158h]
  __int64 v112; // [rsp+260h] [rbp+160h]
  __int64 v113; // [rsp+268h] [rbp+168h]
  __int64 v114; // [rsp+270h] [rbp+170h]
  __int64 v115; // [rsp+278h] [rbp+178h]
  __int64 v116; // [rsp+280h] [rbp+180h]
  __int64 v117; // [rsp+288h] [rbp+188h]
  __int64 v118; // [rsp+290h] [rbp+190h]
  __int64 v119; // [rsp+298h] [rbp+198h]
  __int64 v120; // [rsp+2A0h] [rbp+1A0h]
  __int64 v121; // [rsp+2A8h] [rbp+1A8h]
  __int64 v122; // [rsp+2B0h] [rbp+1B0h]
  __int64 v123; // [rsp+2B8h] [rbp+1B8h]
  __int64 v124; // [rsp+2C0h] [rbp+1C0h]
  __int64 v125; // [rsp+2C8h] [rbp+1C8h]

  v124 = a44;
  v122 = a43;
  v120 = a42;
  v118 = a41;
  v116 = a40;
  v114 = a39;
  v112 = a38;
  v110 = a37;
  v108 = a36;
  v106 = a35;
  v104 = a34;
  v102 = a33;
  v100 = a32;
  v98 = a31;
  v96 = a30;
  v94 = a29;
  v92 = a28;
  v90 = a27;
  v88 = a26;
  v86 = a25;
  v84 = a24;
  v82 = a23;
  v80 = a22;
  v78 = a21;
  v76 = a20;
  v74 = a19;
  v72 = a18;
  v125 = 4LL;
  v123 = 4LL;
  v121 = 4LL;
  v119 = 4LL;
  v117 = 4LL;
  v115 = 4LL;
  v113 = 4LL;
  v111 = 4LL;
  v109 = 4LL;
  v107 = 4LL;
  v105 = 4LL;
  v103 = 4LL;
  v101 = 4LL;
  v99 = 4LL;
  v97 = 4LL;
  v95 = 4LL;
  v93 = 4LL;
  v91 = 4LL;
  v89 = 4LL;
  v87 = 4LL;
  v85 = 4LL;
  v83 = 4LL;
  v81 = 4LL;
  v79 = 4LL;
  v77 = 4LL;
  v75 = 4LL;
  v73 = 4LL;
  v70 = a17;
  v68 = a16;
  v66 = a15;
  v64 = a14;
  v62 = a13;
  v60 = a12;
  v58 = a11;
  v56 = a10;
  v54 = a9;
  v52 = a8;
  v50 = a7;
  v48 = a6;
  v46 = a5;
  v71 = 4LL;
  v69 = 4LL;
  v67 = 4LL;
  v65 = 4LL;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 4LL;
  v53 = 4LL;
  v51 = 4LL;
  v49 = 4LL;
  v47 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x2Au, &v45);
}
