/*
 * XREFs of ?GetPixelFormatInfo@CDDisplayRenderTarget@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x180118430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetPixelFormatInfo(__int64 a1)
{
  return CDDisplayRenderTarget::GetPixelFormatInfo(a1 - *(int *)(a1 - 4));
}
