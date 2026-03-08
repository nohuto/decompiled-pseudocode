/*
 * XREFs of ?LegacyPresentRequired@COverlayContext@@AEBA_NXZ @ 0x1800C92B0
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800C9168 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@I_N@Z @ 0x1801DB0B8 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@I_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::LegacyPresentRequired(COverlayContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 914) == *((_QWORD *)this + 913)
    && *((_BYTE *)this + 11024)
    && !*((_BYTE *)this + 11025)
    && (*((int *)this + 2821) < 2200 || *((_BYTE *)this + 11300) || (*((_DWORD *)this + 14) & 0x40000) == 0) )
  {
    return 1;
  }
  return v1;
}
