/*
 * XREFs of imp_WdfFileObjectGetFlags @ 0x1C0033CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

__int64 __fastcall imp_WdfFileObjectGetFlags(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFFILEOBJECT__ *FileObject)
{
  _FILE_OBJECT *m_FileObject; // rcx
  FxFileObject *pFO; // [rsp+30h] [rbp+8h] BYREF

  pFO = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)FileObject, 0x1018u, (void **)&pFO);
  m_FileObject = pFO->m_FileObject.m_FileObject;
  if ( m_FileObject )
    return m_FileObject->Flags;
  else
    return 0LL;
}
