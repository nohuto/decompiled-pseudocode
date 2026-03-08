/*
 * XREFs of ?GetDevice@CDummyRemotingSwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x18010787C
 * Callers:
 *     ?GetDevice@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011B3B0 (-GetDevice@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDummyRemotingSwapChain::GetDevice(CDummyRemotingSwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 27);
}
