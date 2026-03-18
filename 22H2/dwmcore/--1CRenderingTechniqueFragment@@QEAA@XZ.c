/*
 * XREFs of ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180029DF8
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180029C00 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ??1CRenderingTechnique@@QEAA@XZ @ 0x180029DAC (--1CRenderingTechnique@@QEAA@XZ.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18002A16C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18002D854 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18003F9D8 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18004008C (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x1800D2364 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x1800D2778 (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800F3FDC (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800F53A0 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ??$?4U?$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F5534 (--$-4U-$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@-$unique_ptr@VCRenderingTechniqu.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18026A930 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18026DF90 (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU12@AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x18003E6CC (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E247C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CRenderingTechniqueFragment::~CRenderingTechniqueFragment(CRenderingTechniqueFragment *this)
{
  void *v2; // rcx
  __int64 v3; // rcx

  v2 = (void *)*((_QWORD *)this + 14);
  if ( v2 )
    operator delete(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(v3, *((_QWORD *)this + 5));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 4),
      (*((_QWORD *)this + 6) - *((_QWORD *)this + 4)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(this);
}
