/*
 * XREFs of ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x1C00190C0
 * Callers:
 *     ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C0017760 (-ResetAdapterCollection@CTokenManager@@MEAAXXZ.c)
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x1C0017AA0 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0018D7C (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0019388 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ReferenceAdapter@CAdapterCollection@@QEAAJU_LUID@@PEAPEAVCAdapter@@@Z @ 0x1C0078204 (-ReferenceAdapter@CAdapterCollection@@QEAAJU_LUID@@PEAPEAVCAdapter@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLockCriticalSection::Release(CPushLockCriticalSection *this)
{
  if ( *((_BYTE *)this + 8) )
    ExReleasePushLockExclusiveEx(this, 0LL);
  else
    ExReleasePushLockSharedEx(this, 0LL);
}
