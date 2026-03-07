_UNICODE_STRING *__fastcall imp_WdfFileObjectGetFileName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFFILEOBJECT__ *FileObject)
{
  _FILE_OBJECT *m_FileObject; // rax
  FxFileObject *pFO; // [rsp+30h] [rbp+8h] BYREF

  pFO = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], FileObject, 0x1018u, (void **)&pFO);
  if ( FxVerifierCheckIrqlLevel(pFO->m_Globals, 0) >= 0 && (m_FileObject = pFO->m_FileObject.m_FileObject) != 0LL )
    return &m_FileObject->FileName;
  else
    return 0LL;
}
