/*
 * XREFs of ?IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ @ 0x1800E6160
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::IsPrimaryMonitor(CLegacyRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( *((float *)this + 4507) == 0.0 && *((float *)this + 4508) == 0.0 )
    return *((_BYTE *)this + 18553) != 0;
  return result;
}
