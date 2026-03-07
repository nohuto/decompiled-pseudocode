void __fastcall CInteractionTrackerBindingManager::TransitionDisconnectedTrackersToIdle(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        struct CInteractionTracker *a3)
{
  SIZE_T size_of; // rax
  _QWORD *v7; // rax
  SIZE_T v8; // rax
  _QWORD *v9; // rax
  __int64 **v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rbx
  float CurrentValue; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  __int64 *v16; // [rsp+30h] [rbp-30h] BYREF
  void *v17[2]; // [rsp+38h] [rbp-28h] BYREF
  void *v18[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v19; // [rsp+98h] [rbp+38h] BYREF

  v18[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  v17[1] = 0LL;
  v18[0] = v7;
  v8 = std::_Get_size_of_n<40>(1uLL);
  v9 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
  v19 = 0LL;
  v16 = 0LL;
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  v17[0] = v9;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
    (__int64)this,
    (__int64)a2,
    7u,
    (__int64 *)v18,
    (__int64)&v19);
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
    (__int64)this,
    (__int64)a3,
    7u,
    (__int64 *)v17,
    (__int64)&v16);
  if ( v19 )
  {
    if ( v16 && v19 == v16 )
    {
      std::set<CInteractionTracker *>::~set<CInteractionTracker *>(v17);
      std::set<CInteractionTracker *>::~set<CInteractionTracker *>(v18);
      return;
    }
    v10 = (__int64 **)v17[0];
  }
  else
  {
    v10 = (__int64 **)v18[0];
  }
  v11 = *v10;
  v19 = v11;
  while ( !*((_BYTE *)v11 + 25) )
  {
    v12 = v11[4];
    if ( *(_DWORD *)(v12 + 176) == 1 )
    {
      CInteractionTracker::SetState(v11[4], 2, 1);
      CurrentValue = CInteractionTracker::GetCurrentValue(v12, 0);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v12, 0, CurrentValue, 1);
      v14 = CInteractionTracker::GetCurrentValue(v12, 1);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v12, 1u, v14, 1);
      v15 = CInteractionTracker::GetCurrentValue(v12, 2);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v12, 2u, v15, 1);
    }
    CInteractionTracker::SetState(v12, 0, 1);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v19);
    v11 = v19;
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)v17,
    (__int64)v17,
    *((_QWORD *)v17[0] + 1));
  std::_Deallocate<16,0>(v17[0], 0x28uLL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)v18,
    (__int64)v18,
    *((_QWORD *)v18[0] + 1));
  std::_Deallocate<16,0>(v18[0], 0x28uLL);
}
