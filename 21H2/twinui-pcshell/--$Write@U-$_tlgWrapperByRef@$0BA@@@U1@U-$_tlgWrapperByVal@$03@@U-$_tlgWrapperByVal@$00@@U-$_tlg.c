/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1802D5C88
 * Callers:
 *     ?InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTabGroup@5678@@Z @ 0x1802E11E0 (-InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasu.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        const WCHAR **a9)
{
  const WCHAR *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-51h] BYREF
  __int64 v16; // [rsp+50h] [rbp-31h]
  __int64 v17; // [rsp+58h] [rbp-29h]
  __int64 v18; // [rsp+60h] [rbp-21h]
  __int64 v19; // [rsp+68h] [rbp-19h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  __int64 v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  __int64 v23; // [rsp+88h] [rbp+7h]
  const WCHAR *v24; // [rsp+90h] [rbp+Fh]
  int v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+9Ch] [rbp+1Bh]

  v11 = *a9;
  if ( *a9 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &szAgent;
    v13 = 2;
  }
  v22 = a8;
  v20 = a7;
  v24 = v11;
  v25 = v13;
  v26 = 0;
  v18 = *a6;
  v23 = 1LL;
  v21 = 4LL;
  v16 = *a5;
  v19 = 16LL;
  v17 = 16LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 7u, &v15);
}
