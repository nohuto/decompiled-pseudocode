/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@444444444AEBU?$_tlgWrapperByVal@$07@@555@Z @ 0x1C01A1158
 * Callers:
 *     RIMLogDeviceHealthTelemetry @ 0x1C01A6EE8 (RIMLogDeviceHealthTelemetry.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const WCHAR **a7,
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
        __int64 a21)
{
  __int64 v22; // rcx
  int v23; // r8d
  const WCHAR *v24; // rdx
  __int64 v25; // rax
  int v26; // r9d
  const WCHAR *v27; // rdx
  __int64 v28; // rax
  int v29; // r9d
  const WCHAR *v30; // rdx
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-D0h] BYREF
  const WCHAR *v33; // [rsp+50h] [rbp-B0h]
  int v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+5Ch] [rbp-A4h]
  const WCHAR *v36; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+68h] [rbp-98h]
  int v38; // [rsp+6Ch] [rbp-94h]
  const WCHAR *v39; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+7Ch] [rbp-84h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
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

  v68 = a21;
  v22 = -1LL;
  v66 = a20;
  v23 = 2;
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
  v42 = a8;
  v69 = 8LL;
  v67 = 8LL;
  v65 = 8LL;
  v24 = *a7;
  v63 = 8LL;
  v61 = 4LL;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 4LL;
  v53 = 4LL;
  v51 = 4LL;
  v49 = 4LL;
  v47 = 4LL;
  v45 = 4LL;
  v43 = 4LL;
  if ( v24 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v24 = &word_1C02856D8;
    v26 = 2;
  }
  v39 = v24;
  v40 = v26;
  v41 = 0;
  v27 = *a6;
  if ( *a6 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v27 = &word_1C02856D8;
    v29 = 2;
  }
  v36 = v27;
  v37 = v29;
  v38 = 0;
  v30 = *a5;
  if ( *a5 )
  {
    do
      ++v22;
    while ( v30[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v30 = &word_1C02856D8;
  }
  v33 = v30;
  v34 = v23;
  v35 = 0;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C92F8, a2, 0LL, 0LL, 0x13u, &v32);
}
