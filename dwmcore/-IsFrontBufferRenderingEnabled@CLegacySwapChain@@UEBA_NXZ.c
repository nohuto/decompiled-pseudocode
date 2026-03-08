/*
 * XREFs of ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@UEBA_NXZ @ 0x180297F74
 * Callers:
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011B890 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ @ 0x18011C910 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x18011CFD0 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CLegacySwapChain::IsFrontBufferRenderingEnabled(CLegacySwapChain *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this - 87) || *((_DWORD *)this - 28) == 2 )
    return 1;
  return result;
}
