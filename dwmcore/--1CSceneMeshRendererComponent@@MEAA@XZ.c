/*
 * XREFs of ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x18024BCA8
 * Callers:
 *     ??_ECSceneMeshRendererComponent@@MEAAPEAXI@Z @ 0x18024BD70 (--_ECSceneMeshRendererComponent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x180233024 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCSceneMeshRendererComponent@@@Z @ 0x18024CB6C (-erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpectreMaterial@@.c)
 */

void __fastcall CSceneMeshRendererComponent::~CSceneMeshRendererComponent(CSceneMeshRendererComponent *this)
{
  __int64 v2; // rcx
  CSceneMeshRendererComponent *v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CSceneMeshRendererComponent::`vftable';
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    v3 = this;
    std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::erase(
      v2 + 72,
      &v3);
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)this + 96,
    (__int64)this + 96,
    *(_QWORD *)(*((_QWORD *)this + 12) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 12), 0x28uLL);
  CSceneComponent::~CSceneComponent(this);
}
