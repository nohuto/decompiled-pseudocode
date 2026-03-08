/*
 * XREFs of ?GetDevice@CLegacySwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x180107960
 * Callers:
 *     ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011B6B0 (-GetDevice@CLegacySwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@7EBAPEAVCD3DDevice@@XZ @ 0x18011C730 (-GetDevice@CLegacySwapChain@@$4PPPPPPPM@7EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAPEAVCD3DDevice@@XZ @ 0x18011CDF0 (-GetDevice@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CLegacySwapChain::GetDevice(CLegacySwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 41);
}
