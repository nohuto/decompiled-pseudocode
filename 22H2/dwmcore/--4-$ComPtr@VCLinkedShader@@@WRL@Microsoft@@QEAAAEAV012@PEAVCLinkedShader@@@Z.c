/*
 * XREFs of ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x180045614
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180045650 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801BB420 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 */

CDrawListEntry **__fastcall Microsoft::WRL::ComPtr<CLinkedShader>::operator=(
        CDrawListEntry **a1,
        volatile signed __int32 *a2)
{
  CDrawListEntry *v3; // rcx

  v3 = *a1;
  if ( v3 != (CDrawListEntry *)a2 )
  {
    if ( a2 )
    {
      _InterlockedIncrement(a2 + 2);
      v3 = *a1;
    }
    *a1 = (CDrawListEntry *)a2;
    if ( v3 )
      CDrawListEntry::Release(v3);
  }
  return a1;
}
