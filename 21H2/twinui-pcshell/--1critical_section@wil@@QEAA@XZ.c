/*
 * XREFs of ??1critical_section@wil@@QEAA@XZ @ 0x1801A9184
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$11 @ 0x1803B6F99 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$11.c)
 *     _KeyboardHosting::TabTipAdapter::TabTipAdapter_::_1_::dtor$12 @ 0x1803C9E17 (_KeyboardHosting--TabTipAdapter--TabTipAdapter_--_1_--dtor$12.c)
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$1 @ 0x1804599CF (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$1.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$0 @ 0x1804BDA3B (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall wil::critical_section::~critical_section(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
