void __fastcall FxUsbPipeContinuousReader::FxUsbPipeContinuousReader(
        FxUsbPipeContinuousReader *this,
        FxUsbPipe *Pipe,
        unsigned __int8 NumReaders)
{
  this->m_NumReaders = NumReaders;
  this->m_NumFailedReaders = 0;
  `vector constructor iterator'(
    (char *)this->m_Readers,
    0x78uLL,
    1uLL,
    (void *(__fastcall *)(void *))FxUsbPipeRepeatReader::FxUsbPipeRepeatReader);
  this->m_WorkItem = 0LL;
  this->m_WorkItemRerunContext = 0LL;
  this->m_WorkItemFlags = 0;
  *(_WORD *)&this->m_WorkItemQueued = 0;
  this->m_Lookaside = 0LL;
  this->m_WorkItemThread = 0LL;
  this->m_Pipe = Pipe;
  this->m_TargetDevice = Pipe->m_TargetDevice;
  memset(this->m_Readers, 0, 120LL * this->m_NumReaders);
}
