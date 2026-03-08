/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0160B94
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0033C70 (EtwTraceInputProcessDelay.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const WCHAR **a8,
        const WCHAR **a9,
        const WCHAR **a10,
        const WCHAR **a11,
        const WCHAR **a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  __int64 v17; // rcx
  int v18; // r8d
  const WCHAR *v19; // rdx
  __int64 v20; // rax
  int v21; // r9d
  const WCHAR *v22; // rdx
  __int64 v23; // rax
  int v24; // r9d
  const WCHAR *v25; // rdx
  __int64 v26; // rax
  int v27; // r9d
  const WCHAR *v28; // rdx
  __int64 v29; // rax
  int v30; // r9d
  const WCHAR *v31; // rdx
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  const WCHAR *v40; // [rsp+80h] [rbp-80h]
  int v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+8Ch] [rbp-74h]
  const WCHAR *v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+98h] [rbp-68h]
  int v45; // [rsp+9Ch] [rbp-64h]
  const WCHAR *v46; // [rsp+A0h] [rbp-60h]
  int v47; // [rsp+A8h] [rbp-58h]
  int v48; // [rsp+ACh] [rbp-54h]
  const WCHAR *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+BCh] [rbp-44h]
  const WCHAR *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  __int64 v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  __int64 v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  __int64 v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  __int64 v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]

  v61 = a16;
  v59 = a15;
  v17 = -1LL;
  v57 = a14;
  v18 = 2;
  v55 = a13;
  v62 = 4LL;
  v60 = 4LL;
  v58 = 8LL;
  v19 = *a12;
  v56 = 4LL;
  if ( v19 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v19 = &word_1C02856D8;
    v21 = 2;
  }
  v52 = v19;
  v53 = v21;
  v54 = 0;
  v22 = *a11;
  if ( *a11 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v22 = &word_1C02856D8;
    v24 = 2;
  }
  v49 = v22;
  v50 = v24;
  v51 = 0;
  v25 = *a10;
  if ( *a10 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v25 = &word_1C02856D8;
    v27 = 2;
  }
  v46 = v25;
  v47 = v27;
  v48 = 0;
  v28 = *a9;
  if ( *a9 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = &word_1C02856D8;
    v30 = 2;
  }
  v43 = v28;
  v44 = v30;
  v45 = 0;
  v31 = *a8;
  if ( *a8 )
  {
    do
      ++v17;
    while ( v31[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v31 = &word_1C02856D8;
  }
  v38 = a7;
  v36 = a6;
  v34 = a5;
  v40 = v31;
  v41 = v18;
  v42 = 0;
  v39 = 4LL;
  v37 = 4LL;
  v35 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C93D8, a2, 0LL, 0LL, 0xEu, &v33);
}
