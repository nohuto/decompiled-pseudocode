/*
 * XREFs of ?GetDevice@CLegacyRemotingSwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x180108858
 * Callers:
 *     ?GetDevice@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x180121620 (-GetDevice@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CLegacyRemotingSwapChain::GetDevice(CLegacyRemotingSwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 25);
}
