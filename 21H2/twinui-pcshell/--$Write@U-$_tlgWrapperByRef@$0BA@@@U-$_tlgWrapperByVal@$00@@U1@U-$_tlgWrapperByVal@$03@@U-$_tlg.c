/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5@Z @ 0x1802D5E48
 * Callers:
 *     ?TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@I@Z @ 0x1802EC704 (-TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationVi.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        const WCHAR **a9,
        __int64 a10)
{
  const WCHAR *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-69h] BYREF
  __int64 v18; // [rsp+50h] [rbp-49h]
  __int64 v19; // [rsp+58h] [rbp-41h]
  __int64 v20; // [rsp+60h] [rbp-39h]
  __int64 v21; // [rsp+68h] [rbp-31h]
  __int64 v22; // [rsp+70h] [rbp-29h]
  __int64 v23; // [rsp+78h] [rbp-21h]
  __int64 v24; // [rsp+80h] [rbp-19h]
  __int64 v25; // [rsp+88h] [rbp-11h]
  const WCHAR *v26; // [rsp+90h] [rbp-9h]
  int v27; // [rsp+98h] [rbp-1h]
  int v28; // [rsp+9Ch] [rbp+3h]
  __int64 v29; // [rsp+A0h] [rbp+7h]
  __int64 v30; // [rsp+A8h] [rbp+Fh]

  v29 = a10;
  v30 = 4LL;
  v12 = *a9;
  if ( *a9 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &szAgent;
    v14 = 2;
  }
  v24 = a8;
  v26 = v12;
  v27 = v14;
  v28 = 0;
  v15 = *a7;
  v20 = a6;
  v22 = v15;
  v25 = 4LL;
  v23 = 16LL;
  v18 = *a5;
  v21 = 1LL;
  v19 = 16LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 8u, &v17);
}
