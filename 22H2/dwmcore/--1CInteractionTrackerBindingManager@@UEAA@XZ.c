/*
 * XREFs of ??1CInteractionTrackerBindingManager@@UEAA@XZ @ 0x1801CDECC
 * Callers:
 *     ??_ECInteractionTrackerBindingManager@@UEAAPEAXI@Z @ 0x1801CDFF0 (--_ECInteractionTrackerBindingManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800DA6EC (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 */

void __fastcall CInteractionTrackerBindingManager::~CInteractionTrackerBindingManager(
        CInteractionTrackerBindingManager *this)
{
  __int64 v2; // rdx
  void *v3; // rsi
  void *v4; // rbp
  _QWORD **v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx

  *(_QWORD *)this = &CInteractionTrackerBindingManager::`vftable';
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)this + 88);
  v2 = *((_QWORD *)this + 9);
  **(_QWORD **)(v2 + 8) = 0LL;
  v3 = *(void **)v2;
  if ( *(_QWORD *)v2 )
  {
    do
    {
      v4 = *(void **)v3;
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)v3 + 48);
      v5 = (_QWORD **)*((_QWORD *)v3 + 4);
      *v5[1] = 0LL;
      v6 = *v5;
      if ( v6 )
      {
        do
        {
          v7 = (_QWORD *)*v6;
          std::_Deallocate<16,0>(v6, 0x20uLL);
          v6 = v7;
        }
        while ( v7 );
      }
      std::_Deallocate<16,0>(*((void **)v3 + 4), 0x20uLL);
      std::_Deallocate<16,0>(v3, 0x58uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*((void **)this + 9), 0x58uLL);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
