char __fastcall CInteractionTrackerBindingManager::BoundTrackersHaveActiveCustomAnimations(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2)
{
  char v2; // si
  int v3; // edi
  int v4; // ebx
  SIZE_T size_of; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // r10
  __int64 *v8; // rcx
  void *v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = (int)this;
  v4 = (int)a2;
  v10[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  v10[0] = v6;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(v3, v4, 7, (unsigned int)v10, 0LL);
  v7 = v10[0];
  v8 = *(__int64 **)v10[0];
  v11 = *(__int64 **)v10[0];
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( CInteractionTracker::HasActiveCustomAnimation((CInteractionTracker *)v8[4]) )
    {
      v2 = 1;
      break;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v11);
    v8 = v11;
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)v10,
    (__int64)v10,
    v7[1]);
  std::_Deallocate<16,0>(v10[0], 0x28uLL);
  return v2;
}
