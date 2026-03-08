/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U2@U2@U2@U2@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@544445555@Z @ 0x180211618
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x180212430 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        __int64 a15,
        __int64 a16)
{
  __int64 v17; // rcx
  int v18; // r8d
  wchar_t *v19; // rdx
  __int64 v20; // rax
  int v21; // r9d
  wchar_t *v22; // rdx
  __int64 v23; // rax
  int v24; // r9d
  wchar_t *v25; // rdx
  __int64 v26; // rax
  int v27; // r9d
  wchar_t *v28; // rdx
  __int64 v29; // rax
  int v30; // r9d
  wchar_t *v31; // rdx
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  wchar_t *v36; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+68h] [rbp-98h]
  int v38; // [rsp+6Ch] [rbp-94h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  wchar_t *v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+98h] [rbp-68h]
  int v45; // [rsp+9Ch] [rbp-64h]
  wchar_t *v46; // [rsp+A0h] [rbp-60h]
  int v47; // [rsp+A8h] [rbp-58h]
  int v48; // [rsp+ACh] [rbp-54h]
  wchar_t *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+BCh] [rbp-44h]
  wchar_t *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  __int64 v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  __int64 v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  __int64 v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  __int64 v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]

  v61 = a16;
  v59 = a15;
  v17 = -1LL;
  v57 = a14;
  v18 = 2;
  v55 = a13;
  v62 = 4LL;
  v60 = 4LL;
  v58 = 4LL;
  v19 = *a12;
  v56 = 4LL;
  if ( v19 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v19 = word_1803392B0;
    v21 = 2;
  }
  v52 = v19;
  v53 = v21;
  v54 = 0;
  v22 = *a11;
  if ( *a11 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v22 = word_1803392B0;
    v24 = 2;
  }
  v49 = v22;
  v50 = v24;
  v51 = 0;
  v25 = *a10;
  if ( *a10 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v25 = word_1803392B0;
    v27 = 2;
  }
  v46 = v25;
  v47 = v27;
  v48 = 0;
  v28 = *a9;
  if ( *a9 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = word_1803392B0;
    v30 = 2;
  }
  v41 = a8;
  v39 = a7;
  v43 = v28;
  v44 = v30;
  v45 = 0;
  v31 = *a6;
  v42 = 4LL;
  v40 = 4LL;
  if ( v31 )
  {
    do
      ++v17;
    while ( v31[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v31 = word_1803392B0;
  }
  v34 = a5;
  v36 = v31;
  v37 = v18;
  v38 = 0;
  v35 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 0xEu, &v33);
}
