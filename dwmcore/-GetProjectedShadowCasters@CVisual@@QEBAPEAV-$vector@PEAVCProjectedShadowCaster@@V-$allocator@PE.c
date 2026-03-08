/*
 * XREFs of ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18000977C
 * Callers:
 *     ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180008DAC (-AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180008E5C (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 *     ?DirtyProjectedShadowCasters@CVisual@@QEAAXXZ @ 0x1800096F0 (-DirtyProjectedShadowCasters@CVisual@@QEAAXXZ.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18004A400 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088A84 (-UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18009A61C (--1CVisual@@MEAA@XZ.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x18009BAB8 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800DC08C (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800E4358 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetProjectedShadowCasters(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  _BYTE *v3; // r9
  __int64 v4; // rcx
  unsigned int i; // eax

  v1 = *(_DWORD **)(a1 + 232);
  if ( (*v1 & 0x40000) == 0 )
    return 0LL;
  v2 = (unsigned int)v1[1];
  v3 = v1 + 2;
  v4 = 0LL;
  for ( i = 0; i < (unsigned int)v2; ++v3 )
  {
    if ( *v3 == 14 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v2 )
    v4 = (__int64)v1 + 8LL * i - (((_BYTE)v2 + 15) & 7) + v2 + 15;
  return *(_QWORD *)v4;
}
