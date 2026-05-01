/*
 * XREFs of ??1VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18044E9E0
 * Callers:
 *     ?OnAppAddedToSwitchers@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_FLAGS@@@Z @ 0x180081880 (-OnAppAddedToSwitchers@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_.c)
 *     _VoiceAssistantPositioner::OnAppAddedToSwitchers_::_1_::dtor$0 @ 0x180176D30 (_VoiceAssistantPositioner--OnAppAddedToSwitchers_--_1_--dtor$0.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18044E5D8 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_18044E5D8.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18044FE20 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorT.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180457868 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_180457868.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::~VAPositioner_AppAddedToTaskbarActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *this)
{
  *(_QWORD *)this = &VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)((char *)this + 8));
}
