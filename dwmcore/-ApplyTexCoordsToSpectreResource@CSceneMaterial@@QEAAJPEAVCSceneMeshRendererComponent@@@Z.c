/*
 * XREFs of ?ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z @ 0x18024C7CC
 * Callers:
 *     ?OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x18024C8D0 (-OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x180233024 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??$_Find_lower_bound@W4Enum@SceneMaterialInputType@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@AEBW4Enum@SceneMaterialInputType@@@Z @ 0x18024BAFC (--$_Find_lower_bound@W4Enum@SceneMaterialInputType@@@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMateria.c)
 *     ??$?0V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x18024C420 (--$-0V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std.c)
 *     ??$_Try_emplace@AEBQEAVCSceneMeshRendererComponent@@$$V@?$map@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCSceneMeshRendererComponent@@@Z @ 0x18024C590 (--$_Try_emplace@AEBQEAVCSceneMeshRendererComponent@@$$V@-$map@PEAVCSceneMeshRendererComponent@@V.c)
 */

__int64 __fastcall CSceneMaterial::ApplyTexCoordsToSpectreResource(
        CSceneMaterial *this,
        struct CSceneMeshRendererComponent *a2,
        char a3)
{
  unsigned int i; // edi
  unsigned int *v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  void *v10[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v13[16]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h]
  struct CSceneMeshRendererComponent *v15; // [rsp+98h] [rbp+28h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+30h] BYREF

  v15 = a2;
  std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>(
    (__int64 *)v10,
    (_QWORD *)a2 + 12,
    a3);
  for ( i = 0; i < 5; ++i )
  {
    v16 = i;
    std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Find_lower_bound<enum SceneMaterialInputType::Enum>(
      (__int64 *)v10,
      (__int64)v13,
      (int *)&v16);
    v5 = (unsigned int *)v14;
    if ( *(_BYTE *)(v14 + 25) || (signed int)i < *(_DWORD *)(v14 + 28) )
      v5 = (unsigned int *)v10[0];
    v6 = (__int64 *)((char *)this + 72);
    if ( v5 == v10[0] )
    {
      v7 = std::map<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>::_Try_emplace<CSceneMeshRendererComponent * const &,>(
             v6,
             (__int64)v11,
             (unsigned __int64 *)&v15);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v7 + 40LL) + 88LL))(
        *(_QWORD *)(*(_QWORD *)v7 + 40LL),
        i,
        0LL);
    }
    else
    {
      v8 = std::map<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>::_Try_emplace<CSceneMeshRendererComponent * const &,>(
             v6,
             (__int64)v12,
             (unsigned __int64 *)&v15);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v8 + 40LL) + 88LL))(
        *(_QWORD *)(*(_QWORD *)v8 + 40LL),
        i,
        v5[8]);
    }
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)v10,
    (__int64)v10,
    *((_QWORD *)v10[0] + 1));
  std::_Deallocate<16,0>(v10[0], 0x28uLL);
  return 0LL;
}
