void __fastcall FxIoResList::FxIoResList(
        FxIoResList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoResReqList *RequirementsList)
{
  FxResourceCollection::FxResourceCollection(this, FxDriverGlobals, 0x1035u, 0xA0u, 0);
  this->m_OwningList = RequirementsList;
  this->__vftable = (FxIoResList_vtbl *)FxIoResList::`vftable';
  this->m_AccessFlags = RequirementsList->m_AccessFlags;
}
