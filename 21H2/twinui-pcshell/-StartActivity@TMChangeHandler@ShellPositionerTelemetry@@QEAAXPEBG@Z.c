/*
 * XREFs of ?StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z @ 0x180444FC8
 * Callers:
 *     ?TabletModeChanged@ShellPositionerManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180446060 (-TabletModeChanged@ShellPositionerManager@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F6D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180077B3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008EE40 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18021C700 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellPositionerTelemetry::TMChangeHandler::StartActivity(
        ShellPositionerTelemetry::TMChangeHandler *this,
        const unsigned __int16 *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rdi
  const GUID *v6; // rax
  const WCHAR *v7; // [rsp+40h] [rbp-10h] BYREF
  __int64 v8; // [rsp+48h] [rbp-8h] BYREF
  WINBOOL fPending; // [rsp+70h] [rbp+20h] BYREF
  DWORD CurrentThreadId; // [rsp+80h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+88h] [rbp+38h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180650618;
    qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
    qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v4);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
  }
  v5 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v5 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
  {
    v7 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v8 = 0LL;
    v6 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)v5,
      byte_1805974C2,
      (const GUID *)(*((_QWORD *)this + 6) + 8LL),
      v6,
      (__int64)&v8,
      (__int64)&CurrentThreadId,
      &v7);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ShellPositionerTelemetry::TMChangeHandler *)((char *)this + 8));
}
