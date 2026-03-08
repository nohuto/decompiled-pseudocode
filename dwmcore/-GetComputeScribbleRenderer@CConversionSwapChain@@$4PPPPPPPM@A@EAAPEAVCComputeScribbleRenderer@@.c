/*
 * XREFs of ?GetComputeScribbleRenderer@CConversionSwapChain@@$4PPPPPPPM@A@EAAPEAVCComputeScribbleRenderer@@XZ @ 0x18011C6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CComputeScribbleRenderer *__fastcall CConversionSwapChain::GetComputeScribbleRenderer(__int64 a1)
{
  return CLegacyStereoSwapChain::GetComputeScribbleRenderer((CLegacyStereoSwapChain *)(a1 - *(int *)(a1 - 4)));
}
