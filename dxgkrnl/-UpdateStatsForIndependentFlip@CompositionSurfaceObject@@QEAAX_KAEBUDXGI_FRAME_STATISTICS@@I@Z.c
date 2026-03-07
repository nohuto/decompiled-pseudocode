void __fastcall CompositionSurfaceObject::UpdateStatsForIndependentFlip(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        const struct DXGI_FRAME_STATISTICS *a3,
        unsigned int a4)
{
  if ( (int)CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 48)) >= 0 )
  {
    CCompositionSurface::UpdateStatsForIndependentFlip((CompositionSurfaceObject *)((char *)this + 40), a2, a3, a4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
}
