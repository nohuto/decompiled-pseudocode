/*
 * XREFs of ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C007A088
 * Callers:
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C0079470 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0079A80 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C0079C88 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007ACC4 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?InFrame@CDisableScanoutToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0089D40 (-InFrame@CDisableScanoutToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?InFrame@CFlipContentToken@@QEAAJPEA_N@Z @ 0x1C008A044 (-InFrame@CFlipContentToken@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0013814 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C007CC68 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::NotifyTokenInFrame(
        CompositionSurfaceObject *this,
        const struct CToken *a2,
        bool *a3)
{
  int v6; // ebx

  *a3 = 0;
  v6 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 48));
  if ( v6 >= 0 )
  {
    v6 = CCompositionSurface::NotifyTokenInFrame((CompositionSurfaceObject *)((char *)this + 40), a2, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)v6;
}
