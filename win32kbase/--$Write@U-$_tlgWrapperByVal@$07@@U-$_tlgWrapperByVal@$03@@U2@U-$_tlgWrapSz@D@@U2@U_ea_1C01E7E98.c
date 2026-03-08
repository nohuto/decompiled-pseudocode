/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@U2@U3@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@44444444443343445444444@Z @ 0x1C01E7E98
 * Callers:
 *     ?GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z @ 0x1C01F92E8 (-GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        void **a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31)
{
  __int64 v33; // rcx
  _BYTE *v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  _BYTE *v37; // rdx
  int v38; // ecx
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  _BYTE *v47; // [rsp+80h] [rbp-80h]
  int v48; // [rsp+88h] [rbp-78h]
  int v49; // [rsp+8Ch] [rbp-74h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h]
  __int64 v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  __int64 v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  __int64 v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  __int64 v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  __int64 v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  __int64 v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  __int64 v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  __int64 v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  __int64 v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  __int64 v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+168h] [rbp+68h]
  __int64 v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+178h] [rbp+78h]
  __int64 v80; // [rsp+180h] [rbp+80h]
  __int64 v81; // [rsp+188h] [rbp+88h]
  _BYTE *v82; // [rsp+190h] [rbp+90h]
  int v83; // [rsp+198h] [rbp+98h]
  int v84; // [rsp+19Ch] [rbp+9Ch]
  __int64 v85; // [rsp+1A0h] [rbp+A0h]
  __int64 v86; // [rsp+1A8h] [rbp+A8h]
  __int64 v87; // [rsp+1B0h] [rbp+B0h]
  __int64 v88; // [rsp+1B8h] [rbp+B8h]
  __int64 v89; // [rsp+1C0h] [rbp+C0h]
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  __int64 v91; // [rsp+1D0h] [rbp+D0h]
  __int64 v92; // [rsp+1D8h] [rbp+D8h]
  __int64 v93; // [rsp+1E0h] [rbp+E0h]
  __int64 v94; // [rsp+1E8h] [rbp+E8h]
  __int64 v95; // [rsp+1F0h] [rbp+F0h]
  __int64 v96; // [rsp+1F8h] [rbp+F8h]

  v95 = a31;
  v93 = a30;
  v33 = -1LL;
  v91 = a29;
  v89 = a28;
  v87 = a27;
  v85 = a26;
  v96 = 4LL;
  v94 = 4LL;
  v92 = 4LL;
  v34 = *a25;
  v90 = 4LL;
  v88 = 4LL;
  v86 = 4LL;
  if ( v34 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v34 = &unk_1C02A2108;
    v36 = 1;
  }
  v83 = v36;
  v80 = a24;
  v78 = a23;
  v76 = a22;
  v74 = a21;
  v72 = a20;
  v70 = a19;
  v68 = a18;
  v66 = a17;
  v64 = a16;
  v62 = a15;
  v60 = a14;
  v58 = a13;
  v56 = a12;
  v54 = a11;
  v52 = a10;
  v50 = a9;
  v82 = v34;
  v84 = 0;
  v81 = 4LL;
  v37 = *a8;
  v79 = 4LL;
  v77 = 8LL;
  v75 = 4LL;
  v73 = 8LL;
  v71 = 8LL;
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
  if ( v37 )
  {
    do
      ++v33;
    while ( v37[v33] );
    v38 = v33 + 1;
  }
  else
  {
    v37 = &unk_1C02A2108;
    v38 = 1;
  }
  v45 = a7;
  v43 = a6;
  v41 = a5;
  v47 = v37;
  v48 = v38;
  v49 = 0;
  v46 = 4LL;
  v44 = 4LL;
  v42 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x1Du, &v40);
}
