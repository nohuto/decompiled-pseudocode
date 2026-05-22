/*
 * XREFs of ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801A19F8
 * Callers:
 *     ?OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801A0DE0 (-OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z @ 0x1801A21B0 (-UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18002BED4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@2@@Z @ 0x18008FFB0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x180148E1C (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ??$As@UIMessageProxy@@@?$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18019D214 (--$As@UIMessageProxy@@@-$ComPtr@UIRemoteHotKeyCallBack@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18019DC6C (--$_Free_non_head@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___ @ 0x18019EC98 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_Microsoft--WRL--ComPtr.c)
 *     ??0?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18019EF0C (--0-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@@std@@@2@@std.c)
 *     ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x18019FA90 (-CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV-$list@V-$shared_p.c)
 *     ?_Unchecked_erase@?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@AEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@U_Iterator_base0@2@@2@V32@0@Z @ 0x1801A2298 (-_Unchecked_erase@-$list@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V-$allocator@V-$Co.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotKeyProcessor::RemoveClientRegistration(
        HotKeyProcessor *this,
        struct HotkeyClientRegistration *a2)
{
  int v4; // esi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  ULONG_PTR v7; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *j; // rdi
  void **v14; // rbx
  __int64 v15; // rcx
  _QWORD *i; // rax
  _QWORD *v17; // [rsp+20h] [rbp-10h] BYREF
  HotKeyProcessor *v18; // [rsp+28h] [rbp-8h]
  ULONG_PTR retaddr; // [rsp+58h] [rbp+28h]
  __int64 v20; // [rsp+68h] [rbp+38h] BYREF
  __int64 v21; // [rsp+70h] [rbp+40h] BYREF
  char v22; // [rsp+78h] [rbp+48h] BYREF

  v4 = 0;
  v21 = 0LL;
  if ( !a2 )
    goto LABEL_7;
  v5 = (_QWORD *)*((_QWORD *)this + 3);
  v17 = a2;
  v18 = this;
  v6 = std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___(
         &v20,
         (_QWORD *)*v5,
         v5,
         (__int64)&v17);
  std::list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>::_Unchecked_erase((char *)this + 24, &v22, *v6, v5);
  v4 = Microsoft::WRL::ComPtr<IRemoteHotKeyCallBack>::As<IMessageProxy>((_QWORD *)a2 + 13, &v21);
  if ( v4 < 0 )
  {
    v7 = 1057LL;
LABEL_4:
    if ( v4 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, v7);
    FailFastWithHR(v4, retaddr, v7);
    goto LABEL_7;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v21 + 64LL))(v21, (char *)this + 8);
  if ( v4 < 0 )
  {
    v7 = 1058LL;
    goto LABEL_4;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)a2 + 13);
  v9 = (_QWORD *)**((_QWORD **)this + 5);
  while ( v9 != *((_QWORD **)this + 5) )
  {
    LODWORD(v20) = 0;
    std::list<std::shared_ptr<HotKeyInfo>>::list<std::shared_ptr<HotKeyInfo>>(&v17, (_QWORD ***)v9 + 5);
    HotKeyProcessor::CleanupClientHotKeys(v10, (__int64)a2, &v17, &v20);
    v11 = v9[2];
    if ( v18 )
    {
      if ( *(_BYTE *)(v11 + 25) )
      {
        for ( i = (_QWORD *)v9[1]; !*((_BYTE *)i + 25) && v9 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
          v9 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v11);
      }
      v9 = i;
    }
    else
    {
      v12 = v9;
      if ( *(_BYTE *)(v11 + 25) )
      {
        for ( j = (_QWORD *)v9[1]; !*((_BYTE *)j + 25) && v12 == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
          v12 = j;
      }
      else
      {
        j = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v11);
      }
      v14 = (void **)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
                       (_QWORD *)this + 5,
                       v9);
      std::_List_node<std::shared_ptr<HotKeyInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
        v15,
        (_QWORD **)v14[5]);
      std::_Deallocate<16,0>(v14[5], (const struct std::nothrow_t *)0x20);
      std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)0x38);
      v9 = j;
    }
    std::_List_node<std::shared_ptr<HotKeyInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
      v11,
      (_QWORD **)v17);
    std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)0x20);
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v21);
  return (unsigned int)v4;
}
