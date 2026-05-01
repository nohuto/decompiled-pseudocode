/*
 * XREFs of ??1EventSource@Platform@@QEAA@XZ @ 0x18036CA1C
 * Callers:
 *     _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1__::_1_::dtor$3 @ 0x18036A7FE (_Platform--Collections--Vector_Windows--Internal--ComposableShell--Multitasking--IS_ea_18036A7FE.c)
 *     _Platform::Collections::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____1__::_1_::dtor$4 @ 0x18036A80E (_Platform--Collections--Vector_Windows--Internal--ComposableShell--Multitasking--IS_ea_18036A80E.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x18036B13D (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_18036B13D.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl_::_1_::dtor$2 @ 0x18036B14D (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SwitchIt_ea_18036B14D.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_SwitchItemDataViewImpl_::_1_::dtor$0 @ 0x18036CBE2 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--_SwitchItemDataViewIm.c)
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_SwitchItemDataViewImpl_::_1_::dtor$1 @ 0x18036CBF2 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--_SwitchI_ea_18036CBF2.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1__::_1_::dtor$3 @ 0x18038790A (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_18038790A.c)
 *     _Platform::Collections::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1__::_1_::dtor$4 @ 0x18038791A (_Platform--Collections--Vector_WindowsInternal--ComposableShell--Experiences--Switc_ea_18038791A.c)
 * Callees:
 *     <none>
 */

void __fastcall Platform::EventSource::~EventSource(Platform::EventSource *this, void **a2)
{
  Platform::Details::EventSourceUninitialize(this, a2);
}
