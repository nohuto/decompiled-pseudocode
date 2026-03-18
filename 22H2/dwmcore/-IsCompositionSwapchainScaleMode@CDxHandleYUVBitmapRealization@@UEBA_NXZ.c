/*
 * XREFs of ?IsCompositionSwapchainScaleMode@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180108E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsCompositionSwapchainScaleMode(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 32) & 0x4000) != 0;
}
