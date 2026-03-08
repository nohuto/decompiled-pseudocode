/*
 * XREFs of ?QueryInterface@CDDisplaySwapChain@@$4PPPPPPPM@CBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011AB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CLegacySwapChain::QueryInterface((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 528), a2, a3);
}
