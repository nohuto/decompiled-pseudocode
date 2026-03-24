/*
 * XREFs of ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18020ADBC
 * Callers:
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1801EB6B0 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1801EBBC4 (-SetComponents@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneComponent@@$0-0@gsl@@@Z.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x18020AE74 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@@2@@Z @ 0x180167484 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std.c)
 *     ??$_Lbound@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x1801E9318 (--$_Lbound@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801E9AD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SpatialCompositionLabel@@@details@wil@@QE.c)
 */

void __fastcall CSceneComponent::DehydrateSpectreResources(CSceneComponent *this, struct CSceneNode *a2)
{
  __int64 **v2; // r14
  __int64 *v4; // rax
  __int64 v5; // r9
  __int64 *v6; // rsi
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, __int64); // rbx
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r8
  struct CSceneNode *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (__int64 **)((char *)this + 56);
  v4 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
         (__int64 *)this + 7,
         &v12);
  v6 = v4;
  if ( v4 == *v2 || (unsigned __int64)a2 < v4[4] )
    v6 = *v2;
  if ( v6 != *v2 )
  {
    v7 = *((_QWORD *)a2 + 16);
    v8 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 56LL);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 200LL))(v5);
    v8(v7, v9);
    v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDevice const * const,CGradientSource::Cache>>>::_Extract(
            v2,
            (__int64)v6);
    std::_Deallocate<16,0>(v10, 0x30uLL);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SpatialCompositionLabel>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SpatialCompositionLabel>::GetImpl'::`2'::impl,
      0,
      v11);
  }
}
