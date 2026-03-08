/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4443AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0229BA8
 * Callers:
 *     ?SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z @ 0x1C0231258 (-SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        const WCHAR **a10,
        void **a11)
{
  __int64 v13; // rcx
  _BYTE *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  int v17; // r8d
  const WCHAR *v18; // rdx
  __int64 v19; // rax
  int v20; // r9d
  const WCHAR *v21; // rdx
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-81h] BYREF
  const WCHAR *v24; // [rsp+50h] [rbp-61h]
  int v25; // [rsp+58h] [rbp-59h]
  int v26; // [rsp+5Ch] [rbp-55h]
  __int64 v27; // [rsp+60h] [rbp-51h]
  __int64 v28; // [rsp+68h] [rbp-49h]
  __int64 v29; // [rsp+70h] [rbp-41h]
  __int64 v30; // [rsp+78h] [rbp-39h]
  __int64 v31; // [rsp+80h] [rbp-31h]
  __int64 v32; // [rsp+88h] [rbp-29h]
  __int64 v33; // [rsp+90h] [rbp-21h]
  __int64 v34; // [rsp+98h] [rbp-19h]
  const WCHAR *v35; // [rsp+A0h] [rbp-11h]
  int v36; // [rsp+A8h] [rbp-9h]
  int v37; // [rsp+ACh] [rbp-5h]
  _BYTE *v38; // [rsp+B0h] [rbp-1h]
  int v39; // [rsp+B8h] [rbp+7h]
  int v40; // [rsp+BCh] [rbp+Bh]

  v13 = -1LL;
  v14 = *a11;
  if ( *a11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &unk_1C02A2108;
    v16 = 1;
  }
  v39 = v16;
  v17 = 2;
  v38 = v14;
  v40 = 0;
  v18 = *a10;
  if ( *a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &word_1C02856D8;
    v20 = 2;
  }
  v33 = a9;
  v31 = a8;
  v29 = a7;
  v27 = a6;
  v35 = v18;
  v36 = v20;
  v37 = 0;
  v21 = *a5;
  v34 = 4LL;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 4LL;
  if ( v21 )
  {
    do
      ++v13;
    while ( v21[v13] );
    v17 = 2 * v13 + 2;
  }
  else
  {
    v21 = &word_1C02856D8;
  }
  v24 = v21;
  v25 = v17;
  v26 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v23);
}
