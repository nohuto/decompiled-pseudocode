/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3443AEBU?$_tlgWrapSz@G@@44445AEBU?$_tlgWrapSz@D@@44@Z @ 0x1C01E764C
 * Callers:
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C0201988 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtag.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        const WCHAR **a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        const WCHAR **a16,
        void **a17,
        __int64 a18,
        __int64 a19)
{
  __int64 v21; // rcx
  _BYTE *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  int v25; // r8d
  const WCHAR *v26; // rdx
  __int64 v27; // rax
  int v28; // r9d
  const WCHAR *v29; // rdx
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  const WCHAR *v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+BCh] [rbp-44h]
  __int64 v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  __int64 v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  __int64 v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  const WCHAR *v55; // [rsp+100h] [rbp+0h]
  int v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+10Ch] [rbp+Ch]
  _BYTE *v58; // [rsp+110h] [rbp+10h]
  int v59; // [rsp+118h] [rbp+18h]
  int v60; // [rsp+11Ch] [rbp+1Ch]
  __int64 v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]

  v63 = a19;
  v61 = a18;
  v21 = -1LL;
  v64 = 4LL;
  v62 = 4LL;
  v22 = *a17;
  if ( *a17 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v22 = &unk_1C02A2108;
    v24 = 1;
  }
  v59 = v24;
  v25 = 2;
  v58 = v22;
  v60 = 0;
  v26 = *a16;
  if ( *a16 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v26[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v26 = &word_1C02856D8;
    v28 = 2;
  }
  v53 = a15;
  v51 = a14;
  v49 = a13;
  v47 = a12;
  v55 = v26;
  v56 = v28;
  v57 = 0;
  v29 = *a11;
  v54 = 4LL;
  v52 = 4LL;
  v50 = 4LL;
  v48 = 4LL;
  if ( v29 )
  {
    do
      ++v21;
    while ( v29[v21] );
    v25 = 2 * v21 + 2;
  }
  else
  {
    v29 = &word_1C02856D8;
  }
  v42 = a10;
  v40 = a9;
  v38 = a8;
  v36 = a7;
  v34 = a6;
  v32 = a5;
  v44 = v29;
  v45 = v25;
  v46 = 0;
  v43 = 8LL;
  v41 = 4LL;
  v39 = 4LL;
  v37 = 8LL;
  v35 = 4LL;
  v33 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x11u, &v31);
}
