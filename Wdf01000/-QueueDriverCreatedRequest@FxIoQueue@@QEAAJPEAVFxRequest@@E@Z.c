/*
 * XREFs of ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C000FB4E
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C0003FF0 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C000D440 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0004AC0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0034C84 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00BB778 (-Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@.c)
 */

int __fastcall FxIoQueue::QueueDriverCreatedRequest(FxIoQueue *this, FxRequest *Request, unsigned __int8 ParentQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int16 v7; // di
  int result; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IRP *m_Irp; // rax
  FxDeviceBase *m_DeviceBase; // r15
  int v12; // ebp
  _IRP *v13; // rax
  __int16 oldFlags; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  oldFlags = 0;
  v7 = 0;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyQueueDriverCreatedRequest(this, m_Globals, Request, &oldFlags);
    if ( result < 0 )
      return result;
    v7 = oldFlags;
  }
  if ( ParentQueue )
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
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  }
  m_DeviceBase = Request->m_DeviceBase;
  Request->m_DeviceBase = this->m_DeviceBase;
  v12 = FxIoQueue::QueueRequestFromForward(this, Request, ParentQueue);
  if ( v12 < 0 )
  {
    Request->m_DeviceBase = m_DeviceBase;
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(Request, v7);
    if ( ParentQueue )
    {
      v13 = Request->m_Irp.m_Irp;
      ++v13->CurrentLocation;
      ++v13->Tail.Overlay.CurrentStackLocation;
      memset(
        &Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1],
        0,
        sizeof(Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1]));
    }
  }
  return v12;
}
