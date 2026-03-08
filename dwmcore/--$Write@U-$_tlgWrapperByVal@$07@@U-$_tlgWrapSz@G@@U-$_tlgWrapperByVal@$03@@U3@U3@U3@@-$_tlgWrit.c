/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x18026AD74
 * Callers:
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x18026B2A4 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        wchar_t **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  wchar_t *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-69h] BYREF
  __int64 v16; // [rsp+50h] [rbp-49h]
  __int64 v17; // [rsp+58h] [rbp-41h]
  wchar_t *v18; // [rsp+60h] [rbp-39h]
  int v19; // [rsp+68h] [rbp-31h]
  int v20; // [rsp+6Ch] [rbp-2Dh]
  __int64 v21; // [rsp+70h] [rbp-29h]
  __int64 v22; // [rsp+78h] [rbp-21h]
  __int64 v23; // [rsp+80h] [rbp-19h]
  __int64 v24; // [rsp+88h] [rbp-11h]
  __int64 v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h]
  __int64 v27; // [rsp+A0h] [rbp+7h]
  __int64 v28; // [rsp+A8h] [rbp+Fh]

  v27 = a10;
  v25 = a9;
  v23 = a8;
  v21 = a7;
  v28 = 4LL;
  v26 = 4LL;
  v24 = 4LL;
  v11 = *a6;
  v22 = 4LL;
  if ( v11 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = word_1803392B0;
    v13 = 2;
  }
  v18 = v11;
  v16 = a5;
  v19 = v13;
  v17 = 8LL;
  v20 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 8u, &v15);
}
