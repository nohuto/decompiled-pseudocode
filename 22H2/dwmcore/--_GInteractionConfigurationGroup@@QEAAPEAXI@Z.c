/*
 * XREFs of ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x1801A79A4
 * Callers:
 *     RemoveCountFromEndOfArrayAndFree @ 0x1801A8710 (RemoveCountFromEndOfArrayAndFree.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801AB758 (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800E6100 (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

InteractionConfigurationGroup *__fastcall InteractionConfigurationGroup::`scalar deleting destructor'(
        InteractionConfigurationGroup *this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup(this);
  operator delete(this);
  return this;
}
