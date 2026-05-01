/*
 * XREFs of ??1CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18001904C
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x180018510 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     _SearchAppDesktopExperienceView::PositionCortanaWindow_::_1_::dtor$0 @ 0x180172A64 (_SearchAppDesktopExperienceView--PositionCortanaWindow_--_1_--dtor$0.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F528 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     _CortanaDesktopExperienceView::PositionCortanaWindow_::_1_::dtor$0 @ 0x18027FF0B (_CortanaDesktopExperienceView--PositionCortanaWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001981C (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::~CortanaExperienceManager_PositionCortanaWindow(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
