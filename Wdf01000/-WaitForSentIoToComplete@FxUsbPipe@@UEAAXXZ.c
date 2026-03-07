void __fastcall FxUsbPipe::WaitForSentIoToComplete(FxUsbPipe *this)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // rsi
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v4; // r10
  FxSystemWorkItem *m_WorkItem; // rbx
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v7; // r10
  const void *v8; // rax
  _FX_DRIVER_GLOBALS *v9; // r10

  p_m_Globals = &this->m_Globals;
  if ( this->m_Reader )
  {
    if ( (*p_m_Globals)->FxVerboseOn )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(v4, 5u, 0xEu, 0x19u, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, _a1);
    }
    m_WorkItem = this->m_Reader->m_WorkItem;
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&m_WorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    if ( (*p_m_Globals)->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qd(
        v7,
        5u,
        0xEu,
        0x1Au,
        (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
        ObjectHandleUnchecked,
        this->m_Reader->m_NumReaders);
    }
    FxUsbPipeContinuousReader::CancelRepeaters(this->m_Reader);
  }
  if ( (*p_m_Globals)->FxVerboseOn )
  {
    v8 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(v9, 5u, 0xEu, 0x1Bu, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, v8);
  }
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&this->m_SentIoEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
}
