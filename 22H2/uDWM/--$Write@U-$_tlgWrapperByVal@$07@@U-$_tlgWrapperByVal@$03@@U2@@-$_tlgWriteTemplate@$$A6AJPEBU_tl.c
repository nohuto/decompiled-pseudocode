/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800056C8
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002C690 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18002CB50 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18002D680 (-StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002D82C (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18002F1E0 (-StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x18002F2A0 (-StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180041EE0 (-StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180041FA0 (-StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18008FC84 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18008FD80 (-StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18008FFC0 (-StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180090200 (-StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180090440 (-StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180090680 (-StopActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x1800BA5E0 (-StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180005758 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF

  v8[8] = a7;
  v8[6] = a6;
  v8[4] = a5;
  v8[9] = 4LL;
  v8[7] = 4LL;
  v8[5] = 8LL;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, a3, 0, 5, (__int64)v8);
}
