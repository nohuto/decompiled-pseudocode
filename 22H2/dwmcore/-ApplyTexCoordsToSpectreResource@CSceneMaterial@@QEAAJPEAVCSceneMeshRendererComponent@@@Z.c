/*
 * XREFs of ?ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z @ 0x1801EA4DC
 * Callers:
 *     ?OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801EA670 (-OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801CD68C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??$_Lbound@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x1801E9318 (--$_Lbound@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@.c)
 *     ??$?0V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x1801E9D94 (--$-0V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEAU?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@1@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1801EA0DC (--$_Insert_hint@AEAU-$pair@QEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpectreMaterial@@Uerr.c)
 */

__int64 __fastcall CSceneMaterial::ApplyTexCoordsToSpectreResource(
        CSceneMaterial *this,
        struct CSceneMeshRendererComponent *a2,
        char a3)
{
  unsigned int v4; // edi
  __int64 *v5; // r14
  _DWORD *v6; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  struct CSceneMeshRendererComponent *v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  struct CSceneMeshRendererComponent *v17; // rcx
  void *v19[2]; // [rsp+30h] [rbp-10h] BYREF
  struct CSceneMeshRendererComponent *v20; // [rsp+78h] [rbp+38h] BYREF
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  __int64 v22; // [rsp+88h] [rbp+48h] BYREF

  v20 = a2;
  std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>(
    (__int64 *)v19,
    (_QWORD *)a2 + 11,
    a3);
  v4 = 0;
  v5 = (__int64 *)((char *)this + 64);
  do
  {
    v6 = v19[0];
    v7 = (__int64 *)*((_QWORD *)v19[0] + 1);
    if ( *((_BYTE *)v7 + 25) )
      goto LABEL_9;
    do
    {
      if ( *((_DWORD *)v7 + 7) >= (signed int)v4 )
      {
        v6 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
    if ( v6 == v19[0] || (signed int)v4 < v6[7] )
LABEL_9:
      v6 = v19[0];
    if ( v6 == v19[0] )
    {
      v14 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
              v5,
              &v20);
      v15 = *v5;
      v10 = (__int64)v14;
      if ( v14 == (__int64 *)*v5 || (unsigned __int64)v20 < v14[4] )
      {
        v16 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
        v17 = v20;
        *(_QWORD *)(v16 + 40) = 0LL;
        *(_QWORD *)(v16 + 32) = v17;
        *(_QWORD *)v16 = v15;
        *(_QWORD *)(v16 + 8) = v15;
        *(_QWORD *)(v16 + 16) = v15;
        *(_WORD *)(v16 + 24) = 0;
        std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::_Insert_hint<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>> &,std::_Tree_node<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>,void *> *>(
          v5,
          &v22,
          (__int64 *)v10,
          (unsigned __int64 *)(v16 + 32),
          v16);
        v10 = v22;
      }
      v13 = 0LL;
    }
    else
    {
      v8 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
             v5,
             &v20);
      v9 = *v5;
      v10 = (__int64)v8;
      if ( v8 == (__int64 *)*v5 || (unsigned __int64)v20 < v8[4] )
      {
        v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
        v12 = v20;
        *(_QWORD *)(v11 + 40) = 0LL;
        *(_QWORD *)(v11 + 32) = v12;
        *(_QWORD *)v11 = v9;
        *(_QWORD *)(v11 + 8) = v9;
        *(_QWORD *)(v11 + 16) = v9;
        *(_WORD *)(v11 + 24) = 0;
        std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::_Insert_hint<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>> &,std::_Tree_node<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>,void *> *>(
          v5,
          &v21,
          (__int64 *)v10,
          (unsigned __int64 *)(v11 + 32),
          v11);
        v10 = v21;
      }
      v13 = (unsigned int)v6[8];
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v10 + 40) + 88LL))(*(_QWORD *)(v10 + 40), v4++, v13);
  }
  while ( v4 < 5 );
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)v19,
    (__int64)v19,
    *((_QWORD *)v19[0] + 1));
  std::_Deallocate<16,0>(v19[0], 0x28uLL);
  return 0LL;
}
