/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U1@U3@U1@U3@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@D@@55555555553353556@Z @ 0x1C01E6718
 * Callers:
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01ECBAC (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
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
        void **a28)
{
  __int64 v30; // rcx
  _BYTE *v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  _BYTE *v34; // rdx
  int v35; // ecx
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  __int64 v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  __int64 v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  _BYTE *v50; // [rsp+B0h] [rbp-50h]
  int v51; // [rsp+B8h] [rbp-48h]
  int v52; // [rsp+BCh] [rbp-44h]
  __int64 v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  __int64 v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  __int64 v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  __int64 v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  __int64 v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  __int64 v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  __int64 v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  __int64 v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  __int64 v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  __int64 v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  __int64 v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  __int64 v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  __int64 v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  __int64 v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  __int64 v81; // [rsp+1A0h] [rbp+A0h]
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  __int64 v83; // [rsp+1B0h] [rbp+B0h]
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  _BYTE *v85; // [rsp+1C0h] [rbp+C0h]
  int v86; // [rsp+1C8h] [rbp+C8h]
  int v87; // [rsp+1CCh] [rbp+CCh]

  v30 = -1LL;
  v31 = *a28;
  if ( *a28 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v31 = &unk_1C02A2108;
    v33 = 1;
  }
  v86 = v33;
  v83 = a27;
  v81 = a26;
  v79 = a25;
  v77 = a24;
  v75 = a23;
  v73 = a22;
  v71 = a21;
  v69 = a20;
  v67 = a19;
  v65 = a18;
  v63 = a17;
  v61 = a16;
  v59 = a15;
  v57 = a14;
  v55 = a13;
  v53 = a12;
  v85 = v31;
  v87 = 0;
  v84 = 4LL;
  v34 = *a11;
  v82 = 4LL;
  v80 = 8LL;
  v78 = 4LL;
  v76 = 8LL;
  v74 = 8LL;
  v72 = 4LL;
  v70 = 4LL;
  v68 = 4LL;
  v66 = 4LL;
  v64 = 4LL;
  v62 = 4LL;
  v60 = 4LL;
  v58 = 4LL;
  v56 = 4LL;
  v54 = 4LL;
  if ( v34 )
  {
    do
      ++v30;
    while ( v34[v30] );
    v35 = v30 + 1;
  }
  else
  {
    v34 = &unk_1C02A2108;
    v35 = 1;
  }
  v48 = a10;
  v46 = a9;
  v44 = a8;
  v42 = a7;
  v40 = a6;
  v38 = a5;
  v50 = v34;
  v51 = v35;
  v52 = 0;
  v49 = 4LL;
  v47 = 4LL;
  v45 = 2LL;
  v43 = 8LL;
  v41 = 8LL;
  v39 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x1Au, &v37);
}
