/*
 * XREFs of ?GetFileObject@FxRequest@@QEAAJPEAPEAVFxFileObject@@@Z @ 0x1C0002FF8
 * Callers:
 *     imp_WdfRequestGetFileObject @ 0x1C0002F80 (imp_WdfRequestGetFileObject.c)
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C000309C (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA98 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetFileObject(FxRequest *this, FxFileObject **FileObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxDevice *m_Device; // rbp
  _FILE_OBJECT *v6; // r8
  int IsNotCompleted; // edi
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF
  FxFileObject *pFileObject; // [rsp+50h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  pFileObject = 0LL;
  m_Device = this->m_Device;
  if ( !m_Globals->FxVerifierIO
    || ((*FileObject = 0LL, irql = 0, FxNonPagedObject::Lock(this, &irql), !m_Globals->FxVerifierOn)
      ? (IsNotCompleted = 0)
      : (IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals)),
        FxNonPagedObject::Unlock(this, irql),
        IsNotCompleted >= 0) )
  {
    v6 = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    if ( !v6 && this->m_IrpAllocation == 2 )
      goto LABEL_7;
    if ( FxFileObject::_GetFileObjectFromWdm(m_Device, m_Device->m_FileObjectClass, v6, &pFileObject) >= 0 )
    {
      if ( pFileObject )
      {
        *FileObject = pFileObject;
        return 0LL;
      }
      if ( m_Device->m_FileObjectClass < WdfFileObjectInvalid )
      {
LABEL_7:
        *FileObject = 0LL;
        return 0LL;
      }
    }
    return 3221225488LL;
  }
  return (unsigned int)IsNotCompleted;
}
