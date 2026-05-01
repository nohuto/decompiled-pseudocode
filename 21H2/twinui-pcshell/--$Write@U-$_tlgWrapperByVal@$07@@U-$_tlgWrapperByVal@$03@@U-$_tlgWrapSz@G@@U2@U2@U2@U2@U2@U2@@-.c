/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@444444@Z @ 0x180462C98
 * Callers:
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x18046C148 (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  const WCHAR *v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-B9h] BYREF
  __int64 v20; // [rsp+50h] [rbp-99h]
  __int64 v21; // [rsp+58h] [rbp-91h]
  __int64 v22; // [rsp+60h] [rbp-89h]
  __int64 v23; // [rsp+68h] [rbp-81h]
  const WCHAR *v24; // [rsp+70h] [rbp-79h]
  int v25; // [rsp+78h] [rbp-71h]
  int v26; // [rsp+7Ch] [rbp-6Dh]
  __int64 v27; // [rsp+80h] [rbp-69h]
  __int64 v28; // [rsp+88h] [rbp-61h]
  __int64 v29; // [rsp+90h] [rbp-59h]
  __int64 v30; // [rsp+98h] [rbp-51h]
  __int64 v31; // [rsp+A0h] [rbp-49h]
  __int64 v32; // [rsp+A8h] [rbp-41h]
  __int64 v33; // [rsp+B0h] [rbp-39h]
  __int64 v34; // [rsp+B8h] [rbp-31h]
  __int64 v35; // [rsp+C0h] [rbp-29h]
  __int64 v36; // [rsp+C8h] [rbp-21h]
  __int64 v37; // [rsp+D0h] [rbp-19h]
  __int64 v38; // [rsp+D8h] [rbp-11h]

  v37 = a13;
  v35 = a12;
  v33 = a11;
  v31 = a10;
  v29 = a9;
  v27 = a8;
  v38 = 4LL;
  v36 = 4LL;
  v34 = 4LL;
  v15 = *a7;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 4LL;
  if ( v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &szAgent;
    v17 = 2;
  }
  v22 = a6;
  v20 = a5;
  v24 = v15;
  v25 = v17;
  v26 = 0;
  v23 = 4LL;
  v21 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 0xBu, &v19);
}
