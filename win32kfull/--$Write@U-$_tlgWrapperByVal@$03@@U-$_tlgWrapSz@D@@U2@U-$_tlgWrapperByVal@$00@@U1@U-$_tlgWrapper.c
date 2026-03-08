/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0244820
 * Callers:
 *     ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z @ 0x1C00DBE60 (-EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z.c)
 *     ?EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z @ 0x1C0244F50 (-EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UEAAXI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  _BYTE *v15; // rdx
  int v16; // ecx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-69h] BYREF
  __int64 v19; // [rsp+50h] [rbp-49h]
  __int64 v20; // [rsp+58h] [rbp-41h]
  _BYTE *v21; // [rsp+60h] [rbp-39h]
  int v22; // [rsp+68h] [rbp-31h]
  int v23; // [rsp+6Ch] [rbp-2Dh]
  _BYTE *v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+78h] [rbp-21h]
  int v26; // [rsp+7Ch] [rbp-1Dh]
  __int64 v27; // [rsp+80h] [rbp-19h]
  __int64 v28; // [rsp+88h] [rbp-11h]
  __int64 v29; // [rsp+90h] [rbp-9h]
  __int64 v30; // [rsp+98h] [rbp-1h]
  __int64 v31; // [rsp+A0h] [rbp+7h]
  __int64 v32; // [rsp+A8h] [rbp+Fh]

  v31 = a10;
  v29 = a9;
  v11 = -1LL;
  v27 = a8;
  v32 = 8LL;
  v30 = 4LL;
  v28 = 1LL;
  v12 = *a7;
  if ( *a7 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &unk_1C03206E9;
    v14 = 1;
  }
  v25 = v14;
  v24 = v12;
  v26 = 0;
  v15 = *a6;
  if ( *a6 )
  {
    do
      ++v11;
    while ( v15[v11] );
    v16 = v11 + 1;
  }
  else
  {
    v15 = &unk_1C03206E9;
    v16 = 1;
  }
  v19 = a5;
  v21 = v15;
  v22 = v16;
  v23 = 0;
  v20 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, a2, 0LL, 0LL, 8u, &v18);
}
