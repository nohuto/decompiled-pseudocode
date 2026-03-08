/*
 * XREFs of ?GetComputeScribbleRenderer@CLegacySwapChain@@UEAAPEAVCComputeScribbleRenderer@@XZ @ 0x180107954
 * Callers:
 *     ?GetComputeScribbleRenderer@CLegacySwapChain@@$4PPPPPPPM@A@EAAPEAVCComputeScribbleRenderer@@XZ @ 0x18011B650 (-GetComputeScribbleRenderer@CLegacySwapChain@@$4PPPPPPPM@A@EAAPEAVCComputeScribbleRenderer@@XZ.c)
 * Callees:
 *     <none>
 */

struct CComputeScribbleRenderer *__fastcall CLegacySwapChain::GetComputeScribbleRenderer(CLegacySwapChain *this)
{
  return (struct CComputeScribbleRenderer *)*((_QWORD *)this - 10);
}
