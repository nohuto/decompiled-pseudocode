/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@55@Z @ 0x180211DA8
 * Callers:
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1802120BC (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        wchar_t **a8,
        wchar_t **a9,
        wchar_t **a10)
{
  __int64 v11; // rcx
  int v12; // r8d
  wchar_t *v13; // rdx
  __int64 v14; // rax
  int v15; // r9d
  wchar_t *v16; // rdx
  __int64 v17; // rax
  int v18; // r9d
  wchar_t *v19; // rdx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+50h] [rbp-49h]
  __int64 v23; // [rsp+58h] [rbp-41h]
  __int64 v24; // [rsp+60h] [rbp-39h]
  __int64 v25; // [rsp+68h] [rbp-31h]
  __int64 v26; // [rsp+70h] [rbp-29h]
  __int64 v27; // [rsp+78h] [rbp-21h]
  wchar_t *v28; // [rsp+80h] [rbp-19h]
  int v29; // [rsp+88h] [rbp-11h]
  int v30; // [rsp+8Ch] [rbp-Dh]
  wchar_t *v31; // [rsp+90h] [rbp-9h]
  int v32; // [rsp+98h] [rbp-1h]
  int v33; // [rsp+9Ch] [rbp+3h]
  wchar_t *v34; // [rsp+A0h] [rbp+7h]
  int v35; // [rsp+A8h] [rbp+Fh]
  int v36; // [rsp+ACh] [rbp+13h]

  v11 = -1LL;
  v12 = 2;
  v13 = *a10;
  if ( *a10 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = word_1803392B0;
    v15 = 2;
  }
  v34 = v13;
  v35 = v15;
  v36 = 0;
  v16 = *a9;
  if ( *a9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = word_1803392B0;
    v18 = 2;
  }
  v31 = v16;
  v32 = v18;
  v33 = 0;
  v19 = *a8;
  if ( *a8 )
  {
    do
      ++v11;
    while ( v19[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v19 = word_1803392B0;
  }
  v26 = a7;
  v24 = a6;
  v22 = a5;
  v28 = v19;
  v29 = v12;
  v23 = 8LL;
  v30 = 0;
  v27 = 4LL;
  v25 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 8u, &v21);
}
