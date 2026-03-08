/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AABC8
 * Callers:
 *     ?SetApplicationId@CChannelContext@@QEAAJPEBG@Z @ 0x1800AAAEC (-SetApplicationId@CChannelContext@@QEAAJPEBG@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800AC2D8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?InitializeMmcssTask@CGlobalMit@@MEAAJXZ @ 0x1800CBC70 (-InitializeMmcssTask@CGlobalMit@@MEAAJXZ.c)
 *     ?InitializeMMCSSTask@CGlobalManipulationManager@@EEAAJXZ @ 0x1800CBD60 (-InitializeMMCSSTask@CGlobalManipulationManager@@EEAAJXZ.c)
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x1800CBDF4 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z @ 0x1800F217C (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180194D28 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1800AABF0 (StringCopyWorkerW.c)
 */

HRESULT __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  HRESULT result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v4);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
