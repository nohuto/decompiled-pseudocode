/*
 * XREFs of ??1critical_section@wil@@QEAA@XZ @ 0x1801A8FD4
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$11 @ 0x1803B6CC9 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$11.c)
 *     _KeyboardHosting::TabTipAdapter::TabTipAdapter_::_1_::dtor$12 @ 0x1803C9B47 (_KeyboardHosting--TabTipAdapter--TabTipAdapter_--_1_--dtor$12.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$1 @ 0x18045963F (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$1.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$0 @ 0x1804BD6AB (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall wil::critical_section::~critical_section(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
