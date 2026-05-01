/*
 * XREFs of ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803B6EAC
 * Callers:
 *     ??1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7130 (--1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B715C (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7188 (--1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B71B4 (--1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B71E0 (--1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B720C (--1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7238 (--1OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7264 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7290 (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B75F4 (--1TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@Q.c)
 *     ??1TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803B7620 (--1TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@QEA.c)
 *     ??1SetInputAppAUMIDActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803CA1E4 (--1SetInputAppAUMIDActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803B6F24 (--1-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803C65E4 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_P.c)
 */

void __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
