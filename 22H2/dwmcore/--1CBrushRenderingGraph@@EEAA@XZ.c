/*
 * XREFs of ??1CBrushRenderingGraph@@EEAA@XZ @ 0x18004A164
 * Callers:
 *     ??_GCBrushRenderingGraph@@EEAAPEAXI@Z @ 0x180049080 (--_GCBrushRenderingGraph@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18001FF20 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x18004A1F0 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CBrushRenderingGraph::~CBrushRenderingGraph(CBrushRenderingGraph *this, unsigned int a2)
{
  bool v2; // zf
  __int64 i; // rdi
  CRenderingTechnique *v5; // rcx
  CCompiledEffectCache *v6; // rcx

  v2 = *((_BYTE *)this + 199) == 0;
  *(_QWORD *)this = &CBrushRenderingGraph::`vftable';
  if ( !v2 )
  {
    v6 = (CCompiledEffectCache *)*((_QWORD *)this + 23);
    if ( v6 )
      CCompiledEffectCache::`scalar deleting destructor'(v6);
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
