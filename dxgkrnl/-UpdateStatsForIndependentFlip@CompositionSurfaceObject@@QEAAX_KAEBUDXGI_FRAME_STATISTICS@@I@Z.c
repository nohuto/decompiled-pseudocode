/*
 * XREFs of ?UpdateStatsForIndependentFlip@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x1C0077380
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00768BC (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateStatsForIndependentFlip@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x1C007C688 (-UpdateStatsForIndependentFlip@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@I@Z.c)
 */

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
