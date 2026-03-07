void __fastcall CompositionSurfaceObject::UpdateStats(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  if ( (int)CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 48)) >= 0 )
  {
    CCompositionSurface::UpdateStats((CompositionSurfaceObject *)((char *)this + 40), a2, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
}
