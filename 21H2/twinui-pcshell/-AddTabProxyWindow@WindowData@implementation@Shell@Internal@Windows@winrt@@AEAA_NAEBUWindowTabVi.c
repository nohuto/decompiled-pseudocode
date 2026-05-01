/*
 * XREFs of ?AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabView@3UI@456@@Z @ 0x1800F2278
 * Callers:
 *     ?AddTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@@Z @ 0x1800F21CC (-AddTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Id@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUguid@3@XZ @ 0x1800EB5B0 (-Id@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows.c)
 *     ?WindowId@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBAIXZ @ 0x1800ED1F0 (-WindowId@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@.c)
 *     ?CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@39456@_K@Z @ 0x1800F090C (-CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA-AU.c)
 *     ??$_Insert@Uguid@winrt@@AEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@?$list@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEAUguid@winrt@@AEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@4@@Z @ 0x1800F1308 (--$_Insert@Uguid@winrt@@AEAU-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winr.c)
 *     ??$_Insert_unverified@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@1@@Z @ 0x1800F1634 (--$_Insert_unverified@U-$pair@$$CBUguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@I.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::AddTabProxyWindow(
        winrt::Windows::Internal::Shell::implementation::WindowData *this,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabView *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rax
  _OWORD *v7; // rax
  char v8; // bl
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v12[16]; // [rsp+48h] [rbp-30h] BYREF

  v4 = *((_QWORD *)this + 1);
  v5 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::WindowId((_QWORD *)this + 2);
  winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::CreateTabProxyWindow(
    v4,
    &v10,
    (winrt::Windows::Internal::Shell::implementation::WindowData *)((char *)this + 16),
    a2,
    v5);
  v6 = v10;
  if ( v10 )
  {
    v7 = (_OWORD *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Id(
                     a2,
                     (__int64)v12);
    std::list<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>::_Insert<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow> &>(
      (__int64)this + 32,
      **((_QWORD **)this + 4),
      v7,
      &v10);
    std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::_Insert_unverified<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>>>>(
      (__int64)this + 24,
      (__int64)v11,
      (winrt::impl *)(**((_QWORD **)this + 4) + 16LL),
      **((_QWORD **)this + 4));
    v8 = 1;
    v6 = v10;
  }
  else
  {
    v8 = 0;
  }
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  return v8;
}
