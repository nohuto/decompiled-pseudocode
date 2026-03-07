void __fastcall FxIoQueue::StartPowerTransitionOff(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  bool v3; // zf
  unsigned __int16 v5; // r9
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v7; // r10
  void *ObjectHandleUnchecked; // rax
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  v3 = this->m_PowerManaged == 0;
  irql = 0;
  if ( !v3 )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    this->m_PowerState = FxIoQueuePowerStartingTransition;
    KeClearEvent(&this->m_PowerIdle.m_Event);
    if ( FxIoQueue::DispatchEvents(this, irql, 0LL, v5) )
    {
      if ( this->m_Globals->FxVerboseOn )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(v7, 5u, 0xDu, 0x66u, WPP_FxIoQueue_cpp_Traceguids, _a1);
      }
      ObjectHandleUnchecked = (void *)FxObject::GetObjectHandleUnchecked(this);
      _FX_DRIVER_GLOBALS::WaitForSignal(
        this->m_Globals,
        &this->m_PowerIdle,
        "waiting for all threads to stop dispatching requests so that queue can be powered off, WDFQUEUE",
        ObjectHandleUnchecked,
        this->m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
        1);
    }
  }
}
