/*
 * XREFs of imp_WdfFileObjectGetDevice @ 0x1C0003420
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0059258 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfFileObjectGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 FileObject)
{
  __int64 v2; // rbx
  __int64 Offset; // r8
  FxFileObject *v4; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  FxFileObject *pFO; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  pFO = 0LL;
  if ( !FileObject )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1018uLL);
  LOWORD(Offset) = 0;
  v4 = (FxFileObject *)(~FileObject & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (FileObject & 1) != 0 )
  {
    Offset = LOWORD(v4->FxNonPagedObject::FxObject::__vftable);
    v4 = (FxFileObject *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4120 )
  {
    pFO = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pFO, (void *)FileObject, 0x1018u, Offset);
    v4 = pFO;
  }
  m_DeviceBase = v4->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    return (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  return (WDFDEVICE__ *)v2;
}
