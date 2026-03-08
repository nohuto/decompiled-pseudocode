/*
 * XREFs of ?GetPixelFormatInfo@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011B3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDummyRemotingSwapChain::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CDummyRemotingSwapChain::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
