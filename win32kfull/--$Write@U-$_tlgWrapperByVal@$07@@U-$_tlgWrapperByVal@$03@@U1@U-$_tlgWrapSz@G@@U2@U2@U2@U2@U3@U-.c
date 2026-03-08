/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@4444@Z @ 0x1C01B5E18
 * Callers:
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00D6C70 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const unsigned __int16 **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        const unsigned __int16 **a13,
        void **a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18)
{
  __int64 v20; // rcx
  _BYTE *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // r8d
  const unsigned __int16 *v25; // rdx
  __int64 v26; // rax
  int v27; // r9d
  const unsigned __int16 *v28; // rdx
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]
  __int64 v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+8Ch] [rbp-74h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  const unsigned __int16 *v48; // [rsp+D0h] [rbp-30h]
  int v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+DCh] [rbp-24h]
  _BYTE *v51; // [rsp+E0h] [rbp-20h]
  int v52; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+ECh] [rbp-14h]
  __int64 v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  __int64 v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]

  v60 = a18;
  v58 = a17;
  v20 = -1LL;
  v56 = a16;
  v54 = a15;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v21 = *a14;
  v55 = 4LL;
  if ( v21 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v21 = &unk_1C03206E9;
    v23 = 1;
  }
  v52 = v23;
  v24 = 2;
  v51 = v21;
  v53 = 0;
  v25 = *a13;
  if ( *a13 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v25 = &word_1C03142AC;
    v27 = 2;
  }
  v46 = a12;
  v44 = a11;
  v42 = a10;
  v40 = a9;
  v48 = v25;
  v49 = v27;
  v50 = 0;
  v28 = *a8;
  v47 = 4LL;
  v45 = 4LL;
  v43 = 4LL;
  v41 = 4LL;
  if ( v28 )
  {
    do
      ++v20;
    while ( v28[v20] );
    v24 = 2 * v20 + 2;
  }
  else
  {
    v28 = &word_1C03142AC;
  }
  v35 = a7;
  v33 = a6;
  v31 = a5;
  v37 = v28;
  v38 = v24;
  v39 = 0;
  v36 = 8LL;
  v34 = 4LL;
  v32 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x10u, &v30);
}
