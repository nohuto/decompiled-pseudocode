/*
 * XREFs of ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C02537C0
 * Callers:
 *     ?CleanQueue@InteractiveControlDevice@@QEAAXK@Z @ 0x1C0253830 (-CleanQueue@InteractiveControlDevice@@QEAAXK@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0253B4C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C02547C0 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ??1InteractiveControlInput@@QEAA@XZ @ 0x1C025532C (--1InteractiveControlInput@@QEAA@XZ.c)
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
