/*
 * XREFs of ?GetAdapterLuid@CLegacySwapChain@@UEBA?AU_LUID@@XZ @ 0x18010847C
 * Callers:
 *     ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x18011F7E0 (-GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@7EBA?AU_LUID@@XZ @ 0x180120860 (-GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@7EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA?AU_LUID@@XZ @ 0x180120F40 (-GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CLegacySwapChain::GetAdapterLuid(CLegacySwapChain *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 40);
  return (struct _LUID)a2;
}
