/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U1@U3@U1@U3@U3@U4@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@55555555553353556555555@Z @ 0x1C01E69C4
 * Callers:
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01ECBAC (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
  __int64 v36; // rcx
  _BYTE *v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  _BYTE *v40; // rdx
  int v41; // ecx
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  _BYTE *v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+BCh] [rbp-44h]
  __int64 v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  __int64 v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  __int64 v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  __int64 v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  __int64 v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  __int64 v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  __int64 v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]
  __int64 v73; // [rsp+130h] [rbp+30h]
  __int64 v74; // [rsp+138h] [rbp+38h]
  __int64 v75; // [rsp+140h] [rbp+40h]
  __int64 v76; // [rsp+148h] [rbp+48h]
  __int64 v77; // [rsp+150h] [rbp+50h]
  __int64 v78; // [rsp+158h] [rbp+58h]
  __int64 v79; // [rsp+160h] [rbp+60h]
  __int64 v80; // [rsp+168h] [rbp+68h]
  __int64 v81; // [rsp+170h] [rbp+70h]
  __int64 v82; // [rsp+178h] [rbp+78h]
  __int64 v83; // [rsp+180h] [rbp+80h]
  __int64 v84; // [rsp+188h] [rbp+88h]
  __int64 v85; // [rsp+190h] [rbp+90h]
  __int64 v86; // [rsp+198h] [rbp+98h]
  __int64 v87; // [rsp+1A0h] [rbp+A0h]
  __int64 v88; // [rsp+1A8h] [rbp+A8h]
  __int64 v89; // [rsp+1B0h] [rbp+B0h]
  __int64 v90; // [rsp+1B8h] [rbp+B8h]
  _BYTE *v91; // [rsp+1C0h] [rbp+C0h]
  int v92; // [rsp+1C8h] [rbp+C8h]
  int v93; // [rsp+1CCh] [rbp+CCh]
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

  v104 = a34;
  v102 = a33;
  v36 = -1LL;
  v100 = a32;
  v98 = a31;
  v96 = a30;
  v94 = a29;
  v105 = 4LL;
  v103 = 4LL;
  v101 = 4LL;
  v37 = *a28;
  v99 = 4LL;
  v97 = 4LL;
  v95 = 4LL;
  if ( v37 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v37 = &unk_1C02A2108;
    v39 = 1;
  }
  v92 = v39;
  v89 = a27;
  v87 = a26;
  v85 = a25;
  v83 = a24;
  v81 = a23;
  v79 = a22;
  v77 = a21;
  v75 = a20;
  v73 = a19;
  v71 = a18;
  v69 = a17;
  v67 = a16;
  v65 = a15;
  v63 = a14;
  v61 = a13;
  v59 = a12;
  v91 = v37;
  v93 = 0;
  v90 = 4LL;
  v40 = *a11;
  v88 = 4LL;
  v86 = 8LL;
  v84 = 4LL;
  v82 = 8LL;
  v80 = 8LL;
  v78 = 4LL;
  v76 = 4LL;
  v74 = 4LL;
  v72 = 4LL;
  v70 = 4LL;
  v68 = 4LL;
  v66 = 4LL;
  v64 = 4LL;
  v62 = 4LL;
  v60 = 4LL;
  if ( v40 )
  {
    do
      ++v36;
    while ( v40[v36] );
    v41 = v36 + 1;
  }
  else
  {
    v40 = &unk_1C02A2108;
    v41 = 1;
  }
  v54 = a10;
  v52 = a9;
  v50 = a8;
  v48 = a7;
  v46 = a6;
  v44 = a5;
  v56 = v40;
  v57 = v41;
  v58 = 0;
  v55 = 4LL;
  v53 = 4LL;
  v51 = 2LL;
  v49 = 8LL;
  v47 = 8LL;
  v45 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x20u, &v43);
}
