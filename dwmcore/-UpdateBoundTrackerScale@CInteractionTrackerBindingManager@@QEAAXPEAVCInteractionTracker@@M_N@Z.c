void __fastcall CInteractionTrackerBindingManager::UpdateBoundTrackerScale(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        float a3,
        char a4)
{
  SIZE_T size_of; // rax
  _QWORD *v8; // rax
  __int64 *v9; // rax
  struct CInteractionTracker *v10; // rbx
  void *v11[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+10h] BYREF

  if ( (*((_BYTE *)a2 + 541) & 1) != 0 )
  {
    v11[1] = 0LL;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v8 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *v8 = v8;
    v8[1] = v8;
    v8[2] = v8;
    *((_WORD *)v8 + 12) = 257;
    v11[0] = v8;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 4u, (__int64 *)v11, 0LL);
    v9 = *(__int64 **)v11[0];
    v12 = *(__int64 **)v11[0];
    while ( !*((_BYTE *)v9 + 25) )
    {
      v10 = (struct CInteractionTracker *)v9[4];
      if ( v10 != a2 )
      {
        if ( (*((_BYTE *)v10 + 541) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)v9[4], 0);
        CInteractionTracker::SetScale((__int64)v10, a3, 1);
      }
      *((_BYTE *)v10 + 540) = (4 * a4) | *((_BYTE *)v10 + 540) & 0xFB;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v12);
      v9 = v12;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)v11,
      (__int64)v11,
      *((_QWORD *)v11[0] + 1));
    std::_Deallocate<16,0>(v11[0], 0x28uLL);
  }
}
