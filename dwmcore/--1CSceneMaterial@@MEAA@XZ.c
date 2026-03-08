/*
 * XREFs of ??1CSceneMaterial@@MEAA@XZ @ 0x18024C6F8
 * Callers:
 *     ??1?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ @ 0x1801BE9E4 (--1-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ.c)
 *     ??_GCSceneMaterial@@MEAAPEAXI@Z @ 0x18024C780 (--_GCSceneMaterial@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1801B960C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAVCResource@@V-$com_ptr_t@UISpectreTexture@@.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BA31C (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CSceneMaterial::~CSceneMaterial(CSceneMaterial *this)
{
  *(_QWORD *)this = &CSceneMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *((_QWORD *)this + 8) = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  CSceneResourceManager::UnregisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
    (struct ISceneNotificationListener *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  std::_Tree_val<std::_Tree_simple_types<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>,void *>>>(
    (__int64)this + 72,
    (__int64)this + 72,
    *(_QWORD *)(*((_QWORD *)this + 9) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 9), 0x30uLL);
  CResource::~CResource(this);
}
