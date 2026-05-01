/*
 * XREFs of ??1CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800736CC
 * Callers:
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x180073520 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 *     _SearchAppDesktopExperienceView::ShowWithStart_::_1_::dtor$0 @ 0x1801767E5 (_SearchAppDesktopExperienceView--ShowWithStart_--_1_--dtor$0.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180281110 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 *     _CortanaDesktopExperienceView::ShowWithStart_::_1_::dtor$0 @ 0x1802812A2 (_CortanaDesktopExperienceView--ShowWithStart_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001A910 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::~CortanaExperienceManager_ShowWithStart(
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
