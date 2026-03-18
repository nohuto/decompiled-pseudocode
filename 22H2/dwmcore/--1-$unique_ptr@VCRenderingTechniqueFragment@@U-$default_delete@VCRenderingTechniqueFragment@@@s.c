/*
 * XREFs of ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18004008C
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU12@AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x18003E6CC (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x18003F91C (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18003F9D8 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x1800D2364 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x1800D2550 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800F53A0 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 * Callees:
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180029DF8 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(
        CRenderingTechniqueFragment **a1)
{
  CRenderingTechniqueFragment *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(*a1);
    operator delete(v1, 0x80uLL);
  }
}
