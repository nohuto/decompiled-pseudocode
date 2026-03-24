/*
 * XREFs of ?GetAdapterLuid@CLegacySwapChain@@UEBA?AU_LUID@@XZ @ 0x1800E32E0
 * Callers:
 *     ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x1800F6D20 (-GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BI@EBA?AU_LUID@@XZ @ 0x1800F71C0 (-GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BI@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA?AU_LUID@@XZ @ 0x1800F74E0 (-GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CLegacySwapChain::GetAdapterLuid(CLegacySwapChain *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 20);
  return (struct _LUID)a2;
}
