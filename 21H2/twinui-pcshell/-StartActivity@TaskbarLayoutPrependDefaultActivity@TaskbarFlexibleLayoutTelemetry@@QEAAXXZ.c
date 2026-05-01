/*
 * XREFs of ?StartActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x18015C270
 * Callers:
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180153860 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18001DB3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F6D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?zInternalStart@?$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18015FD08 (-zInternalStart@-$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1801C9428 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18020E6F0 (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::StartActivity(
        TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r8
  const GUID *v5; // rcx
  DWORD CurrentThreadId; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  wil::ActivityBase<TaskbarLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v2 = TaskbarLogging::Provider();
  v3 = (__int64)v2;
  if ( *(_DWORD *)v2 > 5u && tlgKeywordOn((__int64)v2, 0x400000000000LL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v7 = 0x1000000LL;
    v4 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v4 + 4) || _tlgGuidIsZero((const struct _GUID *)(v4 + 24)) )
      v5 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v3,
      byte_1805A472C,
      (const GUID *)(v4 + 8),
      v5,
      (__int64)&v7,
      (__int64)&CurrentThreadId);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *)((char *)this + 8));
}
