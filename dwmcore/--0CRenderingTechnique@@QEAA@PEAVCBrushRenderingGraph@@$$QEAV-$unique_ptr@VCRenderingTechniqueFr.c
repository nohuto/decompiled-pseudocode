/*
 * XREFs of ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x18002A2A8
 * Callers:
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18002A1E8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 * Callees:
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18002ADC8 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 */

CRenderingTechnique *__fastcall CRenderingTechnique::CRenderingTechnique(
        CRenderingTechnique *this,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rax

  *(_QWORD *)this = a2;
  v4 = *a3;
  *a3 = 0LL;
  *((_QWORD *)this + 1) = v4;
  *((_QWORD *)this + 2) = &CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::`vftable';
  *((_QWORD *)this + 3) = this;
  *((_QWORD *)this + 4) = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 56;
  *((_QWORD *)this + 6) = (char *)this + 72;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)((char *)this + 260) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_BYTE *)this + 280) = 0;
  CRenderingTechnique::CollectStateFromAllFragments(this);
  return this;
}
