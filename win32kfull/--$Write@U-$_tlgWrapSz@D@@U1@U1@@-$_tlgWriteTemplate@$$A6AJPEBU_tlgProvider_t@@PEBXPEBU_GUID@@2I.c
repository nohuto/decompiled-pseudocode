/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@33@Z @ 0x1C01ABB40
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C007B640 (TransitionCursorSuppressionState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        void **a7)
{
  __int64 v8; // rcx
  _BYTE *v9; // r8
  __int64 v10; // rax
  int v11; // eax
  _BYTE *v12; // r8
  __int64 v13; // rax
  int v14; // eax
  _BYTE *v15; // r8
  int v16; // ecx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-68h] BYREF
  _BYTE *v19; // [rsp+50h] [rbp-48h]
  int v20; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+5Ch] [rbp-3Ch]
  _BYTE *v22; // [rsp+60h] [rbp-38h]
  int v23; // [rsp+68h] [rbp-30h]
  int v24; // [rsp+6Ch] [rbp-2Ch]
  _BYTE *v25; // [rsp+70h] [rbp-28h]
  int v26; // [rsp+78h] [rbp-20h]
  int v27; // [rsp+7Ch] [rbp-1Ch]

  v8 = -1LL;
  v9 = *a7;
  if ( *a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v9 = &unk_1C03206E9;
    v11 = 1;
  }
  v26 = v11;
  v25 = v9;
  v27 = 0;
  v12 = *a6;
  if ( *a6 )
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
  v23 = v14;
  v22 = v12;
  v24 = 0;
  v15 = *a5;
  if ( *a5 )
  {
    do
      ++v8;
    while ( v15[v8] );
    v16 = v8 + 1;
  }
  else
  {
    v15 = &unk_1C03206E9;
    v16 = 1;
  }
  v19 = v15;
  v20 = v16;
  v21 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 5u, &v18);
}
