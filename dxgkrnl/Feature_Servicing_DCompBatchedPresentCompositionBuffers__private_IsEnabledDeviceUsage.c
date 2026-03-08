/*
 * XREFs of Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage @ 0x1C0026DD8
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DC0C (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x1C00119D0 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0012A00 (-Discard@CCompositionToken@@UEAAXXZ.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0017FA0 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0079780 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0079B08 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0079CE0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00811E8 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenI.c)
 * Callees:
 *     Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledFallback @ 0x1C0026E10 (Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_featureState & 0x10) != 0 )
    return Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_featureState & 1;
  else
    return Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_featureState,
             3LL);
}
