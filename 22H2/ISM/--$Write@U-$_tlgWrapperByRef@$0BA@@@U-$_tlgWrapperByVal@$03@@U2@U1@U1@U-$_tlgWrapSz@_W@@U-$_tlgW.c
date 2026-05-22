/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U?$_tlgWrapSz@_W@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@433AEBU?$_tlgWrapSz@_W@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801508AC
 * Callers:
 *     ?IoctlTimeout_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KK0AEBUSPATIAL_NODE_ID@@PEB_W@Z @ 0x180160468 (-IoctlTimeout_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KK0AEBUSPATIAL_NODE_ID@@PEB_W@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 *a9,
        const wchar_t **a10,
        __int64 a11)
{
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rcx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-81h] BYREF
  __int64 v19; // [rsp+50h] [rbp-61h]
  __int64 v20; // [rsp+58h] [rbp-59h]
  __int64 v21; // [rsp+60h] [rbp-51h]
  __int64 v22; // [rsp+68h] [rbp-49h]
  __int64 v23; // [rsp+70h] [rbp-41h]
  __int64 v24; // [rsp+78h] [rbp-39h]
  __int64 v25; // [rsp+80h] [rbp-31h]
  __int64 v26; // [rsp+88h] [rbp-29h]
  __int64 v27; // [rsp+90h] [rbp-21h]
  __int64 v28; // [rsp+98h] [rbp-19h]
  const wchar_t *v29; // [rsp+A0h] [rbp-11h]
  int v30; // [rsp+A8h] [rbp-9h]
  int v31; // [rsp+ACh] [rbp-5h]
  __int64 v32; // [rsp+B0h] [rbp-1h]
  __int64 v33; // [rsp+B8h] [rbp+7h]

  v32 = a11;
  v33 = 8LL;
  v13 = *a10;
  if ( *a10 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &word_1801C2354;
    v15 = 2;
  }
  v29 = v13;
  v30 = v15;
  v31 = 0;
  v27 = *a9;
  v28 = 16LL;
  v26 = 16LL;
  v16 = *a8;
  v23 = a7;
  v21 = a6;
  v25 = v16;
  v24 = 4LL;
  v22 = 4LL;
  v19 = *a5;
  v20 = 16LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v18);
}
