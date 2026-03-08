/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$03@@666466666666663363664@Z @ 0x1C01D3430
 * Callers:
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01D405C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
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
        void **a31)
{
  __int64 v32; // rcx
  _BYTE *v33; // r8
  __int64 v34; // rax
  int v35; // eax
  _BYTE *v36; // r8
  __int64 v37; // rax
  int v38; // eax
  _BYTE *v39; // r8
  __int64 v40; // rax
  int v41; // eax
  _BYTE *v42; // r8
  int v43; // ecx
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h]
  __int64 v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+68h] [rbp-98h]
  _BYTE *v50; // [rsp+70h] [rbp-90h]
  int v51; // [rsp+78h] [rbp-88h]
  int v52; // [rsp+7Ch] [rbp-84h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  _BYTE *v55; // [rsp+90h] [rbp-70h]
  int v56; // [rsp+98h] [rbp-68h]
  int v57; // [rsp+9Ch] [rbp-64h]
  __int64 v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  __int64 v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  __int64 v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  _BYTE *v66; // [rsp+E0h] [rbp-20h]
  int v67; // [rsp+E8h] [rbp-18h]
  int v68; // [rsp+ECh] [rbp-14h]
  __int64 v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  __int64 v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+108h] [rbp+8h]
  __int64 v73; // [rsp+110h] [rbp+10h]
  __int64 v74; // [rsp+118h] [rbp+18h]
  __int64 v75; // [rsp+120h] [rbp+20h]
  __int64 v76; // [rsp+128h] [rbp+28h]
  __int64 v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  __int64 v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  __int64 v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  __int64 v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  __int64 v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  __int64 v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+188h] [rbp+88h]
  __int64 v89; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]
  __int64 v91; // [rsp+1A0h] [rbp+A0h]
  __int64 v92; // [rsp+1A8h] [rbp+A8h]
  __int64 v93; // [rsp+1B0h] [rbp+B0h]
  __int64 v94; // [rsp+1B8h] [rbp+B8h]
  __int64 v95; // [rsp+1C0h] [rbp+C0h]
  __int64 v96; // [rsp+1C8h] [rbp+C8h]
  __int64 v97; // [rsp+1D0h] [rbp+D0h]
  __int64 v98; // [rsp+1D8h] [rbp+D8h]
  __int64 v99; // [rsp+1E0h] [rbp+E0h]
  __int64 v100; // [rsp+1E8h] [rbp+E8h]
  _BYTE *v101; // [rsp+1F0h] [rbp+F0h]
  int v102; // [rsp+1F8h] [rbp+F8h]
  int v103; // [rsp+1FCh] [rbp+FCh]

  v32 = -1LL;
  v33 = *a31;
  if ( *a31 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( v33[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v33 = &unk_1C02A2108;
    v35 = 1;
  }
  v102 = v35;
  v99 = a30;
  v97 = a29;
  v95 = a28;
  v93 = a27;
  v91 = a26;
  v89 = a25;
  v87 = a24;
  v85 = a23;
  v83 = a22;
  v81 = a21;
  v79 = a20;
  v77 = a19;
  v75 = a18;
  v73 = a17;
  v71 = a16;
  v69 = a15;
  v101 = v33;
  v103 = 0;
  v100 = 4LL;
  v36 = *a14;
  v98 = 4LL;
  v96 = 8LL;
  v94 = 4LL;
  v92 = 8LL;
  v90 = 8LL;
  v88 = 4LL;
  v86 = 4LL;
  v84 = 4LL;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 4LL;
  v76 = 4LL;
  v74 = 4LL;
  v72 = 4LL;
  v70 = 4LL;
  if ( v36 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( v36[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v36 = &unk_1C02A2108;
    v38 = 1;
  }
  v67 = v38;
  v64 = a13;
  v62 = a12;
  v60 = a11;
  v58 = a10;
  v66 = v36;
  v68 = 0;
  v65 = 4LL;
  v39 = *a9;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
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
  v56 = v41;
  v53 = a8;
  v55 = v39;
  v57 = 0;
  v54 = 2LL;
  v42 = *a7;
  if ( *a7 )
  {
    do
      ++v32;
    while ( v42[v32] );
    v43 = v32 + 1;
  }
  else
  {
    v42 = &unk_1C02A2108;
    v43 = 1;
  }
  v48 = a6;
  v46 = a5;
  v50 = v42;
  v51 = v43;
  v52 = 0;
  v49 = 8LL;
  v47 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x1Du, &v45);
}
