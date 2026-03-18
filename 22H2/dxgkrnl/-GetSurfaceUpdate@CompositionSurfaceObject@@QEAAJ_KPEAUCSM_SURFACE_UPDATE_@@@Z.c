/*
 * XREFs of ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C0078194
 * Callers:
 *     ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z @ 0x1C000CE00 (-GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C0078448 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAV.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000AEB4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C007C79C (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetSurfaceUpdate(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        struct CSM_SURFACE_UPDATE_ *a3)
{
  int SurfaceUpdate; // ebx

  SurfaceUpdate = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48));
  if ( SurfaceUpdate >= 0 )
  {
    SurfaceUpdate = CCompositionSurface::GetSurfaceUpdate((CompositionSurfaceObject *)((char *)this + 40), a2, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)SurfaceUpdate;
}
