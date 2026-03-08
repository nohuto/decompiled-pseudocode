/*
 * XREFs of ?GetBits@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x18011F750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStereoRenderTargetBitmap::GetBits(
        __int64 a1,
        const struct tagRECT *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  return CStereoRenderTargetBitmap::GetBits((CStereoRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 168), a2, a3, a4, a5);
}
