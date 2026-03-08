/*
 * XREFs of imp_WdfFileObjectWdmGetFileObject @ 0x1C0038480
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

_FILE_OBJECT *__fastcall imp_WdfFileObjectWdmGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFFILEOBJECT__ *FileObject)
{
  FxFileObject *pFO; // [rsp+30h] [rbp+8h] BYREF

  pFO = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)FileObject, 0x1018u, (void **)&pFO);
  return pFO->m_FileObject.m_FileObject;
}
