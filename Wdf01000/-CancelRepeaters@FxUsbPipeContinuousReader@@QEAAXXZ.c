void __fastcall FxUsbPipeContinuousReader::CancelRepeaters(FxUsbPipeContinuousReader *this)
{
  int v2; // edi
  FxUsbPipeRepeatReader *m_Readers; // rsi
  void *ObjectHandleUnchecked; // rax
  __int64 v5; // rdx

  KeEnterCriticalRegion();
  v2 = 0;
  if ( this->m_NumReaders )
  {
    m_Readers = this->m_Readers;
    do
    {
      FxRequestBase::Cancel(m_Readers->Request);
      ObjectHandleUnchecked = (void *)FxObject::GetObjectHandleUnchecked(this->m_Pipe);
      _FX_DRIVER_GLOBALS::WaitForSignal(
        *(_FX_DRIVER_GLOBALS **)(v5 + 16),
        &this->m_Readers[v2].ReadCompletedEvent,
        "waiting for continuous reader to finish, WDFUSBPIPE",
        ObjectHandleUnchecked,
        *(_DWORD *)(*(_QWORD *)(v5 + 16) + 416LL),
        1);
      ++m_Readers;
      ++v2;
    }
    while ( v2 < this->m_NumReaders );
  }
  KeLeaveCriticalRegion();
}
