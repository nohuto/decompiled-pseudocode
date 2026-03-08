/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@U4@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@446444444444444444444@Z @ 0x1C02255C0
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C007DFAC (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const WCHAR **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        const WCHAR **a14,
        void **a15,
        __int64 a16,
        __int64 a17,
        void **a18,
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
        __int64 a36)
{
  __int64 v38; // rcx
  _BYTE *v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  _BYTE *v42; // rdx
  __int64 v43; // rax
  int v44; // eax
  int v45; // r8d
  const WCHAR *v46; // rdx
  __int64 v47; // rax
  int v48; // r9d
  const WCHAR *v49; // rdx
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  const WCHAR *v60; // [rsp+90h] [rbp-70h]
  int v61; // [rsp+98h] [rbp-68h]
  int v62; // [rsp+9Ch] [rbp-64h]
  __int64 v63; // [rsp+A0h] [rbp-60h]
  __int64 v64; // [rsp+A8h] [rbp-58h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  const WCHAR *v71; // [rsp+E0h] [rbp-20h]
  int v72; // [rsp+E8h] [rbp-18h]
  int v73; // [rsp+ECh] [rbp-14h]
  _BYTE *v74; // [rsp+F0h] [rbp-10h]
  int v75; // [rsp+F8h] [rbp-8h]
  int v76; // [rsp+FCh] [rbp-4h]
  __int64 v77; // [rsp+100h] [rbp+0h]
  __int64 v78; // [rsp+108h] [rbp+8h]
  __int64 v79; // [rsp+110h] [rbp+10h]
  __int64 v80; // [rsp+118h] [rbp+18h]
  _BYTE *v81; // [rsp+120h] [rbp+20h]
  int v82; // [rsp+128h] [rbp+28h]
  int v83; // [rsp+12Ch] [rbp+2Ch]
  __int64 v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]
  __int64 v86; // [rsp+140h] [rbp+40h]
  __int64 v87; // [rsp+148h] [rbp+48h]
  __int64 v88; // [rsp+150h] [rbp+50h]
  __int64 v89; // [rsp+158h] [rbp+58h]
  __int64 v90; // [rsp+160h] [rbp+60h]
  __int64 v91; // [rsp+168h] [rbp+68h]
  __int64 v92; // [rsp+170h] [rbp+70h]
  __int64 v93; // [rsp+178h] [rbp+78h]
  __int64 v94; // [rsp+180h] [rbp+80h]
  __int64 v95; // [rsp+188h] [rbp+88h]
  __int64 v96; // [rsp+190h] [rbp+90h]
  __int64 v97; // [rsp+198h] [rbp+98h]
  __int64 v98; // [rsp+1A0h] [rbp+A0h]
  __int64 v99; // [rsp+1A8h] [rbp+A8h]
  __int64 v100; // [rsp+1B0h] [rbp+B0h]
  __int64 v101; // [rsp+1B8h] [rbp+B8h]
  __int64 v102; // [rsp+1C0h] [rbp+C0h]
  __int64 v103; // [rsp+1C8h] [rbp+C8h]
  __int64 v104; // [rsp+1D0h] [rbp+D0h]
  __int64 v105; // [rsp+1D8h] [rbp+D8h]
  __int64 v106; // [rsp+1E0h] [rbp+E0h]
  __int64 v107; // [rsp+1E8h] [rbp+E8h]
  __int64 v108; // [rsp+1F0h] [rbp+F0h]
  __int64 v109; // [rsp+1F8h] [rbp+F8h]
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

  v118 = a36;
  v116 = a35;
  v38 = -1LL;
  v114 = a34;
  v112 = a33;
  v110 = a32;
  v108 = a31;
  v106 = a30;
  v104 = a29;
  v102 = a28;
  v100 = a27;
  v98 = a26;
  v96 = a25;
  v94 = a24;
  v92 = a23;
  v90 = a22;
  v88 = a21;
  v86 = a20;
  v84 = a19;
  v119 = 4LL;
  v117 = 4LL;
  v115 = 4LL;
  v39 = *a18;
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
  v82 = v41;
  v79 = a17;
  v77 = a16;
  v81 = v39;
  v83 = 0;
  v80 = 4LL;
  v42 = *a15;
  v78 = 4LL;
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
  v75 = v44;
  v45 = 2;
  v74 = v42;
  v76 = 0;
  v46 = *a14;
  if ( *a14 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( v46[v47] );
    v48 = 2 * v47 + 2;
  }
  else
  {
    v46 = &word_1C02856D8;
    v48 = 2;
  }
  v69 = a13;
  v67 = a12;
  v65 = a11;
  v63 = a10;
  v71 = v46;
  v72 = v48;
  v73 = 0;
  v49 = *a9;
  v70 = 4LL;
  v68 = 4LL;
  v66 = 4LL;
  v64 = 4LL;
  if ( v49 )
  {
    do
      ++v38;
    while ( v49[v38] );
    v45 = 2 * v38 + 2;
  }
  else
  {
    v49 = &word_1C02856D8;
  }
  v58 = a8;
  v56 = a7;
  v54 = a6;
  v52 = a5;
  v60 = v49;
  v61 = v45;
  v62 = 0;
  v59 = 8LL;
  v57 = 8LL;
  v55 = 4LL;
  v53 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x22u, &v51);
}
