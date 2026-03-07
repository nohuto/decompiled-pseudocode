void __fastcall CInteractionTrackerBindingManager::BringBoundTrackersStateInSync(
        int a1,
        __int64 a2,
        CInteractionTracker *a3,
        int a4)
{
  SIZE_T size_of; // rax
  _QWORD *v8; // rax
  SIZE_T v9; // rax
  _QWORD *v10; // rax
  CInteractionTracker *v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rdi
  float CurrentValue; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  CInteractionTracker *v20; // [rsp+30h] [rbp-30h] BYREF
  CInteractionTracker *v21; // [rsp+38h] [rbp-28h] BYREF
  void *v22[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v23; // [rsp+50h] [rbp-10h] BYREF
  __int64 v24; // [rsp+58h] [rbp-8h]

  if ( a4 && (*(_DWORD *)(a2 + 176) || *((_DWORD *)a3 + 44)) )
  {
    v21 = 0LL;
    v20 = 0LL;
    v24 = 0LL;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v8 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *v8 = v8;
    v8[1] = v8;
    v8[2] = v8;
    *((_WORD *)v8 + 12) = 257;
    v22[1] = 0LL;
    v23 = v8;
    v9 = std::_Get_size_of_n<40>(1uLL);
    v10 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
    *v10 = v10;
    v10[1] = v10;
    v10[2] = v10;
    *((_WORD *)v10 + 12) = 257;
    v22[0] = v10;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7, (unsigned int)&v23, (__int64)&v21);
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, (_DWORD)a3, 7, (unsigned int)v22, (__int64)&v20);
    v11 = v20;
    if ( v21 == v20 )
    {
      std::set<CInteractionTracker *>::~set<CInteractionTracker *>(v22);
      std::set<CInteractionTracker *>::~set<CInteractionTracker *>((void **)&v23);
    }
    else
    {
      if ( *(_DWORD *)(a2 + 176) && v24 == 1 )
        *(_BYTE *)(a2 + 541) |= 1u;
      CInteractionTracker::StopCustomAnimations(a3, 1);
      CInteractionTracker::DestroyDefaultAnimations(a3, 0);
      CInteractionTracker::DestroyInteractionAnimations(a3);
      if ( v11 )
        CInteractionTracker::DemoteToBoundTracker(v11, 1);
      if ( *(_DWORD *)(a2 + 176) != *((_DWORD *)a3 + 44) )
      {
        v12 = *(__int64 **)v22[0];
        v21 = *(CInteractionTracker **)v22[0];
        while ( !*((_BYTE *)v12 + 25) )
        {
          v13 = v12[4];
          if ( !*(_DWORD *)(a2 + 176) && *((_DWORD *)a3 + 44) == 1 )
          {
            CInteractionTracker::SetState(v12[4], 2, 1);
            CurrentValue = CInteractionTracker::GetCurrentValue(v13, 0);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v13, 0, CurrentValue, 1);
            v15 = CInteractionTracker::GetCurrentValue(v13, 1);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v13, 1u, v15, 1);
            v16 = CInteractionTracker::GetCurrentValue(v13, 2);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v13, 2u, v16, 1);
            *(_BYTE *)(*(_QWORD *)(v13 + 480) + 24LL * (unsigned int)(*(_DWORD *)(v13 + 504) - 1) + 20) = 1;
          }
          CInteractionTracker::SetState(v13, *(_DWORD *)(a2 + 176), 1);
          if ( *(_DWORD *)(a2 + 176) == 2 )
          {
            v17 = CInteractionTracker::GetCurrentValue(v13, 0);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v13, 0, v17, 1);
            v18 = CInteractionTracker::GetCurrentValue(v13, 1);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v13, 1u, v18, 1);
            v19 = CInteractionTracker::GetCurrentValue(v13, 2);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v13, 2u, v19, 1);
          }
          *(_BYTE *)(*(_QWORD *)(v13 + 480) + 24LL * (unsigned int)(*(_DWORD *)(v13 + 504) - 1) + 20) = 1;
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++((__int64 **)&v21);
          v12 = (__int64 *)v21;
        }
      }
      std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
        (__int64)v22,
        (__int64)v22,
        *((_QWORD *)v22[0] + 1));
      std::_Deallocate<16,0>(v22[0], 0x28uLL);
      std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
        (__int64)&v23,
        (__int64)&v23,
        v23[1]);
      std::_Deallocate<16,0>(v23, 0x28uLL);
    }
  }
}
