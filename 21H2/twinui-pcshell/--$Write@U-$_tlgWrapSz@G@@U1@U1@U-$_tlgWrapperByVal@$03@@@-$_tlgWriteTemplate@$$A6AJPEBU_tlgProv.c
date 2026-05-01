/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800033D8
 * Callers:
 *     ?PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015AD90 (-PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000W4PINNEDLISTMODIFYCALLER.c)
 *     ?TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015CF70 (-TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const WCHAR **a7,
        __int64 a8)
{
  __int64 v10; // rcx
  int v12; // r9d
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  int v15; // r8d
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  const WCHAR *v19; // rdx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-49h] BYREF
  const WCHAR *v22; // [rsp+50h] [rbp-29h]
  int v23; // [rsp+58h] [rbp-21h]
  int v24; // [rsp+5Ch] [rbp-1Dh]
  const WCHAR *v25; // [rsp+60h] [rbp-19h]
  int v26; // [rsp+68h] [rbp-11h]
  int v27; // [rsp+6Ch] [rbp-Dh]
  const WCHAR *v28; // [rsp+70h] [rbp-9h]
  int v29; // [rsp+78h] [rbp-1h]
  int v30; // [rsp+7Ch] [rbp+3h]
  __int64 v31; // [rsp+80h] [rbp+7h]
  __int64 v32; // [rsp+88h] [rbp+Fh]

  v31 = a8;
  v10 = -1LL;
  v32 = 4LL;
  v12 = 2;
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
    v13 = &szAgent;
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
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = &szAgent;
    v18 = 2;
  }
  v25 = v16;
  v26 = v18;
  v27 = 0;
  v19 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( v19[v10] );
    v12 = 2 * v10 + 2;
  }
  else
  {
    v19 = &szAgent;
  }
  v22 = v19;
  v23 = v12;
  v24 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0, 6u, &v21);
}
