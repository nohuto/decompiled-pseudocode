/*
 * XREFs of ??0FxEventQueue@@QEAA@E@Z @ 0x1C008ADE4
 * Callers:
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C007EA8C (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C008AE2C (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 * Callees:
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x1C00622B4 (--0FxWaitLockInternal@@QEAA@XZ.c)
 */

void __fastcall FxEventQueue::FxEventQueue(FxEventQueue *this, unsigned __int8 QueueDepth)
{
  this->m_QueueLock.m_Lock = 0LL;
  this->m_QueueLock.m_DbgFlagIsInitialized = 1;
  FxWaitLockInternal::FxWaitLockInternal(&this->m_StateMachineLock);
  this->m_PkgPnp = 0LL;
  this->m_EventWorker = 0LL;
  this->m_WorkItemFinished = 0LL;
  *(_WORD *)&this->m_QueueFlags = 0;
  *(_DWORD *)&this->m_QueueHead = 0x80000;
}
