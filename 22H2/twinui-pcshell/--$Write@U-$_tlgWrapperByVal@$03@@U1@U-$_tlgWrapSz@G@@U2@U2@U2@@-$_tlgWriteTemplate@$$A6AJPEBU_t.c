/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@444@Z @ 0x1800024DC
 * Callers:
 *     ??$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAEAK$$QEAPEBG222@Z @ 0x180132418 (--$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        const WCHAR **a9,
        const WCHAR **a10)
{
  __int64 v12; // rcx
  int v13; // r8d
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  int v16; // r9d
  const WCHAR *v17; // rdx
  __int64 v18; // rax
  int v19; // r9d
  const WCHAR *v20; // rdx
  __int64 v21; // rax
  int v22; // r9d
  const WCHAR *v23; // rdx
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-69h] BYREF
  __int64 v26; // [rsp+50h] [rbp-49h]
  __int64 v27; // [rsp+58h] [rbp-41h]
  __int64 v28; // [rsp+60h] [rbp-39h]
  __int64 v29; // [rsp+68h] [rbp-31h]
  const WCHAR *v30; // [rsp+70h] [rbp-29h]
  int v31; // [rsp+78h] [rbp-21h]
  int v32; // [rsp+7Ch] [rbp-1Dh]
  const WCHAR *v33; // [rsp+80h] [rbp-19h]
  int v34; // [rsp+88h] [rbp-11h]
  int v35; // [rsp+8Ch] [rbp-Dh]
  const WCHAR *v36; // [rsp+90h] [rbp-9h]
  int v37; // [rsp+98h] [rbp-1h]
  int v38; // [rsp+9Ch] [rbp+3h]
  const WCHAR *v39; // [rsp+A0h] [rbp+7h]
  int v40; // [rsp+A8h] [rbp+Fh]
  int v41; // [rsp+ACh] [rbp+13h]

  v12 = -1LL;
  v13 = 2;
  v14 = *a10;
  if ( *a10 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &szAgent;
    v16 = 2;
  }
  v39 = v14;
  v40 = v16;
  v41 = 0;
  v17 = *a9;
  if ( *a9 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &szAgent;
    v19 = 2;
  }
  v36 = v17;
  v37 = v19;
  v38 = 0;
  v20 = *a8;
  if ( *a8 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v20 = &szAgent;
    v22 = 2;
  }
  v33 = v20;
  v34 = v22;
  v35 = 0;
  v23 = *a7;
  if ( *a7 )
  {
    do
      ++v12;
    while ( v23[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v23 = &szAgent;
  }
  v28 = a6;
  v26 = a5;
  v30 = v23;
  v31 = v13;
  v32 = 0;
  v29 = 4LL;
  v27 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0, 0, 8u, &v25);
}
