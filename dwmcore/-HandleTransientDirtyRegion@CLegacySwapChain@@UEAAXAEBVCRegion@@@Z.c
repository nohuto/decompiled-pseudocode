/*
 * XREFs of ?HandleTransientDirtyRegion@CLegacySwapChain@@UEAAXAEBVCRegion@@@Z @ 0x180297A74
 * Callers:
 *     ?HandleTransientDirtyRegion@CLegacySwapChain@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x18011B850 (-HandleTransientDirtyRegion@CLegacySwapChain@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 *     ?HandleTransientDirtyRegion@CLegacySwapChain@@$4PPPPPPPM@7EAAXAEBVCRegion@@@Z @ 0x18011C8D0 (-HandleTransientDirtyRegion@CLegacySwapChain@@$4PPPPPPPM@7EAAXAEBVCRegion@@@Z.c)
 *     ?HandleTransientDirtyRegion@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAXAEBVCRegion@@@Z @ 0x18011CF90 (-HandleTransientDirtyRegion@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::HandleTransientDirtyRegion(
        CLegacySwapChain *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  CSwapChainBuffer::AddTransientRegion(
    *(CSwapChainBuffer **)(*((_QWORD *)this - 23) + 8LL * *((unsigned int *)this - 40)),
    a2);
}
