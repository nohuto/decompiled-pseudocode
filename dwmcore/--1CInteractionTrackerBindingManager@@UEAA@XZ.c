void __fastcall CInteractionTrackerBindingManager::~CInteractionTrackerBindingManager(
        CInteractionTrackerBindingManager *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CInteractionTrackerBindingManager::`vftable';
  std::_Deallocate<16,0>(
    *((void **)this + 12),
    (*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  std::_List_node<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>,void *>>>(
    v2,
    *((_QWORD *)this + 10));
  std::_Deallocate<16,0>(*((void **)this + 10), 0x58uLL);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
