/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@UEAA@XZ @ 0x18008B968
 * Callers:
 *     _InputSiteHierarchyManager::InputSiteHierarchyManager_::_1_::dtor$0 @ 0x18004E829 (_InputSiteHierarchyManager--InputSiteHierarchyManager_--_1_--dtor$0.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$0 @ 0x18008B8FF (_SpectrumListener--SpectrumListener_--_1_--dtor$0.c)
 *     _MagnifierProcessor::DeviceState::DeviceState_::_1_::dtor$0 @ 0x18017CCAB (_MagnifierProcessor--DeviceState--DeviceState_--_1_--dtor$0.c)
 *     _MagnifierProcessor::MagnifierProcessor_::_1_::dtor$0 @ 0x18017CD87 (_MagnifierProcessor--MagnifierProcessor_--_1_--dtor$0.c)
 *     _VirtualHotKeyTracker::VirtualHotKeyTracker_::_1_::dtor$0 @ 0x180180182 (_VirtualHotKeyTracker--VirtualHotKeyTracker_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
