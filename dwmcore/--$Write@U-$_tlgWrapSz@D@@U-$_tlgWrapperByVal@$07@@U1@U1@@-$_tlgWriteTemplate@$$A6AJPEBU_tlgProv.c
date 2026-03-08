/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18026E9A4
 * Callers:
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18026ED14 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const char **a5,
        __int64 a6,
        const char **a7,
        const char **a8)
{
  __int64 v8; // rcx
  const char *v9; // r8
  __int64 v10; // rax
  int v11; // eax
  const char *v12; // r8
  __int64 v13; // rax
  int v14; // eax
  const char *v15; // r8
  int v16; // ecx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-39h] BYREF
  const char *v19; // [rsp+50h] [rbp-19h]
  int v20; // [rsp+58h] [rbp-11h]
  int v21; // [rsp+5Ch] [rbp-Dh]
  __int64 v22; // [rsp+60h] [rbp-9h]
  __int64 v23; // [rsp+68h] [rbp-1h]
  const char *v24; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]
  const char *v27; // [rsp+80h] [rbp+17h]
  int v28; // [rsp+88h] [rbp+1Fh]
  int v29; // [rsp+8Ch] [rbp+23h]

  v8 = -1LL;
  v9 = *a8;
  if ( *a8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v9 = word_180338FC0;
    v11 = 1;
  }
  v28 = v11;
  v27 = v9;
  v29 = 0;
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
    v12 = word_180338FC0;
    v14 = 1;
  }
  v25 = v14;
  v22 = a6;
  v24 = v12;
  v26 = 0;
  v23 = 8LL;
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
    v15 = word_180338FC0;
    v16 = 1;
  }
  v19 = v15;
  v20 = v16;
  v21 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E0760, a2, 0LL, 0LL, 6u, &v18);
}
