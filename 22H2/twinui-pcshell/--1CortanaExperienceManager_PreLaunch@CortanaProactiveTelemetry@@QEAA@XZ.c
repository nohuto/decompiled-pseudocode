/*
 * XREFs of ??1CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180226898
 * Callers:
 *     ?Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x180229740 (-Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z.c)
 *     ?Prelaunch@SearchAppExperienceManager@@UEAAJE@Z @ 0x180265970 (-Prelaunch@SearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802266D8 (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1802266D8.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180227524 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProvid.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18022DA20 (-reset@-$shared_object@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag__ea_18022DA20.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::~CortanaExperienceManager_PreLaunch(
        CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)((char *)this + 8));
}
