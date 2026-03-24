/*
 * XREFs of ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x18004A1F0
 * Callers:
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x18004A164 (--1CBrushRenderingGraph@@EEAA@XZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18004B3B8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18004A230 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAA@XZ @ 0x18004A354 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAA@XZ.c)
 */

CRenderingTechnique *__fastcall CRenderingTechnique::`scalar deleting destructor'(CRenderingTechnique *this)
{
  unsigned int v2; // edx
  CRenderingTechniqueFragment *v3; // rcx

  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>((char *)this + 16);
  v3 = (CRenderingTechniqueFragment *)*((_QWORD *)this + 1);
  if ( v3 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v3, v2);
  operator delete(this);
  return this;
}
