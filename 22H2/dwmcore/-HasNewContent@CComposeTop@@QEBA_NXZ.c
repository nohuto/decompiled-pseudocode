/*
 * XREFs of ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1800220D0
 * Callers:
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18002200C (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008BA8C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18010A2F8 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E8994 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801E8DE4 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801F1064 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801F9888 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800895E0 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800DFC5C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 */

char __fastcall CComposeTop::HasNewContent(CComposeTop *this)
{
  char v1; // bl
  unsigned __int64 CurrentFrameId; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax

  v1 = 0;
  CurrentFrameId = GetCurrentFrameId();
  if ( *v3 == CurrentFrameId )
    return 1;
  v5 = v3[2];
  v3[2] = 0LL;
  if ( v5 )
    std::default_delete<CShape>::operator()(v4, v5);
  return v1;
}
