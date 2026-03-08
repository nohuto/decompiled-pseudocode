/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@553333333333333AEBU?$_tlgWrapSz@D@@5@Z @ 0x1C0034218
 * Callers:
 *     ?VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C00081A0 (-VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
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
        void **a24,
        __int64 a25)
{
  _BYTE *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  __int64 v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  __int64 v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int64 v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  __int64 v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  __int64 v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  __int64 v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  __int64 v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  __int64 v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  __int64 v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  __int64 v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]
  __int64 v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h]
  _BYTE *v68; // [rsp+180h] [rbp+80h]
  int v69; // [rsp+188h] [rbp+88h]
  int v70; // [rsp+18Ch] [rbp+8Ch]
  __int64 v71; // [rsp+190h] [rbp+90h]
  __int64 v72; // [rsp+198h] [rbp+98h]

  v71 = a25;
  v72 = 4LL;
  v25 = *a24;
  if ( *a24 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v25 = &unk_1C00627B9;
    v27 = 1;
  }
  v69 = v27;
  v66 = a23;
  v64 = a22;
  v62 = a21;
  v60 = a20;
  v58 = a19;
  v56 = a18;
  v54 = a17;
  v52 = a16;
  v50 = a15;
  v48 = a14;
  v46 = a13;
  v44 = a12;
  v42 = a11;
  v40 = a10;
  v38 = a9;
  v36 = a8;
  v34 = a7;
  v32 = a6;
  v30 = a5;
  v68 = v25;
  v70 = 0;
  v67 = 8LL;
  v65 = 8LL;
  v63 = 8LL;
  v61 = 8LL;
  v59 = 8LL;
  v57 = 8LL;
  v55 = 8LL;
  v53 = 8LL;
  v51 = 8LL;
  v49 = 8LL;
  v47 = 8LL;
  v45 = 8LL;
  v43 = 8LL;
  v41 = 4LL;
  v39 = 4LL;
  v37 = 4LL;
  v35 = 8LL;
  v33 = 2LL;
  v31 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, 0LL, 0LL, 0x17u, &v29);
}
