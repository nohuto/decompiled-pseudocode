/*
 * XREFs of ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18002D854
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18002A16C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18003F9D8 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18026A930 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180029DF8 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18002A2D8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x18002D898 (-NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1802B9F18 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CheckFragmentSize(
        struct CBrushRenderingGraph **this,
        struct CRenderingTechniqueFragment *a2)
{
  struct CBrushRenderingGraph *v2; // r14
  unsigned int v5; // edi
  struct CBrushRenderingGraph *v7; // r8
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // [rsp+50h] [rbp+8h] BYREF
  CRenderingTechniqueFragment *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = *this;
  v5 = 0;
  while ( CRenderingTechniqueFragment::NeedsToBeBrokenUp(a2, *this) )
  {
    v7 = *this;
    v10 = *((_DWORD *)v2 + 42);
    CRenderingTechniqueFragment::RemoveLargestInputFragment(a2, &v11, v7);
    v8 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v11, &v10);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x241u, 0LL);
      if ( v11 )
      {
        CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v11);
        operator delete(v11, 0x80uLL);
      }
      return v5;
    }
    if ( v11 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v11);
      operator delete(v11, 0x80uLL);
    }
  }
  return v5;
}
