/*
 * XREFs of ?PairedQueryStats@CompositionSurfaceObject@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C007C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000AEB4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C007CFD0 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
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
