/*
 * XREFs of ??1CBrushRenderingGraph@@MEAA@XZ @ 0x180029C04
 * Callers:
 *     ??_GCBrushRenderingGraph@@MEAAPEAXI@Z @ 0x180029840 (--_GCBrushRenderingGraph@@MEAAPEAXI@Z.c)
 *     ??1CExternalEffectGraph@@MEAA@XZ @ 0x1800D12A4 (--1CExternalEffectGraph@@MEAA@XZ.c)
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x18001BE58 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180029C90 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CBrushRenderingGraph::~CBrushRenderingGraph(CBrushRenderingGraph *this, unsigned int a2)
{
  bool v2; // zf
  __int64 i; // rdi
  CRenderingTechnique *v5; // rcx
  CShaderCache *v6; // rcx

  v2 = *((_BYTE *)this + 199) == 0;
  *(_QWORD *)this = &CBrushRenderingGraph::`vftable';
  if ( !v2 )
  {
    v6 = (CShaderCache *)*((_QWORD *)this + 23);
    if ( v6 )
      CShaderCache::`scalar deleting destructor'(v6);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 42); i = (unsigned int)(i + 1) )
  {
    v5 = *(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8 * i);
    if ( v5 )
      CRenderingTechnique::`scalar deleting destructor'(v5, a2);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 144);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 16);
}
