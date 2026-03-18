/*
 * XREFs of ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C0244E50
 * Callers:
 *     ?CleanQueue@InteractiveControlDevice@@QEAAXK@Z @ 0x1C0244EC0 (-CleanQueue@InteractiveControlDevice@@QEAAXK@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C02451D8 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0245E94 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ??1InteractiveControlInput@@QEAA@XZ @ 0x1C0246A34 (--1InteractiveControlInput@@QEAA@XZ.c)
 */

InteractiveControlInput *__fastcall InteractiveControlInput::`scalar deleting destructor'(
        InteractiveControlInput *this,
        char a2)
{
  InteractiveControlInput::~InteractiveControlInput(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
