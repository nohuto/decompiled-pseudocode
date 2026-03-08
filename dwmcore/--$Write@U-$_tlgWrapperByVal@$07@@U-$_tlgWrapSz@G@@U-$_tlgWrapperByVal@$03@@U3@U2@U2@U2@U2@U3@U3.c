/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U2@U2@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5444455@Z @ 0x180211240
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x180212430 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        wchar_t **a6,
        __int64 a7,
        __int64 a8,
        wchar_t **a9,
        wchar_t **a10,
        wchar_t **a11,
        wchar_t **a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rcx
  int v16; // r8d
  wchar_t *v17; // rdx
  __int64 v18; // rax
  int v19; // r9d
  wchar_t *v20; // rdx
  __int64 v21; // rax
  int v22; // r9d
  wchar_t *v23; // rdx
  __int64 v24; // rax
  int v25; // r9d
  wchar_t *v26; // rdx
  __int64 v27; // rax
  int v28; // r9d
  wchar_t *v29; // rdx
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v32; // [rsp+50h] [rbp-A9h]
  __int64 v33; // [rsp+58h] [rbp-A1h]
  wchar_t *v34; // [rsp+60h] [rbp-99h]
  int v35; // [rsp+68h] [rbp-91h]
  int v36; // [rsp+6Ch] [rbp-8Dh]
  __int64 v37; // [rsp+70h] [rbp-89h]
  __int64 v38; // [rsp+78h] [rbp-81h]
  __int64 v39; // [rsp+80h] [rbp-79h]
  __int64 v40; // [rsp+88h] [rbp-71h]
  wchar_t *v41; // [rsp+90h] [rbp-69h]
  int v42; // [rsp+98h] [rbp-61h]
  int v43; // [rsp+9Ch] [rbp-5Dh]
  wchar_t *v44; // [rsp+A0h] [rbp-59h]
  int v45; // [rsp+A8h] [rbp-51h]
  int v46; // [rsp+ACh] [rbp-4Dh]
  wchar_t *v47; // [rsp+B0h] [rbp-49h]
  int v48; // [rsp+B8h] [rbp-41h]
  int v49; // [rsp+BCh] [rbp-3Dh]
  wchar_t *v50; // [rsp+C0h] [rbp-39h]
  int v51; // [rsp+C8h] [rbp-31h]
  int v52; // [rsp+CCh] [rbp-2Dh]
  __int64 v53; // [rsp+D0h] [rbp-29h]
  __int64 v54; // [rsp+D8h] [rbp-21h]
  __int64 v55; // [rsp+E0h] [rbp-19h]
  __int64 v56; // [rsp+E8h] [rbp-11h]

  v55 = a14;
  v53 = a13;
  v15 = -1LL;
  v56 = 4LL;
  v16 = 2;
  v54 = 4LL;
  v17 = *a12;
  if ( *a12 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = word_1803392B0;
    v19 = 2;
  }
  v50 = v17;
  v51 = v19;
  v52 = 0;
  v20 = *a11;
  if ( *a11 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v20 = word_1803392B0;
    v22 = 2;
  }
  v47 = v20;
  v48 = v22;
  v49 = 0;
  v23 = *a10;
  if ( *a10 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v23[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v23 = word_1803392B0;
    v25 = 2;
  }
  v44 = v23;
  v45 = v25;
  v46 = 0;
  v26 = *a9;
  if ( *a9 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v26[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v26 = word_1803392B0;
    v28 = 2;
  }
  v39 = a8;
  v37 = a7;
  v41 = v26;
  v42 = v28;
  v43 = 0;
  v29 = *a6;
  v40 = 4LL;
  v38 = 4LL;
  if ( v29 )
  {
    do
      ++v15;
    while ( v29[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v29 = word_1803392B0;
  }
  v32 = a5;
  v34 = v29;
  v35 = v16;
  v36 = 0;
  v33 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 0xCu, &v31);
}
