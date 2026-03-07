void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  void *v4; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    std::_Deallocate<16,0>(*(void **)(v1 + 48), (*(_QWORD *)(v1 + 56) - *(_QWORD *)(v1 + 48)) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_QWORD *)(v1 + 64) = 0LL;
    std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>>>(
      v3,
      *(_QWORD ***)(v1 + 32));
    std::_Deallocate<16,0>(*(void **)(v1 + 32), 0x20uLL);
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 0x58uLL);
}
