/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$03@@U2@U2@U_tlgWrapperPtrSize@@U4@U4@U4@U4@U3@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@3444444444AEBU?$_tlgWrapperByVal@$03@@44AEBU_tlgWrapperPtrSize@@66665AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x1801509B0
 * Callers:
 *     ?GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4TracePredictionType@@AEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_NI@Z @ 0x18015DD64 (-GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4Tr.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 *a7,
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
        __int64 *a20,
        __int64 *a21,
        __int64 *a22,
        __int64 *a23,
        __int64 *a24,
        __int64 a25,
        __int64 a26,
        __int64 a27)
{
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
  int v60; // [rsp+148h] [rbp+48h]
  int v61; // [rsp+14Ch] [rbp+4Ch]
  __int64 v62; // [rsp+150h] [rbp+50h]
  int v63; // [rsp+158h] [rbp+58h]
  int v64; // [rsp+15Ch] [rbp+5Ch]
  __int64 v65; // [rsp+160h] [rbp+60h]
  int v66; // [rsp+168h] [rbp+68h]
  int v67; // [rsp+16Ch] [rbp+6Ch]
  __int64 v68; // [rsp+170h] [rbp+70h]
  int v69; // [rsp+178h] [rbp+78h]
  int v70; // [rsp+17Ch] [rbp+7Ch]
  __int64 v71; // [rsp+180h] [rbp+80h]
  int v72; // [rsp+188h] [rbp+88h]
  int v73; // [rsp+18Ch] [rbp+8Ch]
  __int64 v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  __int64 v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  __int64 v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]

  v78 = a27;
  v76 = a26;
  v74 = a25;
  v71 = *a24;
  v72 = *((_DWORD *)a24 + 2);
  v79 = 4LL;
  v77 = 1LL;
  v68 = *a23;
  v69 = *((_DWORD *)a23 + 2);
  v75 = 4LL;
  v73 = 0;
  v65 = *a22;
  v66 = *((_DWORD *)a22 + 2);
  v70 = 0;
  v67 = 0;
  v62 = *a21;
  v63 = *((_DWORD *)a21 + 2);
  v64 = 0;
  v61 = 0;
  v59 = *a20;
  v60 = *((_DWORD *)a20 + 2);
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
  v58 = 8LL;
  v56 = 8LL;
  v54 = 4LL;
  v33 = *a7;
  v52 = 8LL;
  v50 = 8LL;
  v48 = 8LL;
  v46 = 8LL;
  v44 = 8LL;
  v42 = 8LL;
  v40 = 8LL;
  v38 = 8LL;
  v36 = 8LL;
  v34 = 16LL;
  v31 = a6;
  v32 = 8LL;
  v30 = 16LL;
  v29 = *a5;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x19u, &v28);
}
