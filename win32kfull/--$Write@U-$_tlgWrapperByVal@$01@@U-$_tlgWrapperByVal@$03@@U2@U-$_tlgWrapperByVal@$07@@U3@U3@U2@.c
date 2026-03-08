/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@U3@U3@U2@U3@U2@U2@U3@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@5545445AEBU?$_tlgWrapSz@G@@44446AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01B4A5C
 * Callers:
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C00723D0 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
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
        const unsigned __int16 **a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        const unsigned __int16 **a21,
        void **a22)
{
  __int64 v24; // rcx
  _BYTE *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  const unsigned __int16 *v28; // rdx
  __int64 v29; // rax
  int v30; // r8d
  const unsigned __int16 *v31; // rdx
  int v32; // eax
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  __int64 v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  __int64 v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v57; // [rsp+100h] [rbp+0h]
  int v58; // [rsp+108h] [rbp+8h]
  int v59; // [rsp+10Ch] [rbp+Ch]
  __int64 v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  __int64 v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  __int64 v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  __int64 v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  const unsigned __int16 *v68; // [rsp+150h] [rbp+50h]
  int v69; // [rsp+158h] [rbp+58h]
  int v70; // [rsp+15Ch] [rbp+5Ch]
  _BYTE *v71; // [rsp+160h] [rbp+60h]
  int v72; // [rsp+168h] [rbp+68h]
  int v73; // [rsp+16Ch] [rbp+6Ch]

  v24 = -1LL;
  v25 = *a22;
  if ( *a22 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = v26 + 1;
  }
  else
  {
    v25 = &unk_1C03206E9;
    v27 = 1;
  }
  v72 = v27;
  v71 = v25;
  v73 = 0;
  v28 = *a21;
  if ( *a21 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = &word_1C03142AC;
    v30 = 2;
  }
  v66 = a20;
  v64 = a19;
  v62 = a18;
  v60 = a17;
  v68 = v28;
  v69 = v30;
  v70 = 0;
  v31 = *a16;
  v67 = 4LL;
  v65 = 4LL;
  v63 = 4LL;
  v61 = 4LL;
  if ( v31 )
  {
    do
      ++v24;
    while ( v31[v24] );
    v32 = 2 * v24 + 2;
  }
  else
  {
    v31 = &word_1C03142AC;
    v32 = 2;
  }
  v58 = v32;
  v55 = a15;
  v53 = a14;
  v51 = a13;
  v49 = a12;
  v47 = a11;
  v45 = a10;
  v43 = a9;
  v41 = a8;
  v39 = a7;
  v37 = a6;
  v35 = a5;
  v57 = v31;
  v59 = 0;
  v56 = 8LL;
  v54 = 4LL;
  v52 = 4LL;
  v50 = 8LL;
  v48 = 4LL;
  v46 = 8LL;
  v44 = 8LL;
  v42 = 8LL;
  v40 = 4LL;
  v38 = 4LL;
  v36 = 2LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x14u, &v34);
}
