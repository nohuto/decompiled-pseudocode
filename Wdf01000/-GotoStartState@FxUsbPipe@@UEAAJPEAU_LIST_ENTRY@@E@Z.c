__int64 __fastcall FxUsbPipe::GotoStartState(FxUsbPipe *this, _LIST_ENTRY *RequestListHead, unsigned __int8 Lock)
{
  __int64 result; // rax
  FxUsbPipeContinuousReader *m_Reader; // rcx
  int v7; // edi
  unsigned int v8; // esi
  int v9; // ebx
  FxUsbPipeContinuousReader *v10; // rcx
  __int64 v11; // r14
  FxObject *Request; // rbx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_m_Globals; // rbx

  result = FxIoTarget::GotoStartState(this, RequestListHead, Lock);
  m_Reader = this->m_Reader;
  v7 = 0;
  v8 = result;
  if ( !m_Reader || (int)result < 0 )
    return result;
  if ( m_Reader->m_ReadersSubmitted )
    return v8;
  v9 = 0;
  if ( !m_Reader->m_NumReaders )
  {
LABEL_7:
    m_Reader->m_NumFailedReaders = 0;
    v10 = this->m_Reader;
    if ( v10->m_NumReaders )
    {
      v11 = 0LL;
      do
      {
        Request = v10->m_Readers[v11].Request;
        Request[1].m_SpinLock.m_Lock = (unsigned __int64)this;
        FxObject::AddRef(Request, this, 1196, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
        _InterlockedIncrement(&this->m_Reader->m_Pipe->m_IoCount);
        Blink = RequestListHead->Blink;
        p_m_Globals = (_LIST_ENTRY *)&Request[1].m_Globals;
        if ( Blink->Flink != RequestListHead )
          __fastfail(3u);
        p_m_Globals->Blink = Blink;
        p_m_Globals->Flink = RequestListHead;
        Blink->Flink = p_m_Globals;
        RequestListHead->Blink = p_m_Globals;
        KeClearEvent(&this->m_Reader->m_Readers[v7].ReadCompletedEvent.m_Event);
        v10 = this->m_Reader;
        ++v7;
        ++v11;
      }
      while ( v7 < v10->m_NumReaders );
    }
    v10->m_ReadersSubmitted = 1;
    return v8;
  }
  while ( 1 )
  {
    result = FxUsbPipeContinuousReader::FormatRepeater(m_Reader, &m_Reader->m_Readers[v9]);
    v8 = result;
    if ( (int)result < 0 )
      return result;
    m_Reader = this->m_Reader;
    if ( ++v9 >= m_Reader->m_NumReaders )
      goto LABEL_7;
  }
}
