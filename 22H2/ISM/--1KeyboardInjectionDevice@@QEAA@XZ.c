/*
 * XREFs of ??1KeyboardInjectionDevice@@QEAA@XZ @ 0x18011FC34
 * Callers:
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$8 @ 0x18011F937 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$8.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180121CC4 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardInjectionDevice::~KeyboardInjectionDevice(KeyboardInjectionDevice *this)
{
  if ( *((_BYTE *)this + 1556) )
    InjectionDevice::Remove(this);
}
