void __fastcall FxFileObject::FxFileObject(
        FxFileObject *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _FILE_OBJECT *pWdmFileObject,
        FxDevice *pDevice)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1018u, 0xA0u, FxDriverGlobals);
  this->m_FileObject.m_FileObject = pWdmFileObject;
  this->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxFileObject::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxFileObject::`vftable'{for `IFxHasCallbacks'};
  this->m_PkgContext = 0LL;
  this->m_DeviceBase = pDevice;
  FxObject::MarkNoDeleteDDI(this, ObjectLock);
}
