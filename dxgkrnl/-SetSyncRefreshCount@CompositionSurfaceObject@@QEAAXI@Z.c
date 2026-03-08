/*
 * XREFs of ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C0077288
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00768BC (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@@@Z @ 0x1C0077A30 (-ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@@@Z.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C00787D0 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0078DE0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CompositionSurfaceObject::SetSyncRefreshCount(CompositionSurfaceObject *this, int a2)
{
  if ( (int)CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 48)) >= 0 )
  {
    *((_DWORD *)this + 33) = a2;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
}
