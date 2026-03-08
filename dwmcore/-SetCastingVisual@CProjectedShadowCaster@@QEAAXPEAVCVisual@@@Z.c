/*
 * XREFs of ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180008E5C
 * Callers:
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x180007550 (--1CProjectedShadowCaster@@MEAA@XZ.c)
 *     ?ProcessSetCastingVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETCASTINGVISUAL@@@Z @ 0x180009B6C (-ProcessSetCastingVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTE.c)
 * Callees:
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180004CBC (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180008DAC (-AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x18000967C (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18000977C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800097DC (-clear@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 *     ?RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18000A2C8 (-RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

void __fastcall CProjectedShadowCaster::SetCastingVisual(CProjectedShadowScene ***this, CComposition **a2)
{
  CProjectedShadowScene **v4; // rbp
  CProjectedShadowScene **i; // rdi
  CProjectedShadowScene **v6; // rdi
  __int64 ProjectedShadowCasters; // r14
  _BYTE *v8; // r8
  CProjectedShadowCaster **v9; // rcx
  _BYTE *v10; // rdx

  if ( a2 != this[8] )
  {
    if ( this[8] )
    {
      CProjectedShadowCaster::InvalidateMaskContent((CProjectedShadowCaster *)this);
      v4 = this[13];
      for ( i = this[12]; i != v4; ++i )
        CProjectedShadowScene::DiscardCachesForCaster(*i, (struct CProjectedShadowCaster *)this);
      std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear(this + 10);
      v6 = this[8];
      if ( (*(_DWORD *)v6[29] & 0x40000) != 0 )
      {
        ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this[8]);
        v8 = *(_BYTE **)(ProjectedShadowCasters + 8);
        v9 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
        if ( *(_BYTE **)ProjectedShadowCasters != v8 )
        {
          while ( 1 )
          {
            v10 = v9 + 1;
            if ( *v9 == (CProjectedShadowCaster *)this )
              break;
            ++v9;
            if ( v10 == v8 )
              goto LABEL_3;
          }
          memmove_0(v9, v10, v8 - v10);
          *(_QWORD *)(ProjectedShadowCasters + 8) -= 8LL;
          if ( ((*(_QWORD *)(ProjectedShadowCasters + 8) - *(_QWORD *)ProjectedShadowCasters) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
            CComposition::RemoveProjectedShadowCasterVisual(v6[2], (struct CVisual *)v6);
        }
      }
    }
LABEL_3:
    this[8] = a2;
    if ( a2 )
    {
      CVisual::AddProjectedShadowCaster(a2, (struct CProjectedShadowCaster *)this);
      CProjectedShadowCaster::InvalidateMaskContent((CProjectedShadowCaster *)this);
    }
  }
}
