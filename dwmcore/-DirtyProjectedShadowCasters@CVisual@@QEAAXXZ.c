/*
 * XREFs of ?DirtyProjectedShadowCasters@CVisual@@QEAAXXZ @ 0x1800096F0
 * Callers:
 *     ?UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088A84 (-UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x18000973C (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18000977C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 */

void __fastcall CVisual::DirtyProjectedShadowCasters(CVisual *this)
{
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v2; // rdi
  CProjectedShadowCaster **i; // rbx

  if ( (**((_DWORD **)this + 29) & 0x40000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
    v2 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( i = *(CProjectedShadowCaster ***)ProjectedShadowCasters; i != v2; ++i )
      CProjectedShadowCaster::RequestRedraw(*i);
  }
}
