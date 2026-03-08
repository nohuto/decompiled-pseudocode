/*
 * XREFs of ?UpdateStats@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0079720
 * Callers:
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x1C0079460 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateStats@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C007C630 (-UpdateStats@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 */

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
