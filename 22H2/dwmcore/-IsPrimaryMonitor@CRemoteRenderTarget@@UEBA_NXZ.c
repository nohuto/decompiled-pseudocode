/*
 * XREFs of ?IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ @ 0x18010A5E0
 * Callers:
 *     ?Present@CRemoteRenderTarget@@UEAAJ_N@Z @ 0x18010A240 (-Present@CRemoteRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18010A2F8 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRemoteRenderTarget::IsPrimaryMonitor(CRemoteRenderTarget *this)
{
  return *((float *)this + 16) == 0.0 && *((float *)this + 17) == 0.0;
}
