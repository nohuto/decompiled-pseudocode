/*
 * XREFs of ?LegacyPresentRequired@COverlayContext@@AEBA_NXZ @ 0x18002FC44
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800EBBD8 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::LegacyPresentRequired(COverlayContext *this)
{
  char v1; // r8

  v1 = 0;
  if ( !((*((_QWORD *)this + 915) - *((_QWORD *)this + 914)) / 224LL)
    && *((_BYTE *)this + 11032)
    && !*((_BYTE *)this + 11033)
    && (*((int *)this + 2853) < 2200 || *((_BYTE *)this + 11420) || (*((_DWORD *)this + 15) & 0x40000) == 0) )
  {
    return 1;
  }
  return v1;
}
