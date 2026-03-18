/*
 * XREFs of ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800E6100
 * Callers:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800E607C (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x1801A79A4 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097870 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall InteractionConfigurationGroup::~InteractionConfigurationGroup(InteractionConfigurationGroup *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 40);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 8);
}
