int __fastcall FxIoQueue::ForwardRequestToParent(
        FxIoQueue *this,
        FxIoQueue *DestQueue,
        FxRequest *Request,
        _WDF_REQUEST_FORWARD_OPTIONS *a4)
{
  unsigned __int8 m_ForwardRequestToParent; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int result; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IRP *m_Irp; // rax
  _IRP *v12; // rcx

  m_ForwardRequestToParent = Request->m_ForwardRequestToParent;
  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierOn
    || (result = FxIoQueue::Vf_VerifyForwardRequestToParent(this, m_Globals, DestQueue, Request), result >= 0) )
  {
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    m_Irp = Request->m_Irp.m_Irp;
    --m_Irp->CurrentLocation;
    --m_Irp->Tail.Overlay.CurrentStackLocation;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = *(_DEVICE_OBJECT **)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags
                                                                                               + 144LL);
    Request->m_DeviceBase = *(FxDeviceBase **)&this->m_DeviceBase[1].m_ObjectFlags;
    Request->m_ForwardRequestToParent = 1;
    result = FxIoQueue::ForwardRequestWorker(this, Request, DestQueue);
    if ( result < 0 )
    {
      Request->m_DeviceBase = this->m_DeviceBase;
      v12 = Request->m_Irp.m_Irp;
      ++v12->CurrentLocation;
      ++v12->Tail.Overlay.CurrentStackLocation;
      Request->m_ForwardRequestToParent = m_ForwardRequestToParent;
    }
  }
  return result;
}
