/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U1@U2@U1@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@44444444443343445@Z @ 0x1C01E7C40
 * Callers:
 *     ?GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z @ 0x1C01F878C (-GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
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
        void **a25)
{
  __int64 v27; // rcx
  _BYTE *v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  _BYTE *v31; // rdx
  int v32; // ecx
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  _BYTE *v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+8Ch] [rbp-74h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  __int64 v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  __int64 v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  __int64 v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  __int64 v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  __int64 v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  __int64 v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  __int64 v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  __int64 v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  __int64 v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  __int64 v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  __int64 v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]
  __int64 v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+188h] [rbp+88h]
  _BYTE *v76; // [rsp+190h] [rbp+90h]
  int v77; // [rsp+198h] [rbp+98h]
  int v78; // [rsp+19Ch] [rbp+9Ch]

  v27 = -1LL;
  v28 = *a25;
  if ( *a25 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v28 = &unk_1C02A2108;
    v30 = 1;
  }
  v77 = v30;
  v74 = a24;
  v72 = a23;
  v70 = a22;
  v68 = a21;
  v66 = a20;
  v64 = a19;
  v62 = a18;
  v60 = a17;
  v58 = a16;
  v56 = a15;
  v54 = a14;
  v52 = a13;
  v50 = a12;
  v48 = a11;
  v46 = a10;
  v44 = a9;
  v76 = v28;
  v78 = 0;
  v75 = 4LL;
  v31 = *a8;
  v73 = 4LL;
  v71 = 8LL;
  v69 = 4LL;
  v67 = 8LL;
  v65 = 8LL;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 4LL;
  v53 = 4LL;
  v51 = 4LL;
  v49 = 4LL;
  v47 = 4LL;
  v45 = 4LL;
  if ( v31 )
  {
    do
      ++v27;
    while ( v31[v27] );
    v32 = v27 + 1;
  }
  else
  {
    v31 = &unk_1C02A2108;
    v32 = 1;
  }
  v39 = a7;
  v37 = a6;
  v35 = a5;
  v41 = v31;
  v42 = v32;
  v43 = 0;
  v40 = 4LL;
  v38 = 4LL;
  v36 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x17u, &v34);
}
