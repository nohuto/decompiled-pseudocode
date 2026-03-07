__int64 __fastcall CInteractionTrackerBindingManager::RegisterIndirectTargetsForBoundTrackers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  SIZE_T size_of; // rax
  _QWORD *v9; // rax
  __int64 *v10; // rax
  struct CWeakResourceReference **v11; // rcx
  struct CWeakResourceReference *WeakRefToSelf; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 *v16; // [rsp+30h] [rbp-20h] BYREF
  void *v17[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v17[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v9 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  v17[0] = v9;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7u, (__int64 *)v17, 0LL);
  v10 = *(__int64 **)v17[0];
  v16 = *(__int64 **)v17[0];
  while ( !*((_BYTE *)v10 + 25) )
  {
    v11 = (struct CWeakResourceReference **)v10[4];
    if ( v11 != (struct CWeakResourceReference **)a2 )
    {
      WeakRefToSelf = CInteractionTracker::GetWeakRefToSelf(v11);
      v13 = CBaseExpression::RegisterIndirectTarget(a3, WeakRefToSelf, a4);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x321,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
          (const char *)(unsigned int)v13);
        std::set<CInteractionTracker *>::~set<CInteractionTracker *>(v17);
        return v14;
      }
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v16);
    v10 = v16;
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)v17,
    (__int64)v17,
    *((_QWORD *)v17[0] + 1));
  std::_Deallocate<16,0>(v17[0], 0x28uLL);
  return 0LL;
}
