/*
 * XREFs of ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x1800D1AA0
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18003F6F4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x1800D18B4 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x1800D1CC8 (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 * Callees:
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18003FEC8 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x18004006C (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 */

void __fastcall CRenderingTechniqueFragment::AddIntermediateInput(CRenderingTechniqueFragment *this, int a2)
{
  __int64 *v2; // rdx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  CRenderingTechniqueFragment *v4; // [rsp+28h] [rbp-10h] BYREF

  v4 = 0LL;
  LODWORD(v3) = a2;
  v2 = (__int64 *)*((_QWORD *)this + 5);
  BYTE4(v3) = 1;
  if ( v2 == *((__int64 **)this + 6) )
  {
    std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
      (__int64 *)this + 4,
      v2,
      &v3);
  }
  else
  {
    *v2 = v3;
    v2[1] = (__int64)v4;
    *((_QWORD *)this + 5) += 16LL;
  }
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v4);
}
