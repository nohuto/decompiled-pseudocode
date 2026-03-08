/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@43AEBU?$_tlgWrapperByVal@$07@@4444@Z @ 0x1C00018A8
 * Callers:
 *     ?PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z @ 0x1C00E0E58 (-PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v15; // rcx
  _BYTE *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  _BYTE *v19; // rdx
  int v20; // ecx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-B1h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-91h]
  int v24; // [rsp+58h] [rbp-89h]
  int v25; // [rsp+5Ch] [rbp-85h]
  __int64 v26; // [rsp+60h] [rbp-81h]
  __int64 v27; // [rsp+68h] [rbp-79h]
  __int64 v28; // [rsp+70h] [rbp-71h]
  __int64 v29; // [rsp+78h] [rbp-69h]
  _BYTE *v30; // [rsp+80h] [rbp-61h]
  int v31; // [rsp+88h] [rbp-59h]
  int v32; // [rsp+8Ch] [rbp-55h]
  __int64 v33; // [rsp+90h] [rbp-51h]
  __int64 v34; // [rsp+98h] [rbp-49h]
  __int64 v35; // [rsp+A0h] [rbp-41h]
  __int64 v36; // [rsp+A8h] [rbp-39h]
  __int64 v37; // [rsp+B0h] [rbp-31h]
  __int64 v38; // [rsp+B8h] [rbp-29h]
  __int64 v39; // [rsp+C0h] [rbp-21h]
  __int64 v40; // [rsp+C8h] [rbp-19h]
  __int64 v41; // [rsp+D0h] [rbp-11h]
  __int64 v42; // [rsp+D8h] [rbp-9h]

  v41 = a13;
  v39 = a12;
  v15 = -1LL;
  v37 = a11;
  v35 = a10;
  v33 = a9;
  v42 = 4LL;
  v40 = 4LL;
  v38 = 4LL;
  v16 = *a8;
  v36 = 4LL;
  v34 = 8LL;
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v16 = &unk_1C02A2108;
    v18 = 1;
  }
  v31 = v18;
  v28 = a7;
  v26 = a6;
  v30 = v16;
  v32 = 0;
  v29 = 4LL;
  v19 = *a5;
  v27 = 4LL;
  if ( v19 )
  {
    do
      ++v15;
    while ( v19[v15] );
    v20 = v15 + 1;
  }
  else
  {
    v19 = &unk_1C02A2108;
    v20 = 1;
  }
  v23 = v19;
  v24 = v20;
  v25 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0xBu, &v22);
}
