/*
 * XREFs of ?GetD2DBitmap@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802ACDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B290C (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::GetD2DBitmap(
        CColorKeyBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  int CachedBitmap; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  CachedBitmap = CD2DBitmapCache::GetCachedBitmap((CColorKeyBitmapRealization *)((char *)this - 152), a2, a3, a4);
  v6 = CachedBitmap;
  if ( CachedBitmap < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, CachedBitmap, 0x9Du, 0LL);
  return v6;
}
