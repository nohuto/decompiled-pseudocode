/*
 * XREFs of ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GPA@EBA?AUPixelFormatInfo@@XZ @ 0x18011A390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CRenderTarget::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 1776, a2);
}
