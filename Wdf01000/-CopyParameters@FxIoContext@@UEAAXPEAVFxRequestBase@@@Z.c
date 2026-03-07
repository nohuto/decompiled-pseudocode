void __fastcall FxIoContext::CopyParameters(FxIoContext *this, FxRequestBase *Request)
{
  int v4; // ecx
  int v5; // ecx
  void *m_BufferToFree; // rdx
  _IRP *m_Irp; // r8
  void *UserBuffer; // rcx

  v4 = this->m_MajorFunction - 3;
  if ( v4 && (v5 = v4 - 1) != 0 )
  {
    if ( (unsigned int)(v5 - 10) <= 1 )
      this->m_CompletionParams.Parameters.Ioctl.Output.Length = this->m_CompletionParams.IoStatus.Information;
  }
  else
  {
    this->m_CompletionParams.Parameters.Write.Length = this->m_CompletionParams.IoStatus.Information;
  }
  m_BufferToFree = this->m_BufferToFree;
  if ( m_BufferToFree && this->m_CopyBackToBuffer )
  {
    m_Irp = Request->m_Irp.m_Irp;
    UserBuffer = m_Irp->UserBuffer;
    if ( UserBuffer )
    {
      memmove(UserBuffer, m_BufferToFree, m_Irp->IoStatus.Information);
      this->m_CopyBackToBuffer = 0;
    }
  }
}
