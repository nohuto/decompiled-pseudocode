__int64 __fastcall FxPkgGeneral::OnCleanup(FxPkgGeneral *this, FxIrp *FxIrp)
{
  unsigned __int64 ObjectHandleUnchecked; // r15
  _FILE_OBJECT *FileObject; // r8
  unsigned int v6; // ebp
  $2577F5D74A6AFCBEE1DF62E423AAEAA5 *v7; // r14
  int FileObjectFromWdm; // eax
  FxFileObject *v9; // rdx
  _LIST_ENTRY *m_PkgContext; // rcx
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // rdi
  _LIST_ENTRY *v13; // rcx
  __int64 v14; // rdx
  _LIST_ENTRY *v15; // rcx
  _FILE_OBJECT *v16; // rdx
  _IRP *m_Irp; // rcx
  FxFileObject *pFxFO; // [rsp+40h] [rbp+8h] BYREF

  pFxFO = 0LL;
  ObjectHandleUnchecked = 0LL;
  FileObject = FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( FileObject && (FileObject->Flags & 0x100) != 0 )
  {
    v6 = 0;
    v7 = &this->96;
  }
  else
  {
    v7 = &this->96;
    FileObjectFromWdm = FxFileObject::_GetFileObjectFromWdm(
                          this->m_Device,
                          (_WDF_FILEOBJECT_CLASS)LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next),
                          FileObject,
                          &pFxFO);
    v9 = pFxFO;
    v6 = FileObjectFromWdm;
    if ( pFxFO )
    {
      if ( FileObjectFromWdm >= 0 )
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(pFxFO);
      m_PkgContext = (_LIST_ENTRY *)v9->m_PkgContext;
      if ( !m_PkgContext )
        m_PkgContext = &this->m_FileObjectInfoHeadList;
    }
    else
    {
      for ( m_PkgContext = this->m_FileObjectInfoHeadList.Blink;
            m_PkgContext != &this->m_FileObjectInfoHeadList;
            m_PkgContext = m_PkgContext->Blink )
      {
        if ( !LODWORD(m_PkgContext[9].Flink) && m_PkgContext[2].Blink )
        {
          m_PkgContext = m_PkgContext->Blink;
          break;
        }
      }
    }
    Flink = m_PkgContext->Flink;
    p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
    while ( Flink != p_m_FileObjectInfoHeadList )
    {
      if ( Flink[3].Blink )
      {
        v13 = Flink[3].Flink;
        LOBYTE(pFxFO) = 0;
        if ( v13 )
          ((void (__fastcall *)(_LIST_ENTRY *, FxFileObject **))v13->Flink[1].Flink)(v13, &pFxFO);
        ((void (__fastcall *)(unsigned __int64))Flink[3].Blink)(ObjectHandleUnchecked);
        v15 = Flink[3].Flink;
        if ( v15 )
        {
          LOBYTE(v14) = (_BYTE)pFxFO;
          ((void (__fastcall *)(_LIST_ENTRY *, __int64))v15->Flink[1].Blink)(v15, v14);
        }
      }
      Flink = Flink->Flink;
    }
    v16 = FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    if ( v16 )
      FxPkgIo::FlushAllQueuesByFileObject((FxPkgIo *)v7->m_DeviceBase[3].m_ChildListHead.Blink, v16);
  }
  m_Irp = FxIrp->m_Irp;
  if ( BYTE1(v7->m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(v7->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    m_Irp->IoStatus.Status = v6;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  return v6;
}
