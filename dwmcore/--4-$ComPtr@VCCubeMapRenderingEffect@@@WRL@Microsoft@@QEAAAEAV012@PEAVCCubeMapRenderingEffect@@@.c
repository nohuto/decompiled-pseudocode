/*
 * XREFs of ??4?$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCubeMapRenderingEffect@@@Z @ 0x180221D7C
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180221EB0 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1802228EC (-InternalRelease@-$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CCubeMapRenderingEffect>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<CCubeMapRenderingEffect>::InternalRelease(&v5);
  }
  return a1;
}
