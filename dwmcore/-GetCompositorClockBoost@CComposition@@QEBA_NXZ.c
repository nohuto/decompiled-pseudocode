/*
 * XREFs of ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x1800C81D8
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x1800C84D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?SetVBlankDuration@CLegacySwapChain@@UEAA_N_K_N@Z @ 0x180298380 (-SetVBlankDuration@CLegacySwapChain@@UEAA_N_K_N@Z.c)
 *     ?UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ @ 0x1802984E0 (-UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ.c)
 * Callees:
 *     ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x180052758 (-HasActiveInk@CSuperWetInkManager@@QEBA_NXZ.c)
 */

char __fastcall CComposition::GetCompositorClockBoost(CComposition *this)
{
  __int64 v1; // rax
  char v2; // r9

  v1 = *((_QWORD *)this + 27);
  v2 = 0;
  if ( (!*(_BYTE *)(v1 + 581) || *(_BYTE *)(v1 + 582))
    && (*((_DWORD *)this + 307) || CSuperWetInkManager::HasActiveInk(*((CSuperWetInkManager **)this + 32))) )
  {
    return 1;
  }
  return v2;
}
