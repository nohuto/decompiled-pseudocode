/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U2@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$03@@666466666666663363664666666@Z @ 0x1C01D3778
 * Callers:
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01D405C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        void **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        void **a14,
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
        void **a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37)
{
  __int64 v38; // rdx
  _BYTE *v39; // r8
  __int64 v40; // rax
  int v41; // eax
  _BYTE *v42; // r8
  __int64 v43; // rax
  int v44; // eax
  _BYTE *v45; // r8
  __int64 v46; // rax
  int v47; // eax
  _BYTE *v48; // r8
  int v49; // edx
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  _BYTE *v56; // [rsp+70h] [rbp-90h]
  int v57; // [rsp+78h] [rbp-88h]
  int v58; // [rsp+7Ch] [rbp-84h]
  __int64 v59; // [rsp+80h] [rbp-80h]
  __int64 v60; // [rsp+88h] [rbp-78h]
  _BYTE *v61; // [rsp+90h] [rbp-70h]
  int v62; // [rsp+98h] [rbp-68h]
  int v63; // [rsp+9Ch] [rbp-64h]
  __int64 v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  __int64 v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  __int64 v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  _BYTE *v72; // [rsp+E0h] [rbp-20h]
  int v73; // [rsp+E8h] [rbp-18h]
  int v74; // [rsp+ECh] [rbp-14h]
  __int64 v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  __int64 v77; // [rsp+100h] [rbp+0h]
  __int64 v78; // [rsp+108h] [rbp+8h]
  __int64 v79; // [rsp+110h] [rbp+10h]
  __int64 v80; // [rsp+118h] [rbp+18h]
  __int64 v81; // [rsp+120h] [rbp+20h]
  __int64 v82; // [rsp+128h] [rbp+28h]
  __int64 v83; // [rsp+130h] [rbp+30h]
  __int64 v84; // [rsp+138h] [rbp+38h]
  __int64 v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  __int64 v87; // [rsp+150h] [rbp+50h]
  __int64 v88; // [rsp+158h] [rbp+58h]
  __int64 v89; // [rsp+160h] [rbp+60h]
  __int64 v90; // [rsp+168h] [rbp+68h]
  __int64 v91; // [rsp+170h] [rbp+70h]
  __int64 v92; // [rsp+178h] [rbp+78h]
  __int64 v93; // [rsp+180h] [rbp+80h]
  __int64 v94; // [rsp+188h] [rbp+88h]
  __int64 v95; // [rsp+190h] [rbp+90h]
  __int64 v96; // [rsp+198h] [rbp+98h]
  __int64 v97; // [rsp+1A0h] [rbp+A0h]
  __int64 v98; // [rsp+1A8h] [rbp+A8h]
  __int64 v99; // [rsp+1B0h] [rbp+B0h]
  __int64 v100; // [rsp+1B8h] [rbp+B8h]
  __int64 v101; // [rsp+1C0h] [rbp+C0h]
  __int64 v102; // [rsp+1C8h] [rbp+C8h]
  __int64 v103; // [rsp+1D0h] [rbp+D0h]
  __int64 v104; // [rsp+1D8h] [rbp+D8h]
  __int64 v105; // [rsp+1E0h] [rbp+E0h]
  __int64 v106; // [rsp+1E8h] [rbp+E8h]
  _BYTE *v107; // [rsp+1F0h] [rbp+F0h]
  int v108; // [rsp+1F8h] [rbp+F8h]
  int v109; // [rsp+1FCh] [rbp+FCh]
  __int64 v110; // [rsp+200h] [rbp+100h]
  __int64 v111; // [rsp+208h] [rbp+108h]
  __int64 v112; // [rsp+210h] [rbp+110h]
  __int64 v113; // [rsp+218h] [rbp+118h]
  __int64 v114; // [rsp+220h] [rbp+120h]
  __int64 v115; // [rsp+228h] [rbp+128h]
  __int64 v116; // [rsp+230h] [rbp+130h]
  __int64 v117; // [rsp+238h] [rbp+138h]
  __int64 v118; // [rsp+240h] [rbp+140h]
  __int64 v119; // [rsp+248h] [rbp+148h]
  __int64 v120; // [rsp+250h] [rbp+150h]
  __int64 v121; // [rsp+258h] [rbp+158h]

  v120 = a37;
  v38 = -1LL;
  v118 = a36;
  v116 = a35;
  v114 = a34;
  v112 = a33;
  v110 = a32;
  v121 = 4LL;
  v119 = 4LL;
  v117 = 4LL;
  v39 = *a31;
  v115 = 4LL;
  v113 = 4LL;
  v111 = 4LL;
  if ( v39 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( v39[v40] );
    v41 = v40 + 1;
  }
  else
  {
    v39 = &unk_1C02A2108;
    v41 = 1;
  }
  v108 = v41;
  v105 = a30;
  v103 = a29;
  v101 = a28;
  v99 = a27;
  v97 = a26;
  v95 = a25;
  v93 = a24;
  v91 = a23;
  v89 = a22;
  v87 = a21;
  v85 = a20;
  v83 = a19;
  v81 = a18;
  v79 = a17;
  v77 = a16;
  v75 = a15;
  v107 = v39;
  v109 = 0;
  v106 = 4LL;
  v42 = *a14;
  v104 = 4LL;
  v102 = 8LL;
  v100 = 4LL;
  v98 = 8LL;
  v96 = 8LL;
  v94 = 4LL;
  v92 = 4LL;
  v90 = 4LL;
  v88 = 4LL;
  v86 = 4LL;
  v84 = 4LL;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 4LL;
  v76 = 4LL;
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
  v73 = v44;
  v70 = a13;
  v68 = a12;
  v66 = a11;
  v64 = a10;
  v72 = v42;
  v74 = 0;
  v71 = 4LL;
  v45 = *a9;
  v69 = 4LL;
  v67 = 4LL;
  v65 = 4LL;
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
  v62 = v47;
  v59 = a8;
  v61 = v45;
  v63 = 0;
  v60 = 2LL;
  v48 = *a7;
  if ( *a7 )
  {
    do
      ++v38;
    while ( v48[v38] );
    v49 = v38 + 1;
  }
  else
  {
    v48 = &unk_1C02A2108;
    v49 = 1;
  }
  v54 = a6;
  v52 = a5;
  v56 = v48;
  v57 = v49;
  v58 = 0;
  v55 = 8LL;
  v53 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x23u, &v51);
}
