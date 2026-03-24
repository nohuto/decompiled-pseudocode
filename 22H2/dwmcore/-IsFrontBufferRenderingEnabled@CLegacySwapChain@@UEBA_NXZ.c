/*
 * XREFs of ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@UEBA_NXZ @ 0x180249CE0
 * Callers:
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F6E00 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ @ 0x1800F7290 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x1800F7660 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CLegacySwapChain::IsFrontBufferRenderingEnabled(CLegacySwapChain *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this - 84) || *((_DWORD *)this - 42) == 2 )
    return 1;
  return result;
}
