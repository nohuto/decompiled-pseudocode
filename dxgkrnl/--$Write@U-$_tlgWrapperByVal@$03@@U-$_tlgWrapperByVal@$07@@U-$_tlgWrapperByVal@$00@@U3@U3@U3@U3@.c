/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5555555544455AEBU?$_tlgWrapperByRef@$0BA@@@44455@Z @ 0x1C00690F4
 * Callers:
 *     ?UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1C0212DF0 (-UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
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
        __int64 *a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26)
{
  __int64 v26; // rcx
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  __int64 v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  __int64 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  __int64 v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  __int64 v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  __int64 v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  __int64 v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+128h] [rbp+28h]
  __int64 v57; // [rsp+130h] [rbp+30h]
  __int64 v58; // [rsp+138h] [rbp+38h]
  __int64 v59; // [rsp+140h] [rbp+40h]
  __int64 v60; // [rsp+148h] [rbp+48h]
  __int64 v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]
  __int64 v63; // [rsp+160h] [rbp+60h]
  __int64 v64; // [rsp+168h] [rbp+68h]
  __int64 v65; // [rsp+170h] [rbp+70h]
  __int64 v66; // [rsp+178h] [rbp+78h]
  __int64 v67; // [rsp+180h] [rbp+80h]
  __int64 v68; // [rsp+188h] [rbp+88h]
  __int64 v69; // [rsp+190h] [rbp+90h]
  __int64 v70; // [rsp+198h] [rbp+98h]
  __int64 v71; // [rsp+1A0h] [rbp+A0h]
  __int64 v72; // [rsp+1A8h] [rbp+A8h]

  v71 = a26;
  v69 = a25;
  v67 = a24;
  v65 = a23;
  v63 = a22;
  v72 = 1LL;
  v70 = 1LL;
  v68 = 8LL;
  v26 = *a21;
  v59 = a20;
  v57 = a19;
  v55 = a18;
  v53 = a17;
  v51 = a16;
  v49 = a15;
  v47 = a14;
  v45 = a13;
  v43 = a12;
  v41 = a11;
  v39 = a10;
  v37 = a9;
  v35 = a8;
  v33 = a7;
  v31 = a6;
  v29 = a5;
  v61 = v26;
  v66 = 8LL;
  v64 = 8LL;
  v62 = 16LL;
  v60 = 1LL;
  v58 = 1LL;
  v56 = 8LL;
  v54 = 8LL;
  v52 = 8LL;
  v50 = 1LL;
  v48 = 1LL;
  v46 = 1LL;
  v44 = 1LL;
  v42 = 1LL;
  v40 = 1LL;
  v38 = 1LL;
  v36 = 1LL;
  v34 = 1LL;
  v32 = 8LL;
  v30 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C013A918, a2, a3, 0LL, 0x18u, &v28);
}
