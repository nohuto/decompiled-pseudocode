/*
 * XREFs of ?AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18021F68C
 * Callers:
 *     ?AddOcclusionInformation@CYCbCrSurface@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011BE80 (-AddOcclusionInformation@CYCbCrSurface@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18000CEE8 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 */

__int64 __fastcall CYCbCrSurface::AddOcclusionInformation(
        CYCbCrSurface *this,
        struct COcclusionContext *a2,
        struct D2D_SIZE_F *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = *((_QWORD *)this - 7);
  result = 0LL;
  if ( v3 )
  {
    if ( *((_QWORD *)this - 6) )
      return CCompositionSurfaceBitmap::AddOcclusionInformation((CCompositionSurfaceBitmap *)(v3 + 224), a2, a3);
  }
  return result;
}
