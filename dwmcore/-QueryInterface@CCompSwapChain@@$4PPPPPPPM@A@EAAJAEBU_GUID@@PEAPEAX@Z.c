/*
 * XREFs of ?QueryInterface@CCompSwapChain@@$4PPPPPPPM@A@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011BED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCompSwapChain::QueryInterface((CCompSwapChain *)(a1 - *(int *)(a1 - 4)), a2, a3);
}
