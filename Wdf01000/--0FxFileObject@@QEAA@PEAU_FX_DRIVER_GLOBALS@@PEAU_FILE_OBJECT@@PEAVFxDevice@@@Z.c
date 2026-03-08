/*
 * XREFs of ??0FxFileObject@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_FILE_OBJECT@@PEAVFxDevice@@@Z @ 0x1C003F36C
 * Callers:
 *     ?_CreateFileObject@FxFileObject@@SAJPEAVFxDevice@@PEAU_IRP@@W4_WDF_FILEOBJECT_CLASS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C003F4F8 (-_CreateFileObject@FxFileObject@@SAJPEAVFxDevice@@PEAU_IRP@@W4_WDF_FILEOBJECT_CLASS@@PEAU_WDF_OB.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C00251D0 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 */

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
