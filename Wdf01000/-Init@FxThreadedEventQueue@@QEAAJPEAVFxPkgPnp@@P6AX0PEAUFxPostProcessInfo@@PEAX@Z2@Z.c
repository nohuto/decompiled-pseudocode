__int64 __fastcall FxThreadedEventQueue::Init(
        FxThreadedEventQueue *this,
        FxPkgPnp *Pnp,
        void (__fastcall *WorkerRoutine)(FxPkgPnp *, FxPostProcessInfo *, void *),
        void *WorkerContext)
{
  int v4; // eax
  unsigned int v5; // ecx

  this->m_PkgPnp = Pnp;
  this->m_EventWorker = WorkerRoutine;
  this->m_EventWorkerContext = WorkerContext;
  v4 = MxWorkItem::Allocate(&this->m_WorkItem, Pnp->m_DeviceBase->m_DeviceObject.m_DeviceObject, WorkerRoutine);
  v5 = 0;
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v5;
}
