/*
 * XREFs of ?GetVidPnTargetId@CLegacySwapChain@@UEBAIXZ @ 0x180103FA0
 * Callers:
 *     ?GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ @ 0x18011B830 (-GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ.c)
 *     ?GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ @ 0x18011C8B0 (-GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ.c)
 *     ?GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ @ 0x18011CF70 (-GetVidPnTargetId@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetVidPnTargetId(CLegacySwapChain *this)
{
  (*(void (__fastcall **)(CLegacySwapChain *))(*(_QWORD *)this + 256LL))(this);
  return *((unsigned int *)this + 31);
}
