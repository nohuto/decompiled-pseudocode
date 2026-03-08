/*
 * XREFs of ?GetDevice@CLegacyRemotingSwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x180107D18
 * Callers:
 *     ?GetDevice@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011D470 (-GetDevice@CLegacyRemotingSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CLegacyRemotingSwapChain::GetDevice(CLegacyRemotingSwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 25);
}
