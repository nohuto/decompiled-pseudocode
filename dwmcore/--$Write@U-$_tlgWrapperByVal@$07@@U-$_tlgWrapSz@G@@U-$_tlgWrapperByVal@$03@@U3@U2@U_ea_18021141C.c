/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U2@U2@U2@U2@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@54444555@Z @ 0x18021141C
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x180212430 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        __int64 a14,
        __int64 a15)
{
  __int64 v16; // rcx
  int v17; // r8d
  wchar_t *v18; // rdx
  __int64 v19; // rax
  int v20; // r9d
  wchar_t *v21; // rdx
  __int64 v22; // rax
  int v23; // r9d
  wchar_t *v24; // rdx
  __int64 v25; // rax
  int v26; // r9d
  wchar_t *v27; // rdx
  __int64 v28; // rax
  int v29; // r9d
  wchar_t *v30; // rdx
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  wchar_t *v35; // [rsp+60h] [rbp-A0h]
  int v36; // [rsp+68h] [rbp-98h]
  int v37; // [rsp+6Ch] [rbp-94h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  wchar_t *v42; // [rsp+90h] [rbp-70h]
  int v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+9Ch] [rbp-64h]
  wchar_t *v45; // [rsp+A0h] [rbp-60h]
  int v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+ACh] [rbp-54h]
  wchar_t *v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+BCh] [rbp-44h]
  wchar_t *v51; // [rsp+C0h] [rbp-40h]
  int v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+CCh] [rbp-34h]
  __int64 v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  __int64 v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  __int64 v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]

  v58 = a15;
  v56 = a14;
  v16 = -1LL;
  v54 = a13;
  v17 = 2;
  v59 = 4LL;
  v57 = 4LL;
  v55 = 4LL;
  v18 = *a12;
  if ( *a12 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = word_1803392B0;
    v20 = 2;
  }
  v51 = v18;
  v52 = v20;
  v53 = 0;
  v21 = *a11;
  if ( *a11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v21 = word_1803392B0;
    v23 = 2;
  }
  v48 = v21;
  v49 = v23;
  v50 = 0;
  v24 = *a10;
  if ( *a10 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v24 = word_1803392B0;
    v26 = 2;
  }
  v45 = v24;
  v46 = v26;
  v47 = 0;
  v27 = *a9;
  if ( *a9 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v27 = word_1803392B0;
    v29 = 2;
  }
  v40 = a8;
  v38 = a7;
  v42 = v27;
  v43 = v29;
  v44 = 0;
  v30 = *a6;
  v41 = 4LL;
  v39 = 4LL;
  if ( v30 )
  {
    do
      ++v16;
    while ( v30[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v30 = word_1803392B0;
  }
  v33 = a5;
  v35 = v30;
  v36 = v17;
  v37 = 0;
  v34 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 0xDu, &v32);
}
