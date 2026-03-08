/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U3@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U3@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6566666666663363665666666@Z @ 0x1C01CA888
 * Callers:
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1C01CB5A4 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        __int64 a34)
{
  __int64 v35; // rcx
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
  __int64 v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  _BYTE *v52; // [rsp+80h] [rbp-80h]
  int v53; // [rsp+88h] [rbp-78h]
  int v54; // [rsp+8Ch] [rbp-74h]
  __int64 v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  _BYTE *v59; // [rsp+B0h] [rbp-50h]
  int v60; // [rsp+B8h] [rbp-48h]
  int v61; // [rsp+BCh] [rbp-44h]
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
  _BYTE *v94; // [rsp+1C0h] [rbp+C0h]
  int v95; // [rsp+1C8h] [rbp+C8h]
  int v96; // [rsp+1CCh] [rbp+CCh]
  __int64 v97; // [rsp+1D0h] [rbp+D0h]
  __int64 v98; // [rsp+1D8h] [rbp+D8h]
  __int64 v99; // [rsp+1E0h] [rbp+E0h]
  __int64 v100; // [rsp+1E8h] [rbp+E8h]
  __int64 v101; // [rsp+1F0h] [rbp+F0h]
  __int64 v102; // [rsp+1F8h] [rbp+F8h]
  __int64 v103; // [rsp+200h] [rbp+100h]
  __int64 v104; // [rsp+208h] [rbp+108h]
  __int64 v105; // [rsp+210h] [rbp+110h]
  __int64 v106; // [rsp+218h] [rbp+118h]
  __int64 v107; // [rsp+220h] [rbp+120h]
  __int64 v108; // [rsp+228h] [rbp+128h]

  v107 = a34;
  v35 = -1LL;
  v105 = a33;
  v103 = a32;
  v101 = a31;
  v99 = a30;
  v97 = a29;
  v108 = 4LL;
  v106 = 4LL;
  v104 = 4LL;
  v36 = *a28;
  v102 = 4LL;
  v100 = 4LL;
  v98 = 4LL;
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
  v95 = v38;
  v92 = a27;
  v90 = a26;
  v88 = a25;
  v86 = a24;
  v84 = a23;
  v82 = a22;
  v80 = a21;
  v78 = a20;
  v76 = a19;
  v74 = a18;
  v72 = a17;
  v70 = a16;
  v68 = a15;
  v66 = a14;
  v64 = a13;
  v62 = a12;
  v94 = v36;
  v96 = 0;
  v93 = 4LL;
  v39 = *a11;
  v91 = 4LL;
  v89 = 8LL;
  v87 = 4LL;
  v85 = 8LL;
  v83 = 8LL;
  v81 = 4LL;
  v79 = 4LL;
  v77 = 4LL;
  v75 = 4LL;
  v73 = 4LL;
  v71 = 4LL;
  v69 = 4LL;
  v67 = 4LL;
  v65 = 4LL;
  v63 = 4LL;
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
  v60 = v41;
  v57 = a10;
  v55 = a9;
  v59 = v39;
  v61 = 0;
  v58 = 4LL;
  v42 = *a8;
  v56 = 4LL;
  if ( v42 )
  {
    do
      ++v35;
    while ( v42[v35] );
    v43 = v35 + 1;
  }
  else
  {
    v42 = &unk_1C02A2108;
    v43 = 1;
  }
  v50 = a7;
  v48 = a6;
  v46 = a5;
  v52 = v42;
  v53 = v43;
  v54 = 0;
  v51 = 2LL;
  v49 = 8LL;
  v47 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x20u, &v45);
}
