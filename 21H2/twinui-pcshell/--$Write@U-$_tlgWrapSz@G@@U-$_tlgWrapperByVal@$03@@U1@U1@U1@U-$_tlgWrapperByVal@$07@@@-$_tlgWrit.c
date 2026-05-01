/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180002068
 * Callers:
 *     ??$AppBackup_Error@AEAY0CL@$$CBGHPEBGPEBGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEAH$$QEAPEBG22@Z @ 0x18011743C (--$AppBackup_Error@AEAY0CL@$$CBGHPEBGPEBGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEA.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        const WCHAR **a9,
        __int64 a10)
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
  const WCHAR *v26; // [rsp+50h] [rbp-49h]
  int v27; // [rsp+58h] [rbp-41h]
  int v28; // [rsp+5Ch] [rbp-3Dh]
  __int64 v29; // [rsp+60h] [rbp-39h]
  __int64 v30; // [rsp+68h] [rbp-31h]
  const WCHAR *v31; // [rsp+70h] [rbp-29h]
  int v32; // [rsp+78h] [rbp-21h]
  int v33; // [rsp+7Ch] [rbp-1Dh]
  const WCHAR *v34; // [rsp+80h] [rbp-19h]
  int v35; // [rsp+88h] [rbp-11h]
  int v36; // [rsp+8Ch] [rbp-Dh]
  const WCHAR *v37; // [rsp+90h] [rbp-9h]
  int v38; // [rsp+98h] [rbp-1h]
  int v39; // [rsp+9Ch] [rbp+3h]
  __int64 v40; // [rsp+A0h] [rbp+7h]
  __int64 v41; // [rsp+A8h] [rbp+Fh]

  v40 = a10;
  v12 = -1LL;
  v41 = 8LL;
  v13 = 2;
  v14 = *a9;
  if ( *a9 )
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
  v37 = v14;
  v38 = v16;
  v39 = 0;
  v17 = *a8;
  if ( *a8 )
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
  v34 = v17;
  v35 = v19;
  v36 = 0;
  v20 = *a7;
  if ( *a7 )
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
  v29 = a6;
  v31 = v20;
  v32 = v22;
  v33 = 0;
  v23 = *a5;
  v30 = 4LL;
  if ( v23 )
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
  v26 = v23;
  v27 = v13;
  v28 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0, 0, 8u, &v25);
}
