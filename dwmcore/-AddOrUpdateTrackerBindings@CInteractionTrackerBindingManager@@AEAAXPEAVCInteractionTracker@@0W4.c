void __fastcall CInteractionTrackerBindingManager::AddOrUpdateTrackerBindings(
        CInteractionTrackerBindingManager *a1,
        _QWORD *a2,
        struct CInteractionTracker *a3,
        int a4)
{
  float *v4; // rdi
  struct CInteractionTracker *v5; // r13
  _DWORD *v6; // r12
  struct CWeakResourceReference **v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rbx
  struct CWeakResourceReference **v17; // rdi
  int v18; // eax
  __int64 appended; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  void *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct CWeakResourceReference *v26; // rcx
  __int64 v27; // rdx
  struct CWeakResourceReference *v28; // rax
  struct CWeakResourceReference *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  SIZE_T size_of; // rax
  _QWORD *v33; // rax
  void *v34; // rdx
  __int64 v35; // rsi
  struct CWeakResourceReference *WeakRefToSelf; // rax
  _QWORD *v37; // r12
  __int64 v38; // rsi
  struct CWeakResourceReference *v39; // rax
  _QWORD *v40; // rsi
  int v41; // [rsp+28h] [rbp-89h]
  void *v42[2]; // [rsp+38h] [rbp-79h] BYREF
  __int64 v43; // [rsp+48h] [rbp-69h] BYREF
  _QWORD *v44[3]; // [rsp+50h] [rbp-61h] BYREF
  char v45[8]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD **v46; // [rsp+70h] [rbp-41h]
  void *v47; // [rsp+80h] [rbp-31h]
  __int64 v48; // [rsp+88h] [rbp-29h]
  char v49[16]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v50; // [rsp+B8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]
  struct CWeakResourceReference **v52; // [rsp+118h] [rbp+67h] BYREF
  _QWORD *v53; // [rsp+120h] [rbp+6Fh] BYREF
  struct CInteractionTracker *v54; // [rsp+128h] [rbp+77h] BYREF
  int v55; // [rsp+130h] [rbp+7Fh] BYREF

  v55 = a4;
  v54 = a3;
  v53 = a2;
  v4 = (float *)((char *)a1 + 72);
  v5 = a3;
  v6 = a2;
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
    (_QWORD *)a1 + 9,
    &v43,
    (const unsigned __int8 *)&v53);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
    v4,
    &v52,
    (const unsigned __int8 *)&v54);
  v9 = v52;
  if ( v52 == *((struct CWeakResourceReference ***)a1 + 10) )
  {
    if ( !a4 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        104LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)0x80070057LL,
        v41);
    std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>((__int64)v45);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::emplace<CInteractionTracker * &,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>(
      v4,
      (__int64)v44,
      (unsigned __int8 *)&v54,
      (__int64)v45);
    v5 = v54;
    if ( *((CInteractionTrackerBindingManager **)v54 + 80) != a1 )
    {
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)a1 + 8LL))(a1);
      v10 = *((_QWORD *)v5 + 80);
      *((_QWORD *)v5 + 80) = a1;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v5 + 8LL))(v5);
    v9 = (struct CWeakResourceReference **)*std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
                                              v4,
                                              &v52,
                                              (const unsigned __int8 *)&v54);
    std::_Deallocate<16,0>(v47, (v48 - (_QWORD)v47) & 0xFFFFFFFFFFFFFFF8uLL);
    std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>>>(
      v11,
      v46);
    std::_Deallocate<16,0>(v46, 0x20uLL);
  }
  v12 = v43;
  if ( v43 == *((_QWORD *)a1 + 10) )
  {
    if ( !a4 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        119LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)0x80070057LL,
        v41);
    std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>((__int64)v45);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::emplace<CInteractionTracker * &,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>(
      v4,
      (__int64)v44,
      (unsigned __int8 *)&v53,
      (__int64)v45);
    v6 = v53;
    if ( (CInteractionTrackerBindingManager *)v53[80] != a1 )
    {
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)a1 + 8LL))(a1);
      v13 = *((_QWORD *)v6 + 80);
      *((_QWORD *)v6 + 80) = a1;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    v12 = *std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
             v4,
             &v52,
             (const unsigned __int8 *)&v53);
    std::_Deallocate<16,0>(v47, (v48 - (_QWORD)v47) & 0xFFFFFFFFFFFFFFF8uLL);
    std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>>>(
      v14,
      v46);
    std::_Deallocate<16,0>(v46, 0x20uLL);
  }
  v44[0] = (_QWORD *)(v12 + 24);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
    (_QWORD *)(v12 + 24),
    &v43,
    (const unsigned __int8 *)&v54);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
    v9 + 3,
    &v52,
    (const unsigned __int8 *)&v53);
  v16 = (_DWORD *)v43;
  v17 = v52;
  v42[0] = *(void **)(v12 + 32);
  if ( (void *)v43 == v42[0] || v52 == (struct CWeakResourceReference **)v9[4] )
  {
    if ( !v55 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        188LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
        (const char *)0x80070057LL,
        v41);
    v42[1] = 0LL;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v33 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v52 = 0LL;
    *v33 = v33;
    v33[1] = v33;
    v33[2] = v33;
    *((_WORD *)v33 + 12) = 257;
    v42[0] = v33;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
      (_DWORD)a1,
      (_DWORD)v6,
      7,
      (unsigned int)v42,
      (__int64)&v52);
    std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Find_lower_bound<CInteractionTracker *>(
      (__int64 *)v42,
      (__int64)v49,
      (unsigned __int64 *)&v54);
    v34 = (void *)v50;
    if ( *(_BYTE *)(v50 + 25) || (unsigned __int64)v5 < *(_QWORD *)(v50 + 32) )
      v34 = v42[0];
    if ( v34 == v42[0] && v52 )
    {
      v35 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      WeakRefToSelf = CInteractionTracker::GetWeakRefToSelf(v52);
      v37 = CExpressionManager::LookupExpressionsForTarget(v35, (__int64)WeakRefToSelf, 1);
      v38 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      v39 = CInteractionTracker::GetWeakRefToSelf(v52);
      v40 = CExpressionManager::LookupExpressionsForTarget(v38, (__int64)v39, 2);
      while ( v37 )
      {
        CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(a1, v5, v37[1], 1LL);
        v37 = (_QWORD *)v37[2];
      }
      while ( v40 )
      {
        CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(a1, v5, v40[1], 2LL);
        v40 = (_QWORD *)v40[2];
      }
    }
    if ( v16 == *((_DWORD **)v44[0] + 1) )
    {
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::emplace<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags &>(
        v44[0],
        (__int64)v44,
        (unsigned __int8 *)&v54,
        &v55);
      (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v54 + 8LL))(v54);
    }
    if ( v17 == (struct CWeakResourceReference **)v9[4] )
    {
      std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::emplace<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags &>(
        v9 + 3,
        (__int64)v44,
        (unsigned __int8 *)&v53,
        &v55);
      (*(void (__fastcall **)(_QWORD *))(*v53 + 8LL))(v53);
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)v42,
      (__int64)v42,
      *((_QWORD *)v42[0] + 1));
    std::_Deallocate<16,0>(v42[0], 0x28uLL);
  }
  else
  {
    v18 = v55;
    if ( v55 )
    {
      if ( v55 != *(_DWORD *)(v43 + 24) )
      {
        *((_DWORD *)v52 + 6) = v55;
        v16[6] = v18;
      }
    }
    else
    {
      appended = std::_Fnv1a_append_bytes(v15, (const unsigned __int8 *const)(v43 + 16), 8uLL);
      v20 = *(_QWORD *)(v12 + 48);
      v21 = 2 * (*(_QWORD *)(v12 + 72) & appended);
      if ( *(_DWORD **)(v20 + 16 * (*(_QWORD *)(v12 + 72) & appended) + 8) == v16 )
      {
        if ( *(_DWORD **)(v20 + 16 * (*(_QWORD *)(v12 + 72) & appended)) == v16 )
        {
          v22 = v42[0];
          *(void **)(v20 + 8 * v21) = v42[0];
        }
        else
        {
          v22 = (void *)*((_QWORD *)v16 + 1);
        }
        *(_QWORD *)(v20 + 8 * v21 + 8) = v22;
      }
      else if ( *(_DWORD **)(v20 + 16 * (*(_QWORD *)(v12 + 72) & appended)) == v16 )
      {
        *(_QWORD *)(v20 + 16 * (*(_QWORD *)(v12 + 72) & appended)) = *(_QWORD *)v16;
      }
      v23 = *(_QWORD *)v16;
      --*(_QWORD *)(v12 + 40);
      **((_QWORD **)v16 + 1) = v23;
      *(_QWORD *)(v23 + 8) = *((_QWORD *)v16 + 1);
      std::_Deallocate<16,0>(v16, 0x20uLL);
      (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v5 + 16LL))(v5);
      v25 = std::_Fnv1a_append_bytes(v24, (const unsigned __int8 *const)v17 + 16, 8uLL);
      v26 = v9[6];
      v27 = 2 * ((unsigned __int64)v9[9] & v25);
      if ( *((struct CWeakResourceReference ***)v26 + 2 * ((unsigned __int64)v9[9] & v25) + 1) == v17 )
      {
        if ( *((struct CWeakResourceReference ***)v26 + 2 * ((unsigned __int64)v9[9] & v25)) == v17 )
        {
          v28 = v9[4];
          *((_QWORD *)v26 + v27) = v28;
        }
        else
        {
          v28 = v17[1];
        }
        *((_QWORD *)v26 + v27 + 1) = v28;
      }
      else if ( *((struct CWeakResourceReference ***)v26 + 2 * ((unsigned __int64)v9[9] & v25)) == v17 )
      {
        *((_QWORD *)v26 + 2 * ((unsigned __int64)v9[9] & v25)) = *v17;
      }
      v29 = *v17;
      v9[5] = (struct CWeakResourceReference *)((char *)v9[5] - 1);
      *(_QWORD *)v17[1] = v29;
      *((_QWORD *)v29 + 1) = v17[1];
      std::_Deallocate<16,0>(v17, 0x20uLL);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
      if ( !*(_QWORD *)(v12 + 40) )
      {
        std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::_Unchecked_erase(
          (char *)a1 + 72,
          v12);
        v30 = *((_QWORD *)v6 + 80);
        if ( v30 )
        {
          *((_QWORD *)v6 + 80) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
      }
      if ( !v9[5] )
      {
        std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::_Unchecked_erase(
          (char *)a1 + 72,
          v9);
        v31 = *((_QWORD *)v5 + 80);
        if ( v31 )
        {
          *((_QWORD *)v5 + 80) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        }
        (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v5 + 16LL))(v5);
      }
      if ( v6[44] )
        CInteractionTrackerBindingManager::TransitionDisconnectedTrackersToIdle(
          a1,
          (struct CInteractionTracker *)v6,
          v5);
    }
  }
}
