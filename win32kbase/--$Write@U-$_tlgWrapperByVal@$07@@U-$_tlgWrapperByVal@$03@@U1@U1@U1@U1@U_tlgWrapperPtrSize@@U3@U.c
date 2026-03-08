/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U_tlgWrapperPtrSize@@U3@U1@U1@U1@U1@U3@U3@U1@U1@U1@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3333AEBU_tlgWrapperPtrSize@@5333355333355@Z @ 0x1C00013F8
 * Callers:
 *     ?Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z @ 0x1C00DD904 (-Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11,
        __int64 *a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 *a17,
        __int64 *a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 *a23,
        __int64 *a24)
{
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  __int64 v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  __int64 v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int64 v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  __int64 v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  __int64 v52; // [rsp+110h] [rbp+10h]
  int v53; // [rsp+118h] [rbp+18h]
  int v54; // [rsp+11Ch] [rbp+1Ch]
  __int64 v55; // [rsp+120h] [rbp+20h]
  int v56; // [rsp+128h] [rbp+28h]
  int v57; // [rsp+12Ch] [rbp+2Ch]
  __int64 v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  __int64 v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  __int64 v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  __int64 v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]
  __int64 v66; // [rsp+170h] [rbp+70h]
  int v67; // [rsp+178h] [rbp+78h]
  int v68; // [rsp+17Ch] [rbp+7Ch]
  __int64 v69; // [rsp+180h] [rbp+80h]
  int v70; // [rsp+188h] [rbp+88h]
  int v71; // [rsp+18Ch] [rbp+8Ch]

  v71 = 0;
  v68 = 0;
  v65 = 8LL;
  v69 = *a24;
  v70 = *((_DWORD *)a24 + 2);
  v63 = 8LL;
  v61 = 8LL;
  v66 = *a23;
  v67 = *((_DWORD *)a23 + 2);
  v64 = a22;
  v62 = a21;
  v60 = a20;
  v58 = a19;
  v55 = *a18;
  v56 = *((_DWORD *)a18 + 2);
  v59 = 8LL;
  v57 = 0;
  v52 = *a17;
  v53 = *((_DWORD *)a17 + 2);
  v50 = a16;
  v48 = a15;
  v46 = a14;
  v44 = a13;
  v41 = *a12;
  v42 = *((_DWORD *)a12 + 2);
  v54 = 0;
  v51 = 8LL;
  v38 = *a11;
  v39 = *((_DWORD *)a11 + 2);
  v36 = a10;
  v34 = a9;
  v32 = a8;
  v30 = a7;
  v28 = a6;
  v26 = a5;
  v49 = 8LL;
  v47 = 8LL;
  v45 = 8LL;
  v43 = 0;
  v40 = 0;
  v37 = 8LL;
  v35 = 8LL;
  v33 = 8LL;
  v31 = 8LL;
  v29 = 4LL;
  v27 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02C93D8, a2, 0, 0, 0x16u, &v25);
}
