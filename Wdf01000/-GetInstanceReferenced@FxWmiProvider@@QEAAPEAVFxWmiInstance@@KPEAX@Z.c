/*
 * XREFs of ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C0028490
 * Callers:
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002ABB0 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C00284F8 (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 */

FxWmiInstance *__fastcall FxWmiProvider::GetInstanceReferenced(FxWmiProvider *this, unsigned int Index, void *Tag)
{
  FxWmiInstance *InstanceReferencedLocked; // rbx
  unsigned __int8 v7; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this->m_Parent, &irql, (unsigned __int8)Tag);
  InstanceReferencedLocked = FxWmiProvider::GetInstanceReferencedLocked(this, Index, Tag);
  FxNonPagedObject::Unlock(this->m_Parent, irql, v7);
  return InstanceReferencedLocked;
}
