/*
 * XREFs of ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180029C90
 * Callers:
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x180029C04 (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18002A1E8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 * Callees:
 *     ??1CRenderingTechnique@@QEAA@XZ @ 0x180029CBC (--1CRenderingTechnique@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CRenderingTechnique *__fastcall CRenderingTechnique::`scalar deleting destructor'(CRenderingTechnique *this)
{
  CRenderingTechnique::~CRenderingTechnique(this);
  operator delete(this, 0x120uLL);
  return this;
}
