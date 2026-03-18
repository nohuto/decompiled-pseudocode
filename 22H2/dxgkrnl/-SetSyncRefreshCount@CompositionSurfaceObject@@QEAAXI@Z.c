/*
 * XREFs of ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C0077F28
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C007755C (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@@@Z @ 0x1C00786D0 (-ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@@@Z.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C0079470 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0079A80 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0013814 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CompositionSurfaceObject::SetSyncRefreshCount(CompositionSurfaceObject *this, int a2)
{
  if ( (int)CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 48)) >= 0 )
  {
    *((_DWORD *)this + 33) = a2;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
}
