/*
 * XREFs of ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@UEBA_NXZ @ 0x1802495D8
 * Callers:
 *     ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F6CF0 (-CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x1800F7490 (-CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::CheckSupportsConvertPresentToMPO(CLegacySwapChain *this)
{
  return *((_DWORD *)this - 41) >= 2;
}
