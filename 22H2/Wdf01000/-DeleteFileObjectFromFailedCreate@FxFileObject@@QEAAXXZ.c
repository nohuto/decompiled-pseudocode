/*
 * XREFs of ?DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ @ 0x1C00531FC
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

void __fastcall FxFileObject::DeleteFileObjectFromFailedCreate(FxFileObject *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this->m_DeviceBase, &irql, a3);
  Flink = this->m_Link.Flink;
  if ( Flink->Blink != &this->m_Link || (Blink = this->m_Link.Blink, Blink->Flink != &this->m_Link) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  FxNonPagedObject::Unlock(this->m_DeviceBase, irql, v4);
  FxObject::ClearEvtCallbacks(this);
  this->DeleteObject(this);
}
