/*
 * XREFs of ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x1C0018BE8
 * Callers:
 *     ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C00173F0 (-ResetAdapterCollection@CTokenManager@@MEAAXXZ.c)
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x1C0017610 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C00188A4 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0018FD8 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ReferenceAdapter@CAdapterCollection@@QEAAJU_LUID@@PEAPEAVCAdapter@@@Z @ 0x1C0077564 (-ReferenceAdapter@CAdapterCollection@@QEAAJU_LUID@@PEAPEAVCAdapter@@@Z.c)
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
