/*
 * XREFs of ?CheckSupportsConvertPresentToMPO@COverlaySwapChainBase@@UEBA_NXZ @ 0x180285BF0
 * Callers:
 *     ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NXZ @ 0x18011B5D0 (-CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NXZ.c)
 *     ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA_NXZ @ 0x18011CD30 (-CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlaySwapChainBase::CheckSupportsConvertPresentToMPO(COverlaySwapChainBase *this)
{
  return *((_DWORD *)this + 52) >= 2;
}
