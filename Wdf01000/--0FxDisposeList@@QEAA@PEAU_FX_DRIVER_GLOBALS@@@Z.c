void __fastcall FxDisposeList::FxDisposeList(FxDisposeList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1033u, 0, FxDriverGlobals);
  this->__vftable = (FxDisposeList_vtbl *)FxDisposeList::`vftable';
  this->m_List.Next = 0LL;
  this->m_ListEnd = &this->m_List.Next;
  this->m_SystemWorkItem = 0LL;
  this->m_WorkItemThread = 0LL;
}
