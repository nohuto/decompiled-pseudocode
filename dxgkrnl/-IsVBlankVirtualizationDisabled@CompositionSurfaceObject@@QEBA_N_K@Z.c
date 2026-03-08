/*
 * XREFs of ?IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x1C00770C8
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00768BC (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0078DE0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x1C0079460 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0051E98 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

char __fastcall CompositionSurfaceObject::IsVBlankVirtualizationDisabled(CompositionSurfaceObject *this, __int64 a2)
{
  char v4; // bl
  struct CCompositionBuffer *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48)) >= 0 )
  {
    v6 = 0LL;
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 40), a2, &v6) >= 0 )
      v4 = *((_BYTE *)v6 + 41);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return v4;
}
