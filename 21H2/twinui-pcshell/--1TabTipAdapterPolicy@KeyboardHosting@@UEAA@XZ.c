/*
 * XREFs of ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x1803CA664
 * Callers:
 *     ??_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z @ 0x1803CAC20 (--_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800EE5CC (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@@Z @ 0x1802D72CC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositione.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@@Z @ 0x1803C8A3C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@1@@Z @ 0x1803C8A98 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1803C8B84 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803CD84C (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::~TabTipAdapterPolicy(KeyboardHosting::TabTipAdapterPolicy *this)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  volatile int *v6; // rdx

  std::vector<void *>::_Tidy((__int64)this + 552);
  v2 = (_QWORD **)*((_QWORD *)this + 67);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x18);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*((void **)this + 67), (const struct std::nothrow_t *)0x18);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::Foundation::Size>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *>>>(
    (__int64)this + 480,
    (__int64)this + 480,
    *(_QWORD *)(*((_QWORD *)this + 60) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 60), (const struct std::nothrow_t *)0x28);
  std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
    (__int64)this + 464,
    (__int64)this + 464,
    *(_QWORD *)(*((_QWORD *)this + 58) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 58), (const struct std::nothrow_t *)0x30);
  std::vector<void *>::_Tidy((__int64)this + 400);
  std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>>>(
    v5,
    *((_QWORD ***)this + 48));
  std::_Deallocate<16,0>(*((void **)this + 48), (const struct std::nothrow_t *)0x58);
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((char *)this + 224);
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((char *)this + 216);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *>>>(
    (__int64)this + 88,
    (__int64)this + 88,
    *(__int64 **)(*((_QWORD *)this + 11) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 11), (const struct std::nothrow_t *)0x48);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::wstring>,void *>>>(
    (__int64)this + 72,
    (__int64)this + 72,
    *(__int64 **)(*((_QWORD *)this + 9) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 9), (const struct std::nothrow_t *)0x48);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v6);
}
