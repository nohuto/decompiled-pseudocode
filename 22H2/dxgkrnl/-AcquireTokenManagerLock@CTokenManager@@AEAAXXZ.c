/*
 * XREFs of ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00121F0
 * Callers:
 *     ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C0017760 (-ResetAdapterCollection@CTokenManager@@MEAAXXZ.c)
 *     ?LockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x1C00177E0 (-LockIfNotTokenThread@CTokenManager@@UEAAXXZ.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C0017A20 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0018038 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0018C7C (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C001BC5C (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x1C0076F70 (-AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C0077110 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ @ 0x1C00771E0 (-ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ.c)
 *     ?ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x1C0077770 (-ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ.c)
 *     ?EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C0077A00 (-EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z @ 0x1C0077B40 (-GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z.c)
 *     ?GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE_@@PEAI@Z @ 0x1C0077C10 (-GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE_@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::AcquireTokenManagerLock(CTokenManager *this)
{
  ExAcquirePushLockExclusiveEx((char *)this + 96, 0LL);
  *((_QWORD *)this + 13) = KeGetCurrentThread();
}
