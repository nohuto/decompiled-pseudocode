/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3434AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01B4C94
 * Callers:
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C00723D0 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
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
        const unsigned __int16 **a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        const unsigned __int16 **a17,
        void **a18)
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
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v45; // [rsp+C0h] [rbp-40h]
  int v46; // [rsp+C8h] [rbp-38h]
  int v47; // [rsp+CCh] [rbp-34h]
  __int64 v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  __int64 v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  __int64 v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  __int64 v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v56; // [rsp+110h] [rbp+10h]
  int v57; // [rsp+118h] [rbp+18h]
  int v58; // [rsp+11Ch] [rbp+1Ch]
  _BYTE *v59; // [rsp+120h] [rbp+20h]
  int v60; // [rsp+128h] [rbp+28h]
  int v61; // [rsp+12Ch] [rbp+2Ch]

  v20 = -1LL;
  v21 = *a18;
  if ( *a18 )
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
  v60 = v23;
  v24 = 2;
  v59 = v21;
  v61 = 0;
  v25 = *a17;
  if ( *a17 )
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
  v54 = a16;
  v52 = a15;
  v50 = a14;
  v48 = a13;
  v56 = v25;
  v57 = v27;
  v58 = 0;
  v28 = *a12;
  v55 = 4LL;
  v53 = 4LL;
  v51 = 4LL;
  v49 = 4LL;
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
  v43 = a11;
  v41 = a10;
  v39 = a9;
  v37 = a8;
  v35 = a7;
  v33 = a6;
  v31 = a5;
  v45 = v28;
  v46 = v24;
  v47 = 0;
  v44 = 8LL;
  v42 = 4LL;
  v40 = 8LL;
  v38 = 4LL;
  v36 = 8LL;
  v34 = 4LL;
  v32 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x10u, &v30);
}
