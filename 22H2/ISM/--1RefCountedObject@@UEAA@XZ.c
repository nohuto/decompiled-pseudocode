/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x18001B698
 * Callers:
 *     _ContextualProcessorBuffer::ContextualProcessorBuffer_::_1_::dtor$0 @ 0x180049C54 (_ContextualProcessorBuffer--ContextualProcessorBuffer_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x18004F0F6 (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$0 @ 0x18004F2B4 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$0.c)
 *     _KeyboardModifierState::KeyboardModifierState_::_1_::dtor$0 @ 0x18004F550 (_KeyboardModifierState--KeyboardModifierState_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x18004F705 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x18004FAA8 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _NonPointerProcessor::OnTargetWithFocusChanged_::_1_::dtor$1 @ 0x180050430 (_NonPointerProcessor--OnTargetWithFocusChanged_--_1_--dtor$1.c)
 *     _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$0 @ 0x180050DDA (_DWMFocusedInputTarget--DWMFocusedInputTarget_--_1_--dtor$0.c)
 *     _InputStateManager::InputStateManager_::_1_::dtor$0 @ 0x180051095 (_InputStateManager--InputStateManager_--_1_--dtor$0.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$0 @ 0x180051FBC (_GameInputProcessor--GameInputProcessor_--_1_--dtor$0.c)
 *     _MPCTarget::MPCTarget_::_1_::dtor$0 @ 0x1800BA90F (_MPCTarget--MPCTarget_--_1_--dtor$0.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$0 @ 0x1800F83C1 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$0.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$0 @ 0x1800FD94A (_ResizeProcessor--ResizeProcessor_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x18012C3B8 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _ButtonRecognizer::ButtonRecognizer_::_1_::dtor$0 @ 0x180172FE7 (_ButtonRecognizer--ButtonRecognizer_--_1_--dtor$0.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$0 @ 0x18017484F (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$0.c)
 *     _InputForwardProcessor::InputForwardProcessor_::_1_::dtor$0 @ 0x180176874 (_InputForwardProcessor--InputForwardProcessor_--_1_--dtor$0.c)
 *     _GameInputProcessor::_GameInputProcessor_::_1_::dtor$0 @ 0x18017C095 (_GameInputProcessor--_GameInputProcessor_--_1_--dtor$0.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$1 @ 0x180199702 (_TouchProcessor--Initialize_--_1_--dtor$1.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x180199F3A (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
