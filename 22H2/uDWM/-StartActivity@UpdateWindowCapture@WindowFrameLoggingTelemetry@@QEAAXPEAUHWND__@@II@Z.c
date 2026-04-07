/*
 * XREFs of ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x18008F508
 * Callers:
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180091360 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002CC08 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D9EC (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180057484 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x18008DD3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180092E18 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall WindowFrameLoggingTelemetry::UpdateWindowCapture::StartActivity(
        WindowFrameLoggingTelemetry::UpdateWindowCapture *this,
        HWND a2,
        int a3,
        int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // [rsp+50h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+54h] [rbp-34h] BYREF
  HWND v14; // [rsp+58h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp-28h] BYREF
  int v16; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v10 = *((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                      v8,
                      _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
        + 1);
  if ( *(_DWORD *)v10 > 5u
    && (*(_QWORD *)(v10 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v10 + 24) & 0x200000000000LL) == *(_QWORD *)(v10 + 24) )
  {
    v15 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v16 = a4;
    v12 = a3;
    v14 = a2;
    v11 = wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      byte_1800D0246,
      *((_QWORD *)this + 6) + 8LL,
      v11,
      (__int64)&v15,
      (__int64)&CurrentThreadId,
      (__int64)&v14,
      (__int64)&v12,
      (__int64)&v16);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (WindowFrameLoggingTelemetry::UpdateWindowCapture *)((char *)this + 8),
      v9);
}
