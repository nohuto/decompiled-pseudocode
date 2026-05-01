/*
 * XREFs of ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800F1DB4
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E44D4 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KUWindowData@implementation@Shell@Internal@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800EE45C (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F10D4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUguid@winrt@@U-$com_ptr@UTabProxyWindow.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F1108 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@In.c)
 *     ?RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800F28C4 (-RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::~WindowData(
        winrt::Windows::Internal::Shell::implementation::WindowData *this)
{
  __int64 **v2; // rsi
  __int64 *i; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64 **)*((_QWORD *)this + 4);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v12 = *((_OWORD *)i + 1);
    winrt::Windows::Internal::Shell::implementation::WindowData::RemoveTabProxyWindow(this, &v12);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 120LL))(
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 24));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 104LL))(
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 25));
  while ( 1 )
  {
    v4 = *((_QWORD *)this + 23);
    if ( !v4 )
      break;
    v5 = v4 - 1;
    *((_QWORD *)this + 23) = v5;
    if ( !v5 )
      *((_QWORD *)this + 22) = 0LL;
  }
  v6 = *((_QWORD *)this + 21);
  while ( v6 )
  {
    --v6;
    v7 = *(void **)(*((_QWORD *)this + 20) + 8 * v6);
    if ( v7 )
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x10);
  }
  v8 = (void *)*((_QWORD *)this + 20);
  if ( v8 )
    std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)(8LL * *((_QWORD *)this + 21)));
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  v9 = (void *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 19) = 0LL;
  std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0x10);
  std::vector<void *>::_Tidy((__int64)this + 112);
  std::_List_node<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,void *>>>(
    v10,
    *((_QWORD *)this + 12));
  std::_Deallocate<16,0>(*((void **)this + 12), (const struct std::nothrow_t *)0x28);
  std::vector<void *>::_Tidy((__int64)this + 48);
  std::_List_node<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>,void *>>>(
    v11,
    *((_QWORD *)this + 4));
  std::_Deallocate<16,0>(*((void **)this + 4), (const struct std::nothrow_t *)0x28);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)this + 2);
  if ( *((_QWORD *)this + 1) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 1);
}
