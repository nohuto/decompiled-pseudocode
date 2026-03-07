__int64 __fastcall CompositionSurfaceObject::PairedQueryStats(
        CompositionSurfaceObject *this,
        struct CSM_BUFFER_STATISTICS *a2)
{
  int Stats; // ebx

  Stats = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 16));
  if ( Stats >= 0 )
  {
    Stats = CCompositionSurface::QueryStats((CompositionSurfaceObject *)((char *)this + 8), a2);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 16));
  }
  return (unsigned int)Stats;
}
