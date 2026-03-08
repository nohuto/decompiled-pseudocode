/*
 * XREFs of ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@UEAAX_N@Z @ 0x1801079B0
 * Callers:
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@A@EAAX_N@Z @ 0x18011BA50 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@A@EAAX_N@Z.c)
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@7EAAX_N@Z @ 0x18011CAF0 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@7EAAX_N@Z.c)
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAX_N@Z @ 0x18011D1B0 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::SetFrontBufferRenderingOnNextFrame(CLegacySwapChain *this, char a2)
{
  *((_BYTE *)this - 86) = a2;
}
