/*
 * XREFs of ?UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088A84
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x180008F54 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?DirtyProjectedShadowCasters@CVisual@@QEAAXXZ @ 0x1800096F0 (-DirtyProjectedShadowCasters@CVisual@@QEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18000977C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x180089670 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008A3EC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x1800C7150 (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CPreComputeContext::CPreWalkVisual::UpdateTransform(
        CPreComputeContext::CPreWalkVisual *this,
        const struct CVisualTree *a2)
{
  unsigned __int64 v2; // r8
  CVisual *v5; // rbp
  struct _LIST_ENTRY **p_Blink; // rdi
  struct CComposition *v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rbp
  CCompositionLight *v11; // r14
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v15; // rdi
  CProjectedShadowCaster **j; // rbx

  v2 = 0LL;
  if ( g_pComposition )
    v2 = *((_QWORD *)g_pComposition + 62);
  CPreComputeContext::CPreWalkVisual::CalcTransform(this, a2, v2);
  if ( *((_WORD *)this + 4) )
  {
    v5 = *(CVisual **)this;
    p_Blink = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
    {
      p_Blink = (struct _LIST_ENTRY **)((char *)v5 + 336);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v5);
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
        {
          if ( (const struct CVisualTree *)i[2].Flink == a2 )
          {
            p_Blink = &i[-23].Blink;
            break;
          }
        }
      }
    }
    if ( p_Blink[31] != p_Blink[33][1].Flink[31].Flink )
      goto LABEL_7;
    if ( *((_BYTE *)this + 8) )
    {
      v7 = g_pComposition;
      v8 = *((_DWORD *)g_pComposition + 268);
      if ( v8 )
      {
        v9 = 0LL;
        v10 = v8;
        while ( 1 )
        {
          v11 = *(CCompositionLight **)(v9 + *((_QWORD *)v7 + 131));
          if ( (*(__int64 (__fastcall **)(CCompositionLight *))(*(_QWORD *)v11 + 200LL))(v11) == *(_QWORD *)this )
            CCompositionLight::IssueLightChangedNotification(v11);
          v9 += 8LL;
          if ( !--v10 )
            break;
          v7 = g_pComposition;
        }
      }
    }
    if ( *((_BYTE *)this + 9) )
    {
      CVisual::DirtyProjectedShadowCasters(*(CVisual **)this);
LABEL_7:
      if ( *((_BYTE *)this + 9) )
      {
        ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(*(_QWORD *)this);
        v15 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
        for ( j = *(CProjectedShadowCaster ***)ProjectedShadowCasters; j != v15; ++j )
          CProjectedShadowCaster::UpdateVisualProperty(*j, a2);
      }
    }
  }
}
