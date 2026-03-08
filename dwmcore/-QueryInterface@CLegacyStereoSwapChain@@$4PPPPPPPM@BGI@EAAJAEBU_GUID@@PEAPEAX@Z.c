/*
 * XREFs of ?QueryInterface@CLegacyStereoSwapChain@@$4PPPPPPPM@BGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011CA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoSwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CLegacySwapChain::QueryInterface((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 360), a2, a3);
}
