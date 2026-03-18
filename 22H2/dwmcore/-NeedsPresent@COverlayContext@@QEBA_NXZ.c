/*
 * XREFs of ?NeedsPresent@COverlayContext@@QEBA_NXZ @ 0x1800E2C24
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008BA8C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800C997C (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801E85AC (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E8994 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x18013159A (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 */

bool __fastcall COverlayContext::NeedsPresent(COverlayContext *this)
{
  __int64 v1; // rax
  CDirectFlipInfo *v2; // rcx

  if ( *((_BYTE *)this + 11310) )
    return 0;
  if ( *((_BYTE *)this + 11024) != *((_BYTE *)this + 11296) )
    return 1;
  if ( *((_BYTE *)this + 11025) != *((_BYTE *)this + 11305) )
    return 1;
  v1 = *((_QWORD *)this + 913);
  if ( 0x6DB6DB6DB6DB6DB7LL * ((*((_QWORD *)this + 914) - v1) >> 5) != *((_DWORD *)this + 2820) )
    return 1;
  while ( v1 != *((_QWORD *)this + 914) )
  {
    if ( *(_BYTE *)(v1 + 184) )
      return 1;
    v1 += 224LL;
  }
  v2 = (CDirectFlipInfo *)*((_QWORD *)this + 1396);
  return v2 && CDirectFlipInfo::PresentNeeded(v2);
}
