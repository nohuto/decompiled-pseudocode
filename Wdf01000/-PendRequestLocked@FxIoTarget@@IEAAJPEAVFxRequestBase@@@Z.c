__int64 __fastcall FxIoTarget::PendRequestLocked(FxIoTarget *this, FxRequestBase *Request)
{
  _IRP *m_Irp; // rax
  __int64 result; // rax
  _IRP *v5; // rcx

  Request->m_TargetFlags |= 2u;
  m_Irp = Request->m_Irp.m_Irp;
  --m_Irp->CurrentLocation;
  --m_Irp->Tail.Overlay.CurrentStackLocation;
  result = FxIrpQueue::InsertIrpInQueue(&this->m_PendedQueue, Request->m_Irp.m_Irp, &Request->m_CsqContext, 0);
  if ( (int)result < 0 )
  {
    v5 = Request->m_Irp.m_Irp;
    ++v5->CurrentLocation;
    ++v5->Tail.Overlay.CurrentStackLocation;
    Request->m_TargetFlags &= ~2u;
  }
  return result;
}
