/*
 * XREFs of ?QueryInterface@CConversionSwapChain@@$4PPPPPPPM@DAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CLegacySwapChain::QueryInterface((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 776), a2, a3);
}
