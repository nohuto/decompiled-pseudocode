/*
 * XREFs of ?GetBits@CStereoRenderTargetBitmap@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x1802B5EA0
 * Callers:
 *     ?GetBits@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180123900 (-GetBits@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CStereoRenderTargetBitmap::GetBits(
        CRenderTargetBitmap *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  return CRenderTargetBitmap::GetBits(this, a2, a3, a4, a5);
}
