/*
 * XREFs of ??$?4VCCommonRenderingEffect@@@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCommonRenderingEffect@@@Z @ 0x1800B58C0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800102A0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B4C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CRenderingEffect>::operator=<CCommonRenderingEffect>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v5);
  v5 = *a1;
  *a1 = a2;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v5);
  return a1;
}
