/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01D1854
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        const WCHAR **a6,
        const WCHAR **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rcx
  int v12; // r9d
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  int v15; // r8d
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  _BYTE *v18; // rdx
  int v19; // ecx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-69h] BYREF
  _BYTE *v22; // [rsp+50h] [rbp-49h]
  int v23; // [rsp+58h] [rbp-41h]
  int v24; // [rsp+5Ch] [rbp-3Dh]
  const WCHAR *v25; // [rsp+60h] [rbp-39h]
  int v26; // [rsp+68h] [rbp-31h]
  int v27; // [rsp+6Ch] [rbp-2Dh]
  const WCHAR *v28; // [rsp+70h] [rbp-29h]
  int v29; // [rsp+78h] [rbp-21h]
  int v30; // [rsp+7Ch] [rbp-1Dh]
  __int64 v31; // [rsp+80h] [rbp-19h]
  __int64 v32; // [rsp+88h] [rbp-11h]
  __int64 v33; // [rsp+90h] [rbp-9h]
  __int64 v34; // [rsp+98h] [rbp-1h]
  __int64 v35; // [rsp+A0h] [rbp+7h]
  __int64 v36; // [rsp+A8h] [rbp+Fh]

  v35 = a10;
  v11 = -1LL;
  v33 = a9;
  v12 = 2;
  v31 = a8;
  v36 = 4LL;
  v34 = 8LL;
  v32 = 8LL;
  v13 = *a7;
  if ( *a7 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &word_1C02856D8;
    v15 = 2;
  }
  v28 = v13;
  v29 = v15;
  v30 = 0;
  v16 = *a6;
  if ( *a6 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v12 = 2 * v17 + 2;
  }
  else
  {
    v16 = &word_1C02856D8;
  }
  v25 = v16;
  v26 = v12;
  v27 = 0;
  v18 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v18[v11] );
    v19 = v11 + 1;
  }
  else
  {
    v18 = &unk_1C02A2108;
    v19 = 1;
  }
  v22 = v18;
  v23 = v19;
  v24 = 0;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C92F8, a2, 0LL, 0LL, 8u, &v21);
}
