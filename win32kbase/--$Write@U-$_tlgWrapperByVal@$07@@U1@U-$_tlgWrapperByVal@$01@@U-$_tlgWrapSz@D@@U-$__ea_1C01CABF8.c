/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6566666666663363665666666666666@Z @ 0x1C01CABF8
 * Callers:
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1C01CB5A4 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        __int64 a9,
        __int64 a10,
        void **a11,
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
        void **a28,
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
        __int64 a40)
{
  __int64 v41; // rcx
  _BYTE *v42; // r8
  __int64 v43; // rax
  int v44; // eax
  _BYTE *v45; // r8
  __int64 v46; // rax
  int v47; // eax
  _BYTE *v48; // r8
  int v49; // ecx
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  _BYTE *v58; // [rsp+80h] [rbp-80h]
  int v59; // [rsp+88h] [rbp-78h]
  int v60; // [rsp+8Ch] [rbp-74h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  __int64 v63; // [rsp+A0h] [rbp-60h]
  __int64 v64; // [rsp+A8h] [rbp-58h]
  _BYTE *v65; // [rsp+B0h] [rbp-50h]
  int v66; // [rsp+B8h] [rbp-48h]
  int v67; // [rsp+BCh] [rbp-44h]
  __int64 v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  __int64 v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  __int64 v72; // [rsp+E0h] [rbp-20h]
  __int64 v73; // [rsp+E8h] [rbp-18h]
  __int64 v74; // [rsp+F0h] [rbp-10h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  __int64 v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]
  __int64 v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  __int64 v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  __int64 v82; // [rsp+130h] [rbp+30h]
  __int64 v83; // [rsp+138h] [rbp+38h]
  __int64 v84; // [rsp+140h] [rbp+40h]
  __int64 v85; // [rsp+148h] [rbp+48h]
  __int64 v86; // [rsp+150h] [rbp+50h]
  __int64 v87; // [rsp+158h] [rbp+58h]
  __int64 v88; // [rsp+160h] [rbp+60h]
  __int64 v89; // [rsp+168h] [rbp+68h]
  __int64 v90; // [rsp+170h] [rbp+70h]
  __int64 v91; // [rsp+178h] [rbp+78h]
  __int64 v92; // [rsp+180h] [rbp+80h]
  __int64 v93; // [rsp+188h] [rbp+88h]
  __int64 v94; // [rsp+190h] [rbp+90h]
  __int64 v95; // [rsp+198h] [rbp+98h]
  __int64 v96; // [rsp+1A0h] [rbp+A0h]
  __int64 v97; // [rsp+1A8h] [rbp+A8h]
  __int64 v98; // [rsp+1B0h] [rbp+B0h]
  __int64 v99; // [rsp+1B8h] [rbp+B8h]
  _BYTE *v100; // [rsp+1C0h] [rbp+C0h]
  int v101; // [rsp+1C8h] [rbp+C8h]
  int v102; // [rsp+1CCh] [rbp+CCh]
  __int64 v103; // [rsp+1D0h] [rbp+D0h]
  __int64 v104; // [rsp+1D8h] [rbp+D8h]
  __int64 v105; // [rsp+1E0h] [rbp+E0h]
  __int64 v106; // [rsp+1E8h] [rbp+E8h]
  __int64 v107; // [rsp+1F0h] [rbp+F0h]
  __int64 v108; // [rsp+1F8h] [rbp+F8h]
  __int64 v109; // [rsp+200h] [rbp+100h]
  __int64 v110; // [rsp+208h] [rbp+108h]
  __int64 v111; // [rsp+210h] [rbp+110h]
  __int64 v112; // [rsp+218h] [rbp+118h]
  __int64 v113; // [rsp+220h] [rbp+120h]
  __int64 v114; // [rsp+228h] [rbp+128h]
  __int64 v115; // [rsp+230h] [rbp+130h]
  __int64 v116; // [rsp+238h] [rbp+138h]
  __int64 v117; // [rsp+240h] [rbp+140h]
  __int64 v118; // [rsp+248h] [rbp+148h]
  __int64 v119; // [rsp+250h] [rbp+150h]
  __int64 v120; // [rsp+258h] [rbp+158h]
  __int64 v121; // [rsp+260h] [rbp+160h]
  __int64 v122; // [rsp+268h] [rbp+168h]
  __int64 v123; // [rsp+270h] [rbp+170h]
  __int64 v124; // [rsp+278h] [rbp+178h]
  __int64 v125; // [rsp+280h] [rbp+180h]
  __int64 v126; // [rsp+288h] [rbp+188h]

  v125 = a40;
  v41 = -1LL;
  v123 = a39;
  v121 = a38;
  v119 = a37;
  v117 = a36;
  v115 = a35;
  v113 = a34;
  v111 = a33;
  v109 = a32;
  v107 = a31;
  v105 = a30;
  v103 = a29;
  v126 = 4LL;
  v124 = 4LL;
  v122 = 4LL;
  v42 = *a28;
  v120 = 4LL;
  v118 = 4LL;
  v116 = 4LL;
  v114 = 4LL;
  v112 = 4LL;
  v110 = 4LL;
  v108 = 4LL;
  v106 = 4LL;
  v104 = 4LL;
  if ( v42 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( v42[v43] );
    v44 = v43 + 1;
  }
  else
  {
    v42 = &unk_1C02A2108;
    v44 = 1;
  }
  v101 = v44;
  v98 = a27;
  v96 = a26;
  v94 = a25;
  v92 = a24;
  v90 = a23;
  v88 = a22;
  v86 = a21;
  v84 = a20;
  v82 = a19;
  v80 = a18;
  v78 = a17;
  v76 = a16;
  v74 = a15;
  v72 = a14;
  v70 = a13;
  v68 = a12;
  v100 = v42;
  v102 = 0;
  v99 = 4LL;
  v45 = *a11;
  v97 = 4LL;
  v95 = 8LL;
  v93 = 4LL;
  v91 = 8LL;
  v89 = 8LL;
  v87 = 4LL;
  v85 = 4LL;
  v83 = 4LL;
  v81 = 4LL;
  v79 = 4LL;
  v77 = 4LL;
  v75 = 4LL;
  v73 = 4LL;
  v71 = 4LL;
  v69 = 4LL;
  if ( v45 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( v45[v46] );
    v47 = v46 + 1;
  }
  else
  {
    v45 = &unk_1C02A2108;
    v47 = 1;
  }
  v66 = v47;
  v63 = a10;
  v61 = a9;
  v65 = v45;
  v67 = 0;
  v64 = 4LL;
  v48 = *a8;
  v62 = 4LL;
  if ( v48 )
  {
    do
      ++v41;
    while ( v48[v41] );
    v49 = v41 + 1;
  }
  else
  {
    v48 = &unk_1C02A2108;
    v49 = 1;
  }
  v56 = a7;
  v54 = a6;
  v52 = a5;
  v58 = v48;
  v59 = v49;
  v60 = 0;
  v57 = 2LL;
  v55 = 8LL;
  v53 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x26u, &v51);
}
