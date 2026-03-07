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
