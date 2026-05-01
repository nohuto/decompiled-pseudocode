/*
 * XREFs of ??$Cortana_DeveloperOverride@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x180269D0C
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x180269F48 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18001DF50 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

char __fastcall CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::Cortana_DeveloperOverride<unsigned char &>(
        __int64 a1,
        _BYTE *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char result; // al
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10[5]; // [rsp+30h] [rbp-28h] BYREF
  bool v11; // [rsp+60h] [rbp+8h] BYREF
  WINBOOL fPending; // [rsp+70h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+20h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1806506B8;
    qword_1806506B8[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806506D0 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806506B8, qword_1806506D0, v4);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1806506B8);
  }
  result = (char)Context;
  v6 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v6 > 5u )
  {
    result = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( result )
    {
      v9 = *(_QWORD *)(a1 + 48);
      v11 = *a2 != 0;
      v10[0] = 0x1000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
               v7,
               byte_18057ED18,
               (const GUID *)(v9 + 8),
               v8,
               (__int64)&v11,
               (__int64)v10);
    }
  }
  return result;
}
