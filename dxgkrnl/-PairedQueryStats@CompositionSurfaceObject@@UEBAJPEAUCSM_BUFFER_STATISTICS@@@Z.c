/*
 * XREFs of ?PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C007B7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0051E98 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C007C3A0 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 */

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
