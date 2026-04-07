/*
 * XREFs of ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x18002FB98
 * Callers:
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x18002FD1C (-Begin@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x180005598 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U1@@-$_tlg.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002DFF4 (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18002E124 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E22C (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180057534 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 */

void __fastcall AnimationClockLoggingTelemetry::BeginAnimationClock::StartActivity(
        AnimationClockLoggingTelemetry::BeginAnimationClock *this,
        struct _GUID *a2,
        int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  _DWORD *v8; // rdi
  int v9; // eax
  DWORD CurrentThreadId; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h] BYREF
  struct _GUID *v12; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+58h] [rbp-10h] BYREF

  v3 = a3;
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v8 = (_DWORD *)wil::details::static_lazy<AnimationClockLogging>::get(
                   v6,
                   _lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 4u )
  {
    v13 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v11 = v3;
    v12 = a2;
    v9 = wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
      (int)v8,
      (int)&unk_1800D14FB,
      *((_QWORD *)this + 6) + 8,
      v9,
      (__int64)&v13,
      (__int64)&CurrentThreadId,
      (__int64 *)&v12,
      (__int64)&v11);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (AnimationClockLoggingTelemetry::BeginAnimationClock *)((char *)this + 8),
      v7);
}
