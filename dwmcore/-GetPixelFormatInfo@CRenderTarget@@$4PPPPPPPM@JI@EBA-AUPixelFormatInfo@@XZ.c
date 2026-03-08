/*
 * XREFs of ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUPixelFormatInfo@@XZ @ 0x180119590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CRenderTarget::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 152, a2);
}
