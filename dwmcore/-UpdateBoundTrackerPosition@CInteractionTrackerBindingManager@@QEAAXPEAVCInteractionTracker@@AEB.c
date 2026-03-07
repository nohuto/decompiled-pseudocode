void __fastcall CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        const struct D2DVector3 *a3,
        char a4)
{
  SIZE_T size_of; // rax
  _QWORD *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  __int64 **v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 **v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h]
  __int64 *v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  int v21; // [rsp+50h] [rbp-10h]

  if ( (*((_BYTE *)a2 + 541) & 1) != 0 )
  {
    v18 = 0LL;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v9 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *v9 = v9;
    v9[1] = v9;
    v9[2] = v9;
    *((_WORD *)v9 + 12) = 257;
    v17 = (__int64 **)v9;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 1u, (__int64 *)&v17, 0LL);
    v10 = *v17;
    v19 = *v17;
    while ( !*((_BYTE *)v10 + 25) )
    {
      v11 = v10[4];
      if ( (struct CInteractionTracker *)v11 != a2 )
      {
        if ( (*(_BYTE *)(v11 + 541) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)v10[4], 0);
        v12 = *(_DWORD *)(v11 + 88);
        v20 = *(_QWORD *)(v11 + 80);
        LODWORD(v20) = *(_DWORD *)a3;
        v21 = v12;
        CInteractionTracker::SetPosition(v11, (__int64)&v20, 1);
      }
      *(_BYTE *)(v11 + 540) = (4 * a4) | *(_BYTE *)(v11 + 540) & 0xFB;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v19);
      v10 = v19;
    }
    v13 = v17;
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v17,
      (__int64)&v17,
      (__int64)v17[1]);
    v13[1] = (__int64 *)v13;
    *v13 = (__int64 *)v13;
    v13[2] = (__int64 *)v13;
    v18 = 0LL;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 2u, (__int64 *)&v17, 0LL);
    v14 = *v17;
    v19 = *v17;
    while ( !*((_BYTE *)v14 + 25) )
    {
      v15 = v14[4];
      if ( (struct CInteractionTracker *)v15 != a2 )
      {
        if ( (*(_BYTE *)(v15 + 541) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)v14[4], 0);
        v16 = *(_DWORD *)(v15 + 88);
        v20 = *(_QWORD *)(v15 + 80);
        HIDWORD(v20) = *((_DWORD *)a3 + 1);
        v21 = v16;
        CInteractionTracker::SetPosition(v15, (__int64)&v20, 1);
      }
      *(_BYTE *)(v15 + 540) = (4 * a4) | *(_BYTE *)(v15 + 540) & 0xFB;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v19);
      v14 = v19;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v17,
      (__int64)&v17,
      (__int64)v17[1]);
    std::_Deallocate<16,0>(v17, 0x28uLL);
  }
}
