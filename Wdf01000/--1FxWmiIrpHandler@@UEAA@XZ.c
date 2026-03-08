/*
 * XREFs of ??1FxWmiIrpHandler@@UEAA@XZ @ 0x1C0029B20
 * Callers:
 *     ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x1C0029B60 (--_GFxWmiIrpHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0002D30 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxWmiIrpHandler::~FxWmiIrpHandler(FxWmiIrpHandler *this, unsigned int a2)
{
  struct _IO_WORKITEM *m_WorkItem; // rcx

  this->__vftable = (FxWmiIrpHandler_vtbl *)FxWmiIrpHandler::`vftable';
  m_WorkItem = this->m_WorkItem;
  if ( m_WorkItem )
    IoFreeWorkItem(m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
