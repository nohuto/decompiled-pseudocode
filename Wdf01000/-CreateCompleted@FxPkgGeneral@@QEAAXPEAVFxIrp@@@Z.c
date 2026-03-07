void __fastcall FxPkgGeneral::CreateCompleted(FxPkgGeneral *this, FxIrp *Irp)
{
  if ( Irp->m_Irp->IoStatus.Status < 0 )
  {
    FxFileObject::_DestroyFileObject(
      this->m_Device,
      (_WDF_FILEOBJECT_CLASS)this->m_DeviceBase[1].m_DisposeSingleEntry.Next,
      Irp->m_Irp->Tail.Overlay.CurrentStackLocation->FileObject);
    FxPkgGeneral::DecrementOpenHandleCount(this);
  }
}
