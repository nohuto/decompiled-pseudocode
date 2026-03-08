/*
 * XREFs of ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800E4358
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051B00 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088C20 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x180089670 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x1800E4264 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 * Callees:
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x18000967C (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18000977C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008A3EC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall CVisual::OnClipChanged(CVisual *this)
{
  struct _LIST_ENTRY *TreeDataListHead; // rax
  __int64 v2; // r10
  struct _LIST_ENTRY *i; // rdx
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v5; // rdi
  CProjectedShadowCaster **j; // rbx

  *((_BYTE *)this + 498) = 1;
  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  if ( TreeDataListHead )
  {
    for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      BYTE2(i[-13].Blink) = 1;
  }
  if ( (**(_DWORD **)(v2 + 232) & 0x40000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(v2);
    v5 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( j = *(CProjectedShadowCaster ***)ProjectedShadowCasters; j != v5; ++j )
      CProjectedShadowCaster::InvalidateMaskContent(*j);
  }
}
