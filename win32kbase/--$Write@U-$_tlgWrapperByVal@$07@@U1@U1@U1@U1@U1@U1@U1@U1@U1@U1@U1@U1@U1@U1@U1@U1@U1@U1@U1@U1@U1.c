/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333333333333333333333333333333333333@Z @ 0x1C023477C
 * Callers:
 *     ?SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ @ 0x1C00F530E (-SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
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
        __int64 a44,
        __int64 a45,
        __int64 a46)
{
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B0h]
  __int64 v49; // [rsp+58h] [rbp-A8h]
  __int64 v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h]
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h]
  __int64 v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+98h] [rbp-68h]
  __int64 v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  __int64 v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  __int64 v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  __int64 v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  __int64 v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  __int64 v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  __int64 v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  __int64 v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h]
  __int64 v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  __int64 v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  __int64 v80; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  __int64 v82; // [rsp+160h] [rbp+60h]
  __int64 v83; // [rsp+168h] [rbp+68h]
  __int64 v84; // [rsp+170h] [rbp+70h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  __int64 v86; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+188h] [rbp+88h]
  __int64 v88; // [rsp+190h] [rbp+90h]
  __int64 v89; // [rsp+198h] [rbp+98h]
  __int64 v90; // [rsp+1A0h] [rbp+A0h]
  __int64 v91; // [rsp+1A8h] [rbp+A8h]
  __int64 v92; // [rsp+1B0h] [rbp+B0h]
  __int64 v93; // [rsp+1B8h] [rbp+B8h]
  __int64 v94; // [rsp+1C0h] [rbp+C0h]
  __int64 v95; // [rsp+1C8h] [rbp+C8h]
  __int64 v96; // [rsp+1D0h] [rbp+D0h]
  __int64 v97; // [rsp+1D8h] [rbp+D8h]
  __int64 v98; // [rsp+1E0h] [rbp+E0h]
  __int64 v99; // [rsp+1E8h] [rbp+E8h]
  __int64 v100; // [rsp+1F0h] [rbp+F0h]
  __int64 v101; // [rsp+1F8h] [rbp+F8h]
  __int64 v102; // [rsp+200h] [rbp+100h]
  __int64 v103; // [rsp+208h] [rbp+108h]
  __int64 v104; // [rsp+210h] [rbp+110h]
  __int64 v105; // [rsp+218h] [rbp+118h]
  __int64 v106; // [rsp+220h] [rbp+120h]
  __int64 v107; // [rsp+228h] [rbp+128h]
  __int64 v108; // [rsp+230h] [rbp+130h]
  __int64 v109; // [rsp+238h] [rbp+138h]
  __int64 v110; // [rsp+240h] [rbp+140h]
  __int64 v111; // [rsp+248h] [rbp+148h]
  __int64 v112; // [rsp+250h] [rbp+150h]
  __int64 v113; // [rsp+258h] [rbp+158h]
  __int64 v114; // [rsp+260h] [rbp+160h]
  __int64 v115; // [rsp+268h] [rbp+168h]
  __int64 v116; // [rsp+270h] [rbp+170h]
  __int64 v117; // [rsp+278h] [rbp+178h]
  __int64 v118; // [rsp+280h] [rbp+180h]
  __int64 v119; // [rsp+288h] [rbp+188h]
  __int64 v120; // [rsp+290h] [rbp+190h]
  __int64 v121; // [rsp+298h] [rbp+198h]
  __int64 v122; // [rsp+2A0h] [rbp+1A0h]
  __int64 v123; // [rsp+2A8h] [rbp+1A8h]
  __int64 v124; // [rsp+2B0h] [rbp+1B0h]
  __int64 v125; // [rsp+2B8h] [rbp+1B8h]
  __int64 v126; // [rsp+2C0h] [rbp+1C0h]
  __int64 v127; // [rsp+2C8h] [rbp+1C8h]
  __int64 v128; // [rsp+2D0h] [rbp+1D0h]
  __int64 v129; // [rsp+2D8h] [rbp+1D8h]
  __int64 v130; // [rsp+2E0h] [rbp+1E0h]
  __int64 v131; // [rsp+2E8h] [rbp+1E8h]

  v130 = a46;
  v128 = a45;
  v126 = a44;
  v124 = a43;
  v122 = a42;
  v120 = a41;
  v118 = a40;
  v116 = a39;
  v114 = a38;
  v112 = a37;
  v110 = a36;
  v108 = a35;
  v106 = a34;
  v104 = a33;
  v102 = a32;
  v100 = a31;
  v98 = a30;
  v96 = a29;
  v94 = a28;
  v92 = a27;
  v90 = a26;
  v88 = a25;
  v86 = a24;
  v84 = a23;
  v82 = a22;
  v80 = a21;
  v78 = a20;
  v131 = 8LL;
  v129 = 8LL;
  v127 = 8LL;
  v125 = 8LL;
  v123 = 8LL;
  v121 = 8LL;
  v119 = 8LL;
  v117 = 8LL;
  v115 = 8LL;
  v113 = 8LL;
  v111 = 8LL;
  v109 = 8LL;
  v107 = 8LL;
  v105 = 8LL;
  v103 = 8LL;
  v101 = 8LL;
  v99 = 8LL;
  v97 = 8LL;
  v95 = 8LL;
  v93 = 8LL;
  v91 = 8LL;
  v89 = 8LL;
  v87 = 8LL;
  v85 = 8LL;
  v83 = 8LL;
  v81 = 8LL;
  v79 = 8LL;
  v76 = a19;
  v74 = a18;
  v72 = a17;
  v70 = a16;
  v68 = a15;
  v66 = a14;
  v64 = a13;
  v62 = a12;
  v60 = a11;
  v58 = a10;
  v56 = a9;
  v54 = a8;
  v52 = a7;
  v50 = a6;
  v48 = a5;
  v77 = 8LL;
  v75 = 8LL;
  v73 = 8LL;
  v71 = 8LL;
  v69 = 8LL;
  v67 = 8LL;
  v65 = 8LL;
  v63 = 8LL;
  v61 = 8LL;
  v59 = 8LL;
  v57 = 8LL;
  v55 = 8LL;
  v53 = 8LL;
  v51 = 8LL;
  v49 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C92F8, a2, 0LL, 0LL, 0x2Cu, &v47);
}
