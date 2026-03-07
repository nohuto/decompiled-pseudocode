char __fastcall FxEventQueue::QueueToThreadWorker(FxEventQueue *this)
{
  KIRQL v2; // bp
  char v3; // bl
  const void *_a1; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  unsigned __int8 m_QueueFlags; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  if ( this->m_QueueHead == this->m_QueueTail )
  {
    v3 = 0;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qq(
      *(_FX_DRIVER_GLOBALS **)(v6 + 16),
      4u,
      0xCu,
      0xCu,
      WPP_EventQueue_cpp_Traceguids,
      _a1,
      *(const void **)(v5 + 144));
  }
  else
  {
    m_QueueFlags = this->m_QueueFlags;
    v3 = 1;
    if ( (m_QueueFlags & 1) != 0 )
      v3 = 0;
    else
      this->m_QueueFlags = m_QueueFlags | 1;
  }
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v2);
  return v3;
}
