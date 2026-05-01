/*
 * XREFs of ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180375A90
 * Callers:
 *     ?OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Z @ 0x180374EC0 (-OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@.c)
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x180376080 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802C380C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_pol.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x1802D82E4 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemCollectionChangedEventType@1234@@Z @ 0x18036ACD0 (--0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::RemoveSwitchItem(
        __int64 **a1,
        __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 **v4; // r10
  int v5; // ebp
  __int64 *v6; // rbx
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rcx
  void (__fastcall *v9)(__int64 **, __int64 **, __int64); // rbp
  __int64 *v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // r8
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v3 = __abi_winrt_ptr_ctor(a2);
  v14 = v3;
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    a1 + 13,
    &v13,
    &v14);
  if ( v13 != *v4 )
  {
    v5 = *(_DWORD *)(v13[5] + 8);
    v6 = std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Extract(
           v4,
           (__int64)v13);
    v7 = (std::_Ref_count_base *)v6[6];
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    v8 = v6[4];
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x38);
    if ( !v5 )
    {
      v9 = (void (__fastcall *)(__int64 **, __int64 **, __int64))(*a1)[8];
      v13 = (__int64 *)Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
      v10 = (__int64 *)Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
                         (__int64)v13,
                         v3,
                         1);
      v11 = v10;
      v13 = v10;
      v12 = v10 ? (__int64)(v10 + 1) : 0LL;
      v9(a1, a1 + 2, v12);
      if ( v11 )
        (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
}
