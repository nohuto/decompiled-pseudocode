void __fastcall CInteractionTrackerBindingManager::GetConnectedTrackersAndUpdatedAxes(
        int a1,
        int a2,
        char a3,
        _QWORD *a4)
{
  char v7; // di
  int v8; // r15d
  int v9; // r12d
  SIZE_T size_of; // rax
  _QWORD *v11; // rax
  __int64 *v12; // rax
  SIZE_T v13; // rax
  _QWORD *v14; // rax
  __int64 *v15; // rax
  SIZE_T v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rax
  SIZE_T v19; // rax
  _QWORD *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h] BYREF
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 **v25; // [rsp+48h] [rbp-28h] BYREF
  __int64 v26; // [rsp+50h] [rbp-20h]
  void *v27[3]; // [rsp+58h] [rbp-18h] BYREF
  int v28; // [rsp+B0h] [rbp+40h] BYREF

  v27[1] = 0LL;
  v7 = a3 & 1;
  v8 = a3 & 2;
  v9 = a3 & 4;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v11 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v11 = v11;
  v11[1] = v11;
  v11[2] = v11;
  *((_WORD *)v11 + 12) = 257;
  v27[0] = v11;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7, (unsigned int)v27, 0LL);
  v12 = *(__int64 **)v27[0];
  v22 = *(__int64 **)v27[0];
  while ( !*((_BYTE *)v12 + 25) )
  {
    v23 = v12[4];
    v28 = 0;
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::emplace<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags>(
      a4,
      (__int64)&v25,
      (unsigned __int8 *)&v23,
      &v28);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v22);
    v12 = v22;
  }
  if ( v7 )
  {
    v26 = 0LL;
    v13 = std::_Get_size_of_n<40>(1uLL);
    v14 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
    *v14 = v14;
    v14[1] = v14;
    v14[2] = v14;
    *((_WORD *)v14 + 12) = 257;
    v25 = (__int64 **)v14;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 1, (unsigned int)&v25, 0LL);
    v15 = *v25;
    v22 = *v25;
    while ( !*((_BYTE *)v15 + 25) )
    {
      v23 = v15[4];
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
        a4,
        &v24,
        (const unsigned __int8 *)&v23);
      *(_DWORD *)(v24 + 24) |= 1u;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v22);
      v15 = v22;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v25,
      (__int64)&v25,
      (__int64)v25[1]);
    std::_Deallocate<16,0>(v25, 0x28uLL);
  }
  if ( v8 )
  {
    v26 = 0LL;
    v16 = std::_Get_size_of_n<40>(1uLL);
    v17 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v16);
    *v17 = v17;
    v17[1] = v17;
    v17[2] = v17;
    *((_WORD *)v17 + 12) = 257;
    v25 = (__int64 **)v17;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 2, (unsigned int)&v25, 0LL);
    v18 = *v25;
    v22 = *v25;
    while ( !*((_BYTE *)v18 + 25) )
    {
      v24 = v18[4];
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
        a4,
        &v23,
        (const unsigned __int8 *)&v24);
      *(_DWORD *)(v23 + 24) |= 2u;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v22);
      v18 = v22;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v25,
      (__int64)&v25,
      (__int64)v25[1]);
    std::_Deallocate<16,0>(v25, 0x28uLL);
  }
  if ( v9 )
  {
    v26 = 0LL;
    v19 = std::_Get_size_of_n<40>(1uLL);
    v20 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v19);
    *v20 = v20;
    v20[1] = v20;
    v20[2] = v20;
    *((_WORD *)v20 + 12) = 257;
    v25 = (__int64 **)v20;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 4, (unsigned int)&v25, 0LL);
    v21 = *v25;
    v22 = *v25;
    while ( !*((_BYTE *)v21 + 25) )
    {
      v24 = v21[4];
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
        a4,
        &v23,
        (const unsigned __int8 *)&v24);
      *(_DWORD *)(v23 + 24) |= 4u;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v22);
      v21 = v22;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v25,
      (__int64)&v25,
      (__int64)v25[1]);
    std::_Deallocate<16,0>(v25, 0x28uLL);
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)v27,
    (__int64)v27,
    *((_QWORD *)v27[0] + 1));
  std::_Deallocate<16,0>(v27[0], 0x28uLL);
}
