void __fastcall std::_List_node<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  void **v2; // rdi
  void **v3; // rbx
  __int64 v4; // rcx

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(void ***)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = (void **)*v2;
      std::_Deallocate<16,0>(v2[6], ((_BYTE *)v2[7] - (_BYTE *)v2[6]) & 0xFFFFFFFFFFFFFFF8uLL);
      v2[6] = 0LL;
      v2[7] = 0LL;
      v2[8] = 0LL;
      std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>>>(
        v4,
        (_QWORD **)v2[4]);
      std::_Deallocate<16,0>(v2[4], 0x20uLL);
      std::_Deallocate<16,0>(v2, 0x58uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
