void __fastcall FxUsbPipeContinuousReader::FxUsbPipeRequestWorkItemHandler(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *FailedRepeater,
        unsigned __int8 a3)
{
  FxUsbPipe *m_Pipe; // rax
  FxRequest *Request; // rcx
  int v6; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  int v9; // r15d
  WDFMEMORY__ *Buffer; // rcx
  int v11; // ebx
  FxUsbDevice *m_UsbDevice; // rbp
  FxUsbPipe *v13; // rcx
  WDFUSBPIPE__ *ObjectHandleUnchecked; // rax
  unsigned __int8 v15; // al
  unsigned __int8 v16; // r8
  int v17; // ebx
  unsigned int v18; // edx
  bool IsVersionGreaterThanOrEqualTo; // al
  FxUsbDevice *v20; // rcx
  unsigned __int8 v21; // dl
  FxUsbPipe *v22; // rcx
  unsigned __int8 v23; // r8
  FxUsbPipeRepeatReader *m_Readers; // rbx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  int status; // [rsp+58h] [rbp+10h] BYREF
  unsigned int PortStatus; // [rsp+60h] [rbp+18h] BYREF

  m_Pipe = this->m_Pipe;
  Request = FailedRepeater->Request;
  v6 = 0;
  irql = 0;
  m_Globals = m_Pipe->m_Globals;
  v9 = FxRequest::GetStatus(Request, (__int64)FailedRepeater, a3);
  Buffer = FailedRepeater->Request->m_RequestContext->m_CompletionParams.Parameters.Write.Buffer;
  if ( Buffer )
    v11 = *(_DWORD *)Buffer;
  else
    v11 = 0;
  FxUsbPipeContinuousReader::CancelRepeaters(this);
  m_UsbDevice = this->m_Pipe->m_UsbDevice;
  if ( !this->m_ReadersFailedCallback
    || (v13 = this->m_Pipe,
        this->m_WorkItemThread = KeGetCurrentThread(),
        ObjectHandleUnchecked = (WDFUSBPIPE__ *)FxObject::GetObjectHandleUnchecked(v13),
        v15 = this->m_ReadersFailedCallback(ObjectHandleUnchecked, v9, v11),
        this->m_WorkItemThread = 0LL,
        v15) )
  {
    status = FxUsbDevice::IsConnected(m_UsbDevice);
    v17 = status;
    if ( status >= 0 )
    {
      IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v18, 9u);
      v20 = m_UsbDevice;
      if ( IsVersionGreaterThanOrEqualTo )
      {
        PortStatus = 0;
        if ( FxUsbDevice::GetPortStatus(m_UsbDevice, &PortStatus) < 0 || (PortStatus & 1) != 0 )
        {
          FxUsbPipe::Reset(this->m_Pipe);
          goto LABEL_13;
        }
        v20 = m_UsbDevice;
      }
      status = FxUsbDevice::Reset(v20);
      v17 = status;
    }
  }
  else
  {
    v17 = -1073741823;
    status = -1073741823;
  }
LABEL_13:
  FxNonPagedObject::Lock(this->m_Pipe, &irql, v16);
  v21 = irql;
  v22 = this->m_Pipe;
  this->m_WorkItemQueued = 0;
  FxNonPagedObject::Unlock(v22, v21, v23);
  if ( v17 >= 0 )
  {
    this->m_NumFailedReaders = 0;
    if ( this->m_NumReaders )
    {
      m_Readers = this->m_Readers;
      do
      {
        if ( (FxUsbPipeContinuousReader::ResubmitRepeater(this, m_Readers, &status) & 1) != 0 )
          IofCallDriver(this->m_Pipe->m_TargetDevice, m_Readers->Request->m_Irp.m_Irp);
        ++v6;
        ++m_Readers;
      }
      while ( v6 < this->m_NumReaders );
    }
  }
}
