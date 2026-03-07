void __fastcall FxIoResReqList::FxIoResReqList(FxIoResReqList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxResourceCollection::FxResourceCollection(this, FxDriverGlobals, 0x1037u, 0xA0u, 3u);
  this->m_SlotNumber = 0;
  this->m_InterfaceType = Internal;
  this->__vftable = (FxIoResReqList_vtbl *)FxIoResList::`vftable';
  this->m_AccessFlags = 3;
}
