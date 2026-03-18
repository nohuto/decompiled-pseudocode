/*
 * XREFs of ?GetDevice@CLegacySwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x1801084A0
 * Callers:
 *     ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011F860 (-GetDevice@CLegacySwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@7EBAPEAVCD3DDevice@@XZ @ 0x1801208E0 (-GetDevice@CLegacySwapChain@@$4PPPPPPPM@7EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAPEAVCD3DDevice@@XZ @ 0x180120FA0 (-GetDevice@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CLegacySwapChain::GetDevice(CLegacySwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 41);
}
